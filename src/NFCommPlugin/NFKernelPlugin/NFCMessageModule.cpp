// -------------------------------------------------------------------------
//    @FileName         :    NFCMsgModule.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------

#include <NFComm/NFCore/NFStringUtility.h>
#include <NFComm/NFPluginModule/NFProtobufCommon.h>
#include "NFCMessageModule.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFCheck.h"
#include "NFComm/NFKernelMessage/storesvr_sqldata.pb.h"
#include "NFComm/NFKernelMessage/proto_kernel.pb.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFComm/NFShmCore/NFTransBase.h"
#include "NFComm/NFShmCore/NFISharedMemModule.h"
#include "NFComm/NFPluginModule/NFIConfigModule.h"
#include "NFComm/NFPluginModule/NFIMessageModule.h"
#include "NFComm/NFPluginModule/NFNetPackagePool.h"

NFCMessageModule::NFCMessageModule(NFIPluginManager *p) : NFIMessageModule(p) {
    m_pObjPluginManager = p;
    m_netModule = NULL;
    mxCallBack.resize(NF_ST_MAX);
    mServerLinkData.resize(NF_ST_MAX);
    for (size_t i = 0; i < mServerLinkData.size(); i++) {
        mServerLinkData[i].mServerType = (NF_SERVER_TYPES) i;
    }
}

NFCMessageModule::~NFCMessageModule()
{
	mxCallBack.clear();
}

bool NFCMessageModule::Awake()
{
    if (m_netModule != NULL) {
        return true;
    }

	NFINetModule* pDriver = FindModule<NFINetModule>();
	if (pDriver)
	{
        SetNetModule(pDriver);
	}

    return true;
}

bool NFCMessageModule::Finalize()
{
	mxCallBack.clear();
	return true;
}

bool NFCMessageModule::Execute()
{
	return true;
}

bool NFCMessageModule::OnReloadConfig()
{
	return true;
}

void NFCMessageModule::SetNetModule(NFINetModule* driver)
{
    m_netModule = driver;
	m_netModule->SetRecvCB(this, &NFCMessageModule::OnReceiveNetPack);
	m_netModule->SetEventCB(this, &NFCMessageModule::OnSocketNetEvent);
    m_netModule->SetHttpRecvCB(this, &NFCMessageModule::OnHttpReceiveNetPack);
    m_netModule->SetHttpFilterCB(this, &NFCMessageModule::OnHttpFilterPack);
}

uint64_t NFCMessageModule::BindServer(NF_SERVER_TYPES eServerType, const std::string& url, uint32_t nNetThreadNum, uint32_t nMaxConnectNum, uint32_t nPacketParseType, bool bSecurity)
{
	if (m_netModule)
	{
		return m_netModule->BindServer(eServerType, url, nNetThreadNum, nMaxConnectNum, nPacketParseType, bSecurity);
	}
	return 0;
}

uint64_t NFCMessageModule::ConnectServer(NF_SERVER_TYPES eServerType, const std::string& url, uint32_t nPacketParseType, bool bSecurity)
{
	if (m_netModule)
	{
		return m_netModule->ConnectServer(eServerType, url, nPacketParseType, bSecurity);
	}
	return 0;
}

int NFCMessageModule::ResumeConnect(NF_SERVER_TYPES eServerType)
{
    if (m_netModule)
    {
        return m_netModule->ResumeConnect(eServerType);
    }
    return -1;
}

std::string NFCMessageModule::GetLinkIp(uint64_t usLinkId)
{
	if (m_netModule)
	{
		return m_netModule->GetLinkIp(usLinkId);
	}
	return std::string();
}

uint32_t NFCMessageModule::GetPort(uint64_t usLinkId)
{
    if (m_netModule)
    {
        return m_netModule->GetPort(usLinkId);
    }
    return 0;
}

void NFCMessageModule::CloseLinkId(uint64_t usLinkId)
{
	if (m_netModule)
	{
		m_netModule->CloseLinkId(usLinkId);
	}

    uint32_t serverType = GetServerTypeFromUnlinkId(usLinkId);

    if (serverType > NF_ST_NONE && serverType < NF_ST_MAX)
    {
        DelAllCallBack((NF_SERVER_TYPES)serverType, usLinkId);
        DelServerLink((NF_SERVER_TYPES)serverType, usLinkId);
    }
}

void NFCMessageModule::TransPackage(uint64_t usLinkId, NFDataPackage& packet)
{
    if (m_netModule)
    {
        m_netModule->TransPackage(usLinkId, packet);
    }
}

void NFCMessageModule::Send(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const std::string& strData, uint64_t nParam1, uint64_t nParam2, uint64_t srcId, uint64_t dstId)
{
    if (m_netModule)
    {
        m_netModule->Send(usLinkId, nModuleId, nMsgID, strData, nParam1, nParam2, srcId, dstId);
    }
}

void NFCMessageModule::Send(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const char* msg, uint32_t nLen, uint64_t nParam1, uint64_t nParam2, uint64_t srcId, uint64_t dstId)
{
    if (m_netModule)
    {
        m_netModule->Send(usLinkId, nModuleId, nMsgID, msg, nLen, nParam1, nParam2, srcId, dstId);
    }
}

