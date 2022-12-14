// -------------------------------------------------------------------------
//    @FileName         :    NFMonitorServerModule.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFMonitorServerModule.h
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFPluginModule/NFServerDefine.h"
#include "NFComm/NFCore/NFMapEx.hpp"
#include "NFComm/NFCore/NFMap.hpp"
#include "NFServer/NFCommHead/NFCommLogicHead.h"
#include "NFComm/NFPluginModule/NFIDynamicModule.h"
#include "NFComm/NFPluginModule/NFSystemInfo.h"

class NFProcMonitor;
class NFCMonitorServerModule : public NFIDynamicModule
{
public:
    explicit NFCMonitorServerModule(NFIPluginManager* p);
    virtual ~NFCMonitorServerModule();


    virtual bool Awake() override;

    virtual bool Init() override;

    virtual bool Execute() override;

    virtual bool OnDynamicPlugin() override;

    virtual int OnTimer(uint32_t nTimerID);

    virtual int OnExecute(uint32_t serverType, uint32_t nEventIDD, uint32_t bySrcType, uint64_t nSrcID, const google::protobuf::Message* pMessage);

    int OnHandleServerReport(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);

    /*
        处理Master服务器链接事件和未注册消息
    */
    int ConnectMasterServer(const proto_ff::ServerInfoReport& xData);
    int RegisterMasterServer();
    int ServerReport();
    int OnMasterSocketEvent(eMsgType nEvent, uint64_t unLinkId);
    int OnHandleMasterOtherMessage(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
public:
    int OnHandleReloadServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleRestartServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleStartServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleStopServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);

    int OnHandleReloadAllServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleRestartAllServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleStartAllServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
    int OnHandleStopAllServer(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen);
private:
    NFProcMonitor* m_procMonitor;
};
