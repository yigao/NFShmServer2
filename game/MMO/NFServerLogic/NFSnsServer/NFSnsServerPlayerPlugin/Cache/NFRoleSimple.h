// -------------------------------------------------------------------------
//    @FileName         :    NFRoleSimple.h
//    @Author           :    gaoyi
//    @Date             :    22-11-4
//    @Email			:    445267987@qq.com
//    @Module           :    NFRoleSimple
//
// -------------------------------------------------------------------------

#pragma once


#include "NFComm/NFCore/NFPlatform.h"
#include "NFComm/NFShmCore/NFShmObj.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFServerFrameTypeDefines.h"
#include "NFComm/NFShmCore/NFISharedMemModule.h"
#include "DBProto_s.h"
#include "DBProto2.pb.h"

class NFRoleSimple : public NFShmObj
{
public:
    NFRoleSimple();

    virtual ~NFRoleSimple();

    int CreateInit();

    int ResumeInit();

public:
    uint64_t GetRoleId() const;

    void SetRoleId(uint64_t roleId);

    uint64_t GetUid() const;

    void SetUid(uint64_t uid);

    uint32_t GetProxyId() const;

    void SetProxyId(uint32_t proxyId);

    bool IsOnline() const;

    void SetIsOnline(bool isOnline);

    const proto_ff_s::RoleDBBaseData_s &GetBaseData() const;

    void SetBaseData(const proto_ff_s::RoleDBBaseData_s &baseData);

    void ReadFromPB(const proto_ff::RoleDBBaseData &dbData);

    bool IsInited() const;

    void SetIsInited(bool isInited);

    uint32_t GetLogicId() const;

    void SetLogicId(uint32_t logicId);

    uint32_t GetGameId() const;

    void SetGameId(uint32_t gameId);

public:
    int Init(const proto_ff::RoleDBSimpleData &dbData);

public:
    int OnLogin(bool isLoadDB);

    int OnLogout();

    int OnDisconnect(uint32_t reason);

    int OnReconnect();

public:
    bool CanDelete();

public:
    int SendMsgToClient(uint32_t nMsgId, const google::protobuf::Message &xData);

    int SendMsgToLogicServer(uint32_t nMsgId, const google::protobuf::Message &xData);

    int SendMsgToWorldServer(uint32_t nMsgId, const google::protobuf::Message &xData);

    int SendMsgToGameServer(uint32_t nMsgId, const google::protobuf::Message &xData);

private:
    /**
     * @brief
     */
    bool m_isInited;
    /**
     * @brief ??????ID
     */
    uint64_t m_roleId;

    /**
     * @brief ??????ID
     */
    uint64_t m_uid;
public:
    /**
     * @brief ??????????????????????????????
     */

    /**
     * @brief
     */
    uint32_t m_proxyId;

    /**
     * @brief
     */
    uint32_t m_logicId;

    /**
     * @brief
     */
    uint32_t m_gameId;

    /**
     * @brief
     */
    bool m_isOnline;

    /**
     * @brief
     */
    ::proto_ff_s::RoleDBBaseData_s m_baseData;
DECLARE_IDCREATE(NFRoleSimple)

};