void NFCMessageModule::Send(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const google::protobuf::Message& xData, uint64_t nParam1, uint64_t nParam2, uint64_t srcId, uint64_t dstId)
{
    if (m_netModule)
    {
        m_netModule->Send(usLinkId, nModuleId, nMsgID, xData, nParam1, nParam2, srcId, dstId);
    }
}

void NFCMessageModule::SendServer(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const std::string& strData, uint64_t nParam1, uint64_t nParam2, uint64_t nSrcID, uint64_t nDstId)
{
    if (m_netModule)
    {
        m_netModule->SendServer(usLinkId, nModuleId, nMsgID, strData, nParam1, nParam2, nSrcID, nDstId);
    }
}

void NFCMessageModule::SendServer(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const char* msg, uint32_t nLen, uint64_t nParam1, uint64_t nParam2, uint64_t nSrcID, uint64_t nDstId)
{
    if (m_netModule)
    {
        m_netModule->SendServer(usLinkId, nModuleId, nMsgID, msg, nLen, nParam1, nParam2, nSrcID, nDstId);
    }
}

void NFCMessageModule::SendServer(uint64_t usLinkId, uint32_t nModuleId, uint32_t nMsgID, const google::protobuf::Message& xData, uint64_t nParam1, uint64_t nParam2, uint64_t nSrcID, uint64_t nDstId)
{
    if (m_netModule)
    {
        m_netModule->SendServer(usLinkId, nModuleId, nMsgID, xData, nParam1, nParam2, nSrcID, nDstId);
    }
}

std::string storesvr_selectbycond(const std::string &dbname, const std::string &tbname,
                                  uint64_t mod_key, const std::vector<storesvr_sqldata::storesvr_vk> &vk_list,
                                  const std::string &additional_conds = "", const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_sel select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }

    select.mutable_sel_cond()->set_mod_key(mod_key);

    select.mutable_sel_cond()->set_where_additional_conds(additional_conds);
    for (size_t i = 0; i < vk_list.size(); i++) {
        ::storesvr_sqldata::storesvr_vk *pvk = select.mutable_sel_cond()->add_where_conds();
        *pvk = vk_list[i];
    }
    return select.SerializeAsString();
}

// select对象查询，返回打包数据，该数据可直接网络发送
std::string storesvr_selectobj(const std::string &dbname, const std::string &tbname,
                               uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_selobj select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.set_mod_key(mod_key);
    select.set_sel_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

// insert对象插入，返回打包数据
std::string storesvr_insert(const std::string &dbname, const std::string &tbname,
                            uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_ins select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.set_mod_key(mod_key);
    select.set_ins_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

// 按条件删除
std::string storesvr_deletebycond(const std::string &dbname, const std::string &tbname,
                                  uint64_t mod_key, const std::vector<storesvr_sqldata::storesvr_vk> &vk_list, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_del select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.mutable_del_cond()->set_mod_key(mod_key);
    for (size_t i = 0; i < vk_list.size(); i++) {
        ::storesvr_sqldata::storesvr_vk *pvk = select.mutable_del_cond()->add_where_conds();
        *pvk = vk_list[i];
    }
    return select.SerializeAsString();
}

// 按对象删除
std::string storesvr_delete(const std::string &dbname, const std::string &tbname,
                            uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_delobj select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.set_mod_key(mod_key);
    select.set_del_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

std::string storesvr_modifybycond(const std::string &dbname, const std::string &tbname,
                                  uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::vector<storesvr_sqldata::storesvr_vk> &vk_list,
                                  const std::string &additional_conds = "", const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_mod select;
    select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }

    select.mutable_mod_cond()->set_mod_key(mod_key);

    select.mutable_mod_cond()->set_where_additional_conds(additional_conds);
    for (size_t i = 0; i < vk_list.size(); i++) {
        ::storesvr_sqldata::storesvr_vk *pvk = select.mutable_mod_cond()->add_where_conds();
        *pvk = vk_list[i];
    }

    select.set_mod_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

// 按对象修改
std::string storesvr_modifyobj(const std::string &dbname, const std::string &tbname,
                               uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_modobj select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.set_mod_key(mod_key);
    select.set_mod_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}


std::string storesvr_modinsbycond(const std::string &dbname, const std::string &tbname,
                                  uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::vector<storesvr_sqldata::storesvr_vk> &vk_list,
                                  const std::string &additional_conds = "", const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_modins select;
    select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }

    select.mutable_mod_cond()->set_mod_key(mod_key);

    select.mutable_mod_cond()->set_where_additional_conds(additional_conds);
    for (size_t i = 0; i < vk_list.size(); i++) {
        ::storesvr_sqldata::storesvr_vk *pvk = select.mutable_mod_cond()->add_where_conds();
        *pvk = vk_list[i];
    }

    select.set_mod_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

// 修改插入
std::string storesvr_modinsobj(const std::string &dbname, const std::string &tbname,
                               uint64_t mod_key, const ::google::protobuf::Message &msg_obj, const std::string& cls_name = "") {
    storesvr_sqldata::storesvr_modinsobj select;
	select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    if (cls_name.empty())
    {
        select.mutable_baseinfo()->set_clname(tbname);
    }
    else
    {
        select.mutable_baseinfo()->set_clname(cls_name);
    }
    select.set_mod_key(mod_key);
    select.set_modins_record(msg_obj.SerializeAsString());
    return select.SerializeAsString();
}

// 按对象修改
std::string storesvr_execute(const std::string &dbname, const std::string &tbname,
                            uint64_t mod_key, const std::string &msg) {
    storesvr_sqldata::storesvr_execute select;
    select.mutable_baseinfo()->set_dbname(dbname);
    select.mutable_baseinfo()->set_tbname(tbname);
    select.set_mod_key(mod_key);
    select.set_execute_record(msg+";");
    return select.SerializeAsString();
}

bool NFCMessageModule::DelAllCallBack(NF_SERVER_TYPES eType, uint64_t unLinkId)
{
    if (eType < mxCallBack.size() && unLinkId > 0) {
        mxCallBack[eType].mxEventCallBack.erase(unLinkId);
        mxCallBack[eType].mxOtherMsgCallBackList.erase(unLinkId);
        return true;
    }

    return true;
}

bool NFCMessageModule::DelAllCallBack(void *pTarget) {
    for (size_t i = 0; i < mxCallBack.size(); i++) {
        CallBack& callBack = mxCallBack[i];
        for(int i = 0; i < (int)callBack.mxReceiveCallBack.size(); i++)
        {
            for(int j = 0; j < (int)callBack.mxReceiveCallBack[i].size(); j++)
            {
                if (callBack.mxReceiveCallBack[i][j].m_pTarget != NULL)
                {
                    callBack.mxReceiveCallBack[i][j] = NetReceiveFunctor();
                }
            }
        }

		for (auto iter = callBack.mxEventCallBack.begin(); iter != callBack.mxEventCallBack.end();)
		{
			if (iter->second.m_pTarget == pTarget)
			{
				iter = mxCallBack[i].mxEventCallBack.erase(iter);
			}
			else
			{
				iter++;
			}
		}

		for (auto iter = callBack.mxOtherMsgCallBackList.begin(); iter != callBack.mxOtherMsgCallBackList.end();)
		{
			if (iter->second.m_pTarget == pTarget)
			{
				iter = callBack.mxOtherMsgCallBackList.erase(iter);
			}
			else
			{
				iter++;
			}
		}

        if (callBack.mxAllMsgCallBackList.m_pTarget == pTarget)
        {
            callBack.mxAllMsgCallBackList = NetReceiveFunctor();
        }
	}
	return true;
}

bool NFCMessageModule::AddMessageCallBack(NF_SERVER_TYPES eType, uint32_t nMsgID, void *pTarget,
                                          const NET_RECEIVE_FUNCTOR &cb) {
    if (eType < mxCallBack.size()) {
        CHECK_EXPR_ASSERT(nMsgID < NF_NET_MAX_MSG_ID, false, "nMsgID:{} >= NF_NET_MAX_MSG_ID", nMsgID);
        mxCallBack[eType].mxReceiveCallBack[0][nMsgID] = NetReceiveFunctor(pTarget, cb);
        return true;
    }
    return false;
}

bool NFCMessageModule::AddMessageCallBack(NF_SERVER_TYPES eType, uint32_t nModuleId, uint32_t nMsgID, void* pTarget, const NET_RECEIVE_FUNCTOR & cb)
{
    if (eType < mxCallBack.size()) {
        CHECK_EXPR_ASSERT(nModuleId < NF_MODULE_MAX, false, "nModuleId:{} >= NF_MODULE_MAX", nModuleId);
        CHECK_EXPR_ASSERT(nMsgID < NF_NET_MAX_MSG_ID, false, "nMsgID:{} >= NF_NET_MAX_MSG_ID", nMsgID);
        mxCallBack[eType].mxReceiveCallBack[nModuleId][nMsgID] = NetReceiveFunctor(pTarget, cb);
        return true;
    }
    return false;
}

std::set<uint32_t> NFCMessageModule::GetAllMsg(NF_SERVER_TYPES eType, uint32_t nModuleId)
{
    std::set<uint32_t> vec;
    if (eType < mxCallBack.size()) {
        CHECK_EXPR_ASSERT(nModuleId < NF_MODULE_MAX, vec, "nModuleId:{} >= NF_MODULE_MAX", nModuleId);
        for(int i = 0; i < (int)mxCallBack[eType].mxReceiveCallBack[nModuleId].size(); i++)
        {
            if (mxCallBack[eType].mxReceiveCallBack[nModuleId][i].m_pTarget != NULL)
            {
                vec.insert(i);
            }
        }
    }
    return vec;
}

bool NFCMessageModule::AddOtherCallBack(NF_SERVER_TYPES eType, uint64_t linkId, void *pTarget,
                                        const NET_RECEIVE_FUNCTOR &cb) {
    if (eType < mxCallBack.size()) {
        mxCallBack[eType].mxOtherMsgCallBackList[linkId] = NetReceiveFunctor(pTarget, cb);
        return true;
    }
    return false;
}

bool NFCMessageModule::AddAllMsgCallBack(NF_SERVER_TYPES eType, void *pTarget, const NET_RECEIVE_FUNCTOR &cb)
{
    if (eType < mxCallBack.size()) {
        mxCallBack[eType].mxAllMsgCallBackList = NetReceiveFunctor(pTarget, cb);
        return true;
    }
    return false;
}

bool NFCMessageModule::AddEventCallBack(NF_SERVER_TYPES eType, uint64_t linkId, void* pTarget, const NET_EVENT_FUNCTOR& cb)
{
	if (eType < mxCallBack.size())
	{
		mxCallBack[eType].mxEventCallBack[linkId] = NetEventFunctor(pTarget, cb);
		return true;
	}
	return false;
}

int NFCMessageModule::OnHandleReceiveNetPack(uint64_t connectionLink, uint64_t objectLinkId, NFDataPackage& packet)
{
	uint32_t eServerType = GetServerTypeFromUnlinkId(objectLinkId);
	if (eServerType < mxCallBack.size()) {
		uint64_t startTime = NFGetMicroSecondTime();
        CallBack& callBack = mxCallBack[eServerType];
        if (callBack.mxAllMsgCallBackList.m_pFunctor)
        {
            int iRet = callBack.mxAllMsgCallBackList.m_pFunctor(objectLinkId, packet);
            if (iRet != 0)
            {
                return 0;
            }
        }

        CHECK_EXPR(packet.mModuleId < NF_MODULE_MAX, -1, "nModuleId:{} >= NF_MODULE_MAX", packet.mModuleId);
        CHECK_EXPR(packet.nMsgId < NF_NET_MAX_MSG_ID, -1, "nMsgID:{} >= NF_NET_MAX_MSG_ID", packet.nMsgId);
        NetReceiveFunctor& netFunctor = callBack.mxReceiveCallBack[packet.mModuleId][packet.nMsgId];
        if (netFunctor.m_pTarget != NULL) {
            NET_RECEIVE_FUNCTOR &pFun = netFunctor.m_pFunctor;
            if (pFun)
            {
                int iRet = pFun(objectLinkId, packet);
                netFunctor.m_iCount++;
                uint64_t useTime = NFGetMicroSecondTime() - startTime;
                netFunctor.m_iAllUseTime += useTime;
                if (useTime > netFunctor.m_iMaxTime)
                {
                    netFunctor.m_iMaxTime = useTime;
                }
                if (useTime < netFunctor.m_iMinTime)
                {
                    netFunctor.m_iMinTime = useTime;
                }
                if (useTime/1000 > 33)
                {
                    NFLogError(NF_LOG_SYSTEMLOG, 0, "moduleId:{}, nMsgId:{} use time:{} ms, too long", packet.mModuleId, packet.nMsgId, useTime/1000);
                }

                if (!(packet.mModuleId == 0 && (packet.nMsgId == NF_CLIENT_TO_SERVER_HEART_BEAT
                                                         || packet.nMsgId == NF_CLIENT_TO_SERVER_HEART_BEAT_RSP || packet.nMsgId == NF_SERVER_TO_SERVER_HEART_BEAT || packet.nMsgId == NF_SERVER_TO_SERVER_HEART_BEAT_RSP)))
                {
                    NFLogTrace(NF_LOG_RECV_MSG, 0, "packet:{} use time:{} us, count:{} allTime:{} perTime:{} minTime:{} maxTime:{}",
                               packet.ToString(), useTime, netFunctor.m_iCount, netFunctor.m_iAllUseTime, netFunctor.m_iAllUseTime/netFunctor.m_iCount, netFunctor.m_iMinTime, netFunctor.m_iMaxTime);
                }

                CHECK_RET(iRet, "packet:{}", packet.ToString());
            }

            return 0;
        }

        auto iterator2 = callBack.mxOtherMsgCallBackList.find(connectionLink);
        if (iterator2 != callBack.mxOtherMsgCallBackList.end()) {
            NET_RECEIVE_FUNCTOR &pFun = iterator2->second.m_pFunctor;
            if (pFun)
            {
                int iRet = pFun(objectLinkId, packet);
                iterator2->second.m_iCount++;
                uint64_t useTime = NFGetMicroSecondTime() - startTime;
                iterator2->second.m_iAllUseTime += useTime;
                if (useTime > iterator2->second.m_iMaxTime)
                {
                    iterator2->second.m_iMaxTime = useTime;
                }
                if (useTime < iterator2->second.m_iMinTime)
                {
                    iterator2->second.m_iMinTime = useTime;
                }
                if (useTime/1000 > 33)
                {
                    NFLogError(NF_LOG_SYSTEMLOG, 0, "connectionLink:{} use time:{} ms, too long", connectionLink, useTime/1000);
                }
                if (!(packet.mModuleId == 0 && (packet.nMsgId == NF_CLIENT_TO_SERVER_HEART_BEAT
                                                || packet.nMsgId == NF_CLIENT_TO_SERVER_HEART_BEAT_RSP || packet.nMsgId == NF_SERVER_TO_SERVER_HEART_BEAT || packet.nMsgId == NF_SERVER_TO_SERVER_HEART_BEAT_RSP)))
                {
                    NFLogTrace(NF_LOG_RECV_MSG, 0, "connectionLink:{} packet:{} use time:{} us, count:{} allTime:{} perTime:{} minTime:{} maxTime:{}",
                               connectionLink, packet.ToString(), useTime, iterator2->second.m_iCount, iterator2->second.m_iAllUseTime,
                               iterator2->second.m_iAllUseTime/iterator2->second.m_iCount, iterator2->second.m_iMinTime, iterator2->second.m_iMaxTime);
                }

                CHECK_RET(iRet, "packet:{}", packet.ToString());
            }
        }

        return 0;
	}
	return 0;
}

int NFCMessageModule::OnReceiveNetPack(uint64_t connectionLink, uint64_t objectLinkId, NFDataPackage& packet) {
    uint32_t eServerType = GetServerTypeFromUnlinkId(objectLinkId);
    if (eServerType < mxCallBack.size()) {
        uint64_t startTime = NFGetMicroSecondTime();
        if (eServerType != NF_ST_ROUTE_AGENT_SERVER && eServerType != NF_ST_ROUTE_SERVER && eServerType != NF_ST_PROXY_AGENT_SERVER) {
            if (packet.mModuleId == 0 && packet.nMsgId == proto_ff::NF_SERVER_TO_SERVER_TRANS_CMD) {
                proto_ff::Proto_SvrPkg svrPkg;
                CLIENT_MSG_PROCESS_WITH_PRINTF(packet, svrPkg);

                if (svrPkg.disp_info().rsp_trans_id() > 0) {
                    NFTransBase *pTrans = FindModule<NFISharedMemModule>()->GetTrans(svrPkg.disp_info().rsp_trans_id());
                    if (pTrans && !pTrans->IsFinished()) {
                        pTrans->ProcessDispSvrRes(objectLinkId, packet, svrPkg);
                        uint64_t useTime = NFGetMicroSecondTime() - startTime;
                        if (useTime/1000 > 33)
                        {
                            NFLogError(NF_LOG_SYSTEMLOG, 0, "Trans:{} ProcessDispSvrRes nMsgId:{} use time:{} ms, too long", pTrans->ClassTypeInfo(), svrPkg.msg_id(), useTime/1000);
                        }
                        NFLogTrace(NF_LOG_RECV_MSG, 0, "Trans:{} ProcessDispSvrRes nMsgId:{} packet:{} use time:{} us", pTrans->ClassTypeInfo(), svrPkg.msg_id(), packet.ToString(), useTime);
                    } else {
                        NFLogError(NF_LOG_SYSTEMLOG, 0,
                                   "can't find trans, trans maybe timeout, msgId:{} req_transid:{} rsp_transid:{}",
                                   svrPkg.msg_id(), svrPkg.disp_info().req_trans_id(), svrPkg.disp_info().rsp_trans_id());
                    }
                    return 0;
                }
				else
				{
				    NFDataPackage transPacket;
                    transPacket.nParam1 = packet.nParam1;
                    transPacket.nParam2 = svrPkg.disp_info().req_trans_id();
                    transPacket.mModuleId = 0;
                    transPacket.nMsgId = svrPkg.msg_id();
                    transPacket.nBuffer = (char*)svrPkg.msg_data().data();
                    transPacket.nMsgLen = svrPkg.msg_data().length();
					OnHandleReceiveNetPack(connectionLink, objectLinkId, transPacket);
				}

				return 0;
            } else if (packet.mModuleId == 0 && packet.nMsgId == proto_ff::NF_STORE_SERVER_TO_SERVER_DB_CMD) {
                proto_ff::Proto_SvrPkg svrPkg;
                CLIENT_MSG_PROCESS_WITH_PRINTF(packet, svrPkg);

                if (svrPkg.store_info().cb_data().type() == proto_ff::E_DISP_TYPE_BY_TRANSACTION)
                {
                    if (svrPkg.store_info().cb_data().id() > 0) {
                        NFTransBase *pTrans = FindModule<NFISharedMemModule>()->GetTrans(svrPkg.store_info().cb_data().id());
                        if (pTrans && !pTrans->IsFinished()) {
                            pTrans->ProcessDBMsgRes(svrPkg);
                            uint64_t useTime = NFGetMicroSecondTime() - startTime;
                            if (useTime/1000 > 33)
                            {
                                NFLogError(NF_LOG_SYSTEMLOG, 0, "Trans:{} ProcessDispSvrRes nMsgId:{} use time:{} ms, too long", pTrans->ClassTypeInfo(), svrPkg.store_info().cmd(), useTime/1000);
                            }
                            NFLogTrace(NF_LOG_RECV_MSG, 0, "Trans:{} ProcessDispSvrRes nMsgId:{}  use time:{} us", pTrans->ClassTypeInfo(), svrPkg.store_info().cmd(), useTime);
                        } else {
                            NFLogError(NF_LOG_SYSTEMLOG, 0,
                                       "can't find trans, trans maybe timeout, transid:{} ",
                                       svrPkg.store_info().cb_data().id());
                        }
                        return 0;
                    }
                    else
                    {
                        NFLogWarning(NF_LOG_SYSTEMLOG, 0, "the store server rsp not handle, no transid, msg:{}", svrPkg.DebugString());
                        return 0;
                    }
                }
            }
            else if (packet.mModuleId == 0 && packet.nMsgId == proto_ff::NF_STS_BROAD_PLAYER_MSG_NOTIFY)
            {
                proto_ff::Proto_STSBroadPlayerMsgNotify xMsg;
                CLIENT_MSG_PROCESS_WITH_PRINTF(packet, xMsg);

                for(int i = 0; i < (int)xMsg.user_id_size(); i++)
                {
                    uint64_t userId = xMsg.user_id(i);
                    NFDataPackage transPacket;
                    transPacket.nParam1 = userId;
                    transPacket.nParam2 = packet.nParam2;
                    transPacket.mModuleId = 0;
                    transPacket.nMsgId = xMsg.msg_id();
                    transPacket.nBuffer = (char *)xMsg.msg_data().data();
                    transPacket.nMsgLen = xMsg.msg_data().length();

                    OnHandleReceiveNetPack(connectionLink, objectLinkId, transPacket);
                }

                uint64_t useTime = NFGetMicroSecondTime() - startTime;
                if (useTime/1000 > 33)
                {
                    NFLogError(NF_LOG_SYSTEMLOG, 0, "BroadPlayerMsgNotify nMsgId:{} use time:{} ms, too long", xMsg.msg_id(), useTime/1000);
                }
                NFLogTrace(NF_LOG_RECV_MSG, 0, "BroadPlayerMsgNotify nMsgId:{}  use time:{} us", xMsg.msg_id(), useTime);

                return 0;
            }
        }

		OnHandleReceiveNetPack(connectionLink, objectLinkId, packet);
	}
	return 0;
}

int NFCMessageModule::OnSocketNetEvent(eMsgType nEvent, uint64_t connectionLink, uint64_t objectLinkId) {
    uint32_t eServerType = GetServerTypeFromUnlinkId(objectLinkId);
    if (eServerType < mxCallBack.size()) {
        auto iter = mxCallBack[eServerType].mxEventCallBack.find(connectionLink);
        if (iter != mxCallBack[eServerType].mxEventCallBack.end()) {
            NET_EVENT_FUNCTOR &pFun = iter->second.m_pFunctor;
            if (pFun)
            {
                int iRet = pFun(nEvent, objectLinkId);
                CHECK_RET(iRet, "nEvent:{}", nEvent);
            }
        }
    }
    return 0;
}

int
NFCMessageModule::SendMsgToServer(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES recvType, uint32_t srcBusId, uint32_t dstBusId, uint32_t nModuleId, uint32_t nMsgId,
                                  const google::protobuf::Message &xData, uint64_t param1, uint64_t param2) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), -1, "eType error:{}", (int) eSendType);
    ServerLinkData& linkData = mServerLinkData[eSendType];

    NFServerConfig *pConfig = FindModule<NFIConfigModule>()->GetAppConfig(eSendType);
    CHECK_EXPR(pConfig, -1, "can't find server config! servertype:{}", GetServerName(eSendType));

    uint64_t destServerLinkId = GetUnLinkId(NF_IS_NONE, recvType, dstBusId, 0);
    uint64_t sendLinkId = GetUnLinkId(NF_IS_NONE, eSendType, srcBusId, 0);
    if (srcBusId == 0) {
        sendLinkId = GetUnLinkId(NF_IS_NONE, eSendType, pConfig->BusId, 0);
    }

    Send(linkData.m_routeData.mUnlinkId, nModuleId, nMsgId, xData, param1, param2, sendLinkId, destServerLinkId);
    return 0;
}

NF_SHARE_PTR<NFServerData> NFCMessageModule::GetServerByServerId(NF_SERVER_TYPES eSendType, uint32_t busId) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetServerByServerId(busId);
}

NF_SHARE_PTR<NFServerData> NFCMessageModule::GetServerByUnlinkId(NF_SERVER_TYPES eSendType, uint64_t unlinkId) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetServerByUnlinkId(unlinkId);
}

void NFCMessageModule::CloseServer(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES destServer, uint32_t busId, uint64_t usLinkId) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), , "eType error:{}", (int) eSendType);
    CloseLinkId(usLinkId);
    return mServerLinkData[eSendType].CloseServer(destServer, busId, usLinkId);
}


NF_SHARE_PTR<NFServerData> NFCMessageModule::CreateServerByServerId(NF_SERVER_TYPES eSendType, uint32_t busId, NF_SERVER_TYPES busServerType,
                                                                    const proto_ff::ServerInfoReport &data) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].CreateServerByServerId(busId, busServerType, data);
}

void NFCMessageModule::DelServerLink(NF_SERVER_TYPES eSendType, uint64_t linkId)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), , "eType error:{}", (int) eSendType);
    mServerLinkData[eSendType].DelServerLink(linkId);
}

NFServerData* NFCMessageModule::GetRouteData(NF_SERVER_TYPES eSendType)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetRouteData();
}

const NFServerData* NFCMessageModule::GetRouteData(NF_SERVER_TYPES eSendType) const
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetRouteData();
}

NFServerData *NFCMessageModule::GetMasterData(NF_SERVER_TYPES eSendType) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetMasterData();
}

const NFServerData *NFCMessageModule::GetMasterData(NF_SERVER_TYPES eSendType) const {
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetMasterData();
}

void NFCMessageModule::CloseAllLink(NF_SERVER_TYPES eSendType) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), , "eType error:{}", (int) eSendType);
    mServerLinkData[eSendType].CloseAllLink(this);
}

void NFCMessageModule::CreateLinkToServer(NF_SERVER_TYPES eSendType, uint32_t busId, uint64_t linkId) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), , "eType error:{}", (int) eSendType);
    mServerLinkData[eSendType].CreateLinkToServer(busId, linkId);
}

void NFCMessageModule::SetServerLinkId(NF_SERVER_TYPES eSendType, uint64_t linkId) {
    CHECK_EXPR(eSendType < mServerLinkData.size(), , "eType error:{}", (int) eSendType);
    mServerLinkData[eSendType].SetServerLinkId(linkId);
}

uint64_t NFCMessageModule::GetServerLinkId(NF_SERVER_TYPES eSendType) const {
    CHECK_EXPR(eSendType < mServerLinkData.size(), 0, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetServerLinkId();
}

std::vector<NF_SHARE_PTR<NFServerData>> NFCMessageModule::GetServerByServerType(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), std::vector<NF_SHARE_PTR<NFServerData>>(), "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetServerByServerType(serverTypes);
}

