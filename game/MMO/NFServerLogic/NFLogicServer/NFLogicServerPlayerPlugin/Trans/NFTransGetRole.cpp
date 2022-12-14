// -------------------------------------------------------------------------
//    @FileName         :    NFTransGetRole.cpp
//    @Author           :    gaoyi
//    @Date             :    22-10-31
//    @Email			:    445267987@qq.com
//    @Module           :    NFTransGetRole
//
// -------------------------------------------------------------------------

#include "NFTransGetRole.h"

#include <NFServerComm/NFServerCommon/NFIServerMessageModule.h>
#include <NFComm/NFPluginModule/NFIConfigModule.h>
#include <NFComm/NFCore/NFCommon.h>
#include <ClientServer.pb.h>
#include <ServerInternal.pb.h>
#include <ServerInternalCmd.pb.h>
#include "NFLogicCommon/NFServerFrameTypeDefines.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFCheck.h"
#include "NFComm/NFPluginModule/NFIMessageModule.h"
#include "NFComm/NFKernelMessage/storesvr_sqldata.pb.h"
#include "NFLogicCommon/NFICommLogicModule.h"
#include "Player/NFPlayer.h"
#include "Player/NFPlayerMgr.h"
#include "ServerInternal2.pb.h"
#include "ServerInternalCmd2.pb.h"
#include "DBProto2.pb.h"
#include "NFComm/NFPluginModule/NFIKernelModule.h"
#include "NFTransCreateRole.h"

IMPLEMENT_IDCREATE_WITHTYPE(NFTransGetRole, EOT_TRANS_LOGIC_GET_ROLE, NFTransBase)

NFTransGetRole::NFTransGetRole():NFTransPlayerBase()
{
    if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode())
    {
        CreateInit();
    } else
    {
        ResumeInit();
    }
}

NFTransGetRole::~NFTransGetRole()
{
}

int NFTransGetRole::CreateInit()
{
    m_proxyId = 0;
    return 0;
}

int NFTransGetRole::ResumeInit()
{
    return 0;
}

int NFTransGetRole::Init(uint64_t roleId, uint64_t uid, uint32_t cmd, uint32_t fromBusId, uint32_t reqTransId)
{
    NFTransPlayerBase::Init(roleId, uid, cmd, fromBusId, reqTransId);
    SendGetRoleInfo();
    return 0;
}

int NFTransGetRole::HandleCSMsgReq(const google::protobuf::Message *pCSMsgReq)
{
    if (m_cmd == proto_ff::WORLD_TO_LOGIC_LOGIN_REQ)
    {
        const proto_ff::WorldToLogicLoginReq* pEnterGameReq = dynamic_cast<const proto_ff::WorldToLogicLoginReq*>(pCSMsgReq);
        CHECK_EXPR(pEnterGameReq, -1, "dynamic_cast<proto_ff::NotifyLogicEnterGameReq*>(pCSMsgReq) Failed");

        m_proxyId = pEnterGameReq->proxy_id();
    }
    return 0;
}

int NFTransGetRole::HandleDBMsgRes(const google::protobuf::Message *pSSMsgRes, uint32_t cmd, uint32_t table_id,
                                      uint32_t seq, uint32_t err_code)
{
    if (cmd == proto_ff::E_STORESVR_S2C_SELECTOBJ)
    {
        const storesvr_sqldata::storesvr_selobj_res *pRes = dynamic_cast<const storesvr_sqldata::storesvr_selobj_res *>(pSSMsgRes);
        CHECK_EXPR(pRes, -1, "pRes == NULL");

        if (err_code != 0)
        {
            SetFinished(err_code);
            return 0;
        }

        ::proto_ff::RoleDBData dbData;
        dbData.ParsePartialFromString(pRes->sel_record());

        NFPlayer *pPlayer = NFPlayerMgr::Instance(m_pObjPluginManager)->CreatePlayer(dbData.cid(), dbData.uid(), dbData);
        CHECK_EXPR(pPlayer, -1, "CreatePlayerByUid Failed! roleId:{} uid:{}", dbData.cid(), dbData.uid());

        if (m_cmd == proto_ff::WORLD_TO_LOGIC_LOGIN_REQ)
        {
            pPlayer->SetProxyId(m_proxyId);
            pPlayer->OnLogin(true);
        }

        HandleGetRoleDBRsp(dbData);
    }
    return 0;
}

int NFTransGetRole::HandleGetRoleDBRsp(proto_ff::RoleDBData& dbData)
{
    if (m_cmd == proto_ff::WORLD_TO_LOGIC_CREATE_ROLE_INFO_REQ)
    {
        proto_ff::LogicToWorldCreateRoleRsp xData;
        xData.set_ret_code(proto_ff::RET_SUCCESS);
        xData.set_uid(m_uid);
        xData.set_cid(m_roleId);
        xData.mutable_role_info()->CopyFrom(dbData);
        CHECK_EXPR_ASSERT(xData.mutable_role_info()->cid() == m_roleId, -1, "xData.mutable_role_info()->cid():{} != m_roleId:{}", xData.mutable_role_info()->cid(), m_roleId);
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "{}", xData.DebugString());
        FindModule<NFIServerMessageModule>()->SendMsgToWorldServer(NF_ST_LOGIC_SERVER, proto_ff::LOGIC_TO_WORLD_CREATE_ROLE_INFO_RSP, xData, m_uid);
    }

    SetFinished(0);
    return 0;
}

int NFTransGetRole::HandleTransFinished(int iRunLogicRetCode)
{
    if (m_cmd == proto_ff::WORLD_TO_LOGIC_CREATE_ROLE_INFO_REQ)
    {
        proto_ff::LogicToWorldCreateRoleRsp xData;
        xData.set_ret_code(proto_ff::RET_LOGIN_CHARACTER_CREATE_FAILED);
        xData.set_uid(m_uid);
        xData.set_cid(m_roleId);
        FindModule<NFIServerMessageModule>()->SendMsgToWorldServer(NF_ST_LOGIC_SERVER, proto_ff::LOGIC_TO_WORLD_CREATE_ROLE_INFO_RSP, xData, m_uid);
    }

    return 0;
}

int NFTransGetRole::SendGetRoleInfo()
{
    auto pServerConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_LOGIC_SERVER);
    CHECK_EXPR(pServerConfig, -1, "FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_LOGIC_SERVER) Failed");

    proto_ff::RoleDBData xData;
    xData.set_cid(m_roleId);

    FindModule<NFIServerMessageModule>()->SendTransToStoreServer(NF_ST_LOGIC_SERVER, 0,
                                                                 proto_ff::E_STORESVR_C2S_SELECTOBJ, 0, pServerConfig->DefaultDBName,
                                                                 "RoleDBData", xData,GetGlobalID(), 0, m_roleId);
    return 0;
}