NF_SHARE_PTR<NFServerData> NFCMessageModule::GetFirstServerByServerType(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetFirstServerByServerType(serverTypes);
}

NF_SHARE_PTR<NFServerData>
NFCMessageModule::GetRandomServerByServerType(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetRandomServerByServerType(serverTypes);
}

NF_SHARE_PTR<NFServerData>
NFCMessageModule::GetSuitServerByServerType(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes, uint64_t value)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetSuitServerByServerType(serverTypes, value);
}

NF_SHARE_PTR<NFServerData>
NFCMessageModule::GetSuitServerByServerType(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes, const std::string& value)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), NULL, "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetSuitServerByServerType(serverTypes, value);
}

std::vector<NF_SHARE_PTR<NFServerData>> NFCMessageModule::GetAllServer(NF_SERVER_TYPES eSendType)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), std::vector<NF_SHARE_PTR<NFServerData>>(), "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetAllServer();
}

std::vector<NF_SHARE_PTR<NFServerData>> NFCMessageModule::GetAllServer(NF_SERVER_TYPES eSendType, NF_SERVER_TYPES serverTypes)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), std::vector<NF_SHARE_PTR<NFServerData>>(), "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetAllServer(serverTypes);
}

std::vector<std::string> NFCMessageModule::GetDBNames(NF_SERVER_TYPES eSendType)
{
    CHECK_EXPR(eSendType < mServerLinkData.size(), std::vector<std::string>(), "eType error:{}", (int) eSendType);
    return mServerLinkData[eSendType].GetDBNames();
}

bool NFCMessageModule::ResponseHttpMsg(NF_SERVER_TYPES serverType, const NFIHttpHandle &req, const string &strMsg,
                                       NFWebStatus code, const string &reason) {
    if (m_netModule)
    {
        return m_netModule->ResponseHttpMsg(serverType, req, strMsg, code, reason);
    }
    return false;
}

bool NFCMessageModule::ResponseHttpMsg(NF_SERVER_TYPES serverType, uint64_t requestId, const string &strMsg,
                                       NFWebStatus code, const string &reason) {
    if (m_netModule)
    {
        return m_netModule->ResponseHttpMsg(serverType, requestId, strMsg, code, reason);
    }
    return false;
}

bool NFCMessageModule::AddHttpMsgCB(NF_SERVER_TYPES serverType, const string &strCommand, NFHttpType eRequestType,
                                    const HTTP_RECEIVE_FUNCTOR &cb) {
    if (serverType > NF_ST_NONE && serverType < NF_ST_MAX)
    {
        std::string lowerCmd = NFStringUtility::ToLower(strCommand);
        mxCallBack[serverType].mxHttpMsgCBMap[eRequestType].emplace(lowerCmd, cb);
        return true;
    }

    return false;
}

bool NFCMessageModule::AddHttpOtherMsgCB(NF_SERVER_TYPES serverType, NFHttpType eRequestType,
                                         const HTTP_RECEIVE_FUNCTOR &cb) {
    if (serverType > NF_ST_NONE && serverType < NF_ST_MAX)
    {
        mxCallBack[serverType].mxHttpOtherMsgCBMap[eRequestType].push_back(cb);
        return true;
    }

    return false;
}

bool
NFCMessageModule::AddHttpFilterCB(NF_SERVER_TYPES serverType, const string &strCommand, const HTTP_FILTER_FUNCTOR &cb) {
    if (serverType > NF_ST_NONE && serverType < NF_ST_MAX)
    {
        std::string lowerCmd = NFStringUtility::ToLower(strCommand);
        mxCallBack[serverType].mxHttpMsgFliterMap.emplace(lowerCmd, cb);
        return true;
    }

    return true;
}

bool NFCMessageModule::OnHttpReceiveNetPack(uint32_t serverType, const NFIHttpHandle &req) {
    if (serverType <= NF_ST_NONE || serverType >= NF_ST_MAX) return false;

    auto iter = mxCallBack[serverType].mxHttpMsgCBMap.find((NFHttpType)req.GetType());
    if (iter != mxCallBack[serverType].mxHttpMsgCBMap.end())
    {
        std::string lowerPath = NFStringUtility::ToLower(req.GetPath());
        NFStringUtility::TrimLeft(lowerPath, '/');
        auto itPath = iter->second.find(lowerPath);
        if (itPath != iter->second.end())
        {
            HTTP_RECEIVE_FUNCTOR& pFunPtr = itPath->second;
            try
            {
                pFunPtr(serverType,req);
            }
            catch (const std::exception&)
            {
                ResponseHttpMsg((NF_SERVER_TYPES)serverType, req, "unknow error", NFWebStatus::WEB_INTER_ERROR);
            }
            return true;
        }
        else
        {
            for (int i = 0; i < (int)mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()].size(); ++i)
            {
                HTTP_RECEIVE_FUNCTOR& pFunPtr = mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()][i];
                try
                {
                    pFunPtr(serverType, req);
                }
                catch (const std::exception&)
                {
                    ResponseHttpMsg((NF_SERVER_TYPES)serverType, req, "unknow error", NFWebStatus::WEB_INTER_ERROR);
                    return true;
                }
            }
            if (mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()].size() > 0)
            {
                return true;
            }
        }
    }
    else
    {
        for (int i = 0; i < (int)mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()].size(); ++i)
        {
            HTTP_RECEIVE_FUNCTOR& pFunPtr = mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()][i];
            try
            {
                pFunPtr(serverType, req);
            }
            catch (const std::exception&)
            {
                ResponseHttpMsg((NF_SERVER_TYPES)serverType, req, "unknow error", NFWebStatus::WEB_INTER_ERROR);
                return true;
            }
        }
        if (mxCallBack[serverType].mxHttpOtherMsgCBMap[(NFHttpType)req.GetType()].size() > 0)
        {
            return true;
        }
    }

    return ResponseHttpMsg((NF_SERVER_TYPES)serverType, req, "", NFWebStatus::WEB_ERROR);
}

NFWebStatus NFCMessageModule::OnHttpFilterPack(uint32_t serverType, const NFIHttpHandle &req) {
    if (serverType <= NF_ST_NONE || serverType >= NF_ST_MAX) return NFWebStatus::WEB_ERROR;

    std::string lowerPath = NFStringUtility::ToLower(req.GetPath());
    NFStringUtility::TrimLeft(lowerPath, '/');
    auto itPath = mxCallBack[serverType].mxHttpMsgFliterMap.find(lowerPath);
    if (itPath != mxCallBack[serverType].mxHttpMsgFliterMap.end())
    {
        HTTP_FILTER_FUNCTOR& pFunPtr = itPath->second;
        return pFunPtr(serverType, req);
    }

    return NFWebStatus::WEB_OK;
}

int NFCMessageModule::HttpGet(NF_SERVER_TYPES serverType, const string &strUri, const HTTP_CLIENT_RESPONE &respone,
                              const map<std::string, std::string> &xHeaders, int timeout) {
    if (m_netModule)
    {
        return m_netModule->HttpGet(serverType, strUri, respone, xHeaders, timeout);
    }
    return -1;
}

int NFCMessageModule::HttpPost(NF_SERVER_TYPES serverType, const string &strUri, const string &strPostData,
                               const HTTP_CLIENT_RESPONE &respone, const map<std::string, std::string> &xHeaders,
                               int timeout) {
    if (m_netModule)
    {
        return m_netModule->HttpPost(serverType, strUri, strPostData, respone, xHeaders, timeout);
    }
    return -1;
}

int NFCMessageModule::SendEmail(NF_SERVER_TYPES serverType, const string &title, const string &subject, const string &content)
{
    if (m_netModule)
    {
        return m_netModule->SendEmail(serverType, title, subject, content);
    }
    return -1;
}

int NFCMessageModule::SendWxWork(NF_SERVER_TYPES serverType, const string &content)
{
    NFServerConfig* pConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_MASTER_SERVER);
    CHECK_NULL(pConfig);

    std::string url = pConfig->wxWorkdRobot;
    proto_ff::wxWorkRobotHttpPost msg;
    msg.set_msgtype("text");
    auto pText = msg.mutable_text();
    pText->set_content(content);
    pText->add_mentioned_list("@all");
    std::string json;
    NFProtobufCommon::ProtoMessageToJson(msg, &json, NULL);

    std::map<std::string, std::string> xHeaders;
    xHeaders.emplace("Accept", "application/json");
    xHeaders.emplace("Content-Type", "application/json;charset=utf-8");

    HttpPost(NF_ST_MASTER_SERVER, url, json, [](int code, const std::string& resp){
        NFLogError(NF_LOG_SYSTEMLOG, 0, "send wxWork info, code:{} rsp:{}", code, resp);
    }, xHeaders);
    return 0;
}


