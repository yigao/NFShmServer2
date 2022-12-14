// -------------------------------------------------------------------------
//    @FileName         :    NFMonitorServerModule.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFMonitorServerModule.cpp
//
// -------------------------------------------------------------------------

#include "NFMonitorServerModule.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include "NFComm/NFPluginModule/NFConfigMgr.h"
#include "NFComm/NFPluginModule/NFIMessageModule.h"
#include "NFLogicCommon/NFICommLogicModule.h"
#include "NFComm/NFMessageDefine/proto_svr_common.pb.h"
#include "NFComm/NFPluginModule/NFIMonitorModule.h"
#include "NFComm/NFPluginModule/NFINamingModule.h"
#include "NFComm/NFCore/NFServerIDUtil.h"
#include "NFProcMonitor.h"
#include "NFComm/NFMessageDefine/proto_event.pb.h"


#define MONITOR_SERVER_CONNECT_MASTER_SERVER "MonitorServer Connect MasterServer"



NFCMonitorServerModule::NFCMonitorServerModule(NFIPluginManager* p):NFIDynamicModule(p)
{

}

NFCMonitorServerModule::~NFCMonitorServerModule()
{
}

bool NFCMonitorServerModule::Awake() {
    FindModule<NFINamingModule>()->InitAppInfo(NF_ST_MONITOR_SERVER);
    FindModule<NFINamingModule>()->RegisterAppInfo(NF_ST_MONITOR_SERVER);
    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MASTER_SERVER_SEND_OTHERS_TO_SERVER, this,
                                                       &NFCMonitorServerModule::OnHandleServerReport);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_RELOAD_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleReloadServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_RESTART_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleRestartServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_START_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleStartServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_STOP_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleStopServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_RELOAD_ALL_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleReloadAllServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_RESTART_ALL_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleRestartAllServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_START_ALL_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleStartAllServer);

    FindModule<NFIMessageModule>()->AddMessageCallBack(NF_ST_MONITOR_SERVER,
                                                       proto_ff::NF_MasterTMonitor_STOP_ALL_CMD_REQ, this,
                                                       &NFCMonitorServerModule::OnHandleStopAllServer);

    //???????????????????????????????????????
    m_pPluginManager->RegisterAppTask(NF_ST_MONITOR_SERVER, APP_INIT_CONNECT_MASTER, MONITOR_SERVER_CONNECT_MASTER_SERVER);

    m_procMonitor = NF_NEW NFProcMonitor();
    m_procMonitor->GetProcessListBySh("Monitor.sh");
    SetTimer(1, 100, 0);
    SetTimer(2, 10000, 0);
    Subscribe(proto_ff::NF_EVENT_SERVER_DEAD_EVENT, 0, proto_ff::NF_EVENT_SERVER_TYPE, __FUNCTION__);

    return true;
}

int NFCMonitorServerModule::ConnectMasterServer(const proto_ff::ServerInfoReport& xData)
{
    NFServerConfig* pConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_MONITOR_SERVER);
    if (pConfig)
    {
        auto pMasterServerData = FindModule<NFIMessageModule>()->GetMasterData(NF_ST_MONITOR_SERVER);
        if (pMasterServerData->mUnlinkId <= 0)
        {
            pMasterServerData->mUnlinkId = FindModule<NFIMessageModule>()->ConnectServer(NF_ST_MONITOR_SERVER, xData.url(), PACKET_PARSE_TYPE_INTERNAL);
            FindModule<NFIMessageModule>()->AddEventCallBack(NF_ST_MONITOR_SERVER, pMasterServerData->mUnlinkId, this,
                                                       &NFCMonitorServerModule::OnMasterSocketEvent);
            FindModule<NFIMessageModule>()->AddOtherCallBack(NF_ST_MONITOR_SERVER, pMasterServerData->mUnlinkId, this,
                                                       &NFCMonitorServerModule::OnHandleMasterOtherMessage);
        }

        pMasterServerData->mServerInfo = xData;
    }
    else
    {
        NFLogError(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "I Can't get the Monitor Server config!");
        return -1;
    }

    return 0;
}

bool NFCMonitorServerModule::Init()
{
    FindModule<NFINamingModule>()->WatchTcpUrls(NF_ST_MONITOR_SERVER, NF_ST_MASTER_SERVER, [this](const string &name, const proto_ff::ServerInfoReport& xData, int32_t errCode){
        if (errCode != 0)
        {
            NFLogError(NF_LOG_SYSTEMLOG, 0, "MonitorServer Watch, MasterServer Dump, errCode:{} name:{} serverInfo:{}", errCode, name, xData.DebugString());
            return;
        }
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "MonitorServer Watch MasterServer name:{} serverInfo:{}", name, xData.DebugString());

        int32_t ret = ConnectMasterServer(xData);
        CHECK_EXPR(ret == 0, , "ConnectMasterServer Failed, url:{}", xData.DebugString());
    });

    return true;
}

bool NFCMonitorServerModule::Execute()
{
    ServerReport();
    return true;
}

bool NFCMonitorServerModule::OnDynamicPlugin()
{
    FindModule<NFIMessageModule>()->CloseAllLink(NF_ST_MONITOR_SERVER);
    return true;
}

int NFCMonitorServerModule::OnTimer(uint32_t nTimerID)
{
    if (nTimerID == 1)
    {
        m_procMonitor->GetAllProcessInfo();
    }
    else
    {
        m_procMonitor->PrintDebugInfo();
    }

    if (nTimerID == 10000)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "kill the exe..................");
        NFSLEEP(1000);
        exit(0);
    }
}

int NFCMonitorServerModule::OnExecute(uint32_t serverType, uint32_t nEventID, uint32_t bySrcType, uint64_t nSrcID, const google::protobuf::Message* pMessage)
{
    if (bySrcType == proto_ff::NF_EVENT_SERVER_TYPE)
    {
        if (nEventID == proto_ff::NF_EVENT_SERVER_DEAD_EVENT)
        {
            SetTimer(10000, 10000, 0);
        }
    }
    return 0;
}

/*
	??????Master?????????????????????
*/
int NFCMonitorServerModule::OnMasterSocketEvent(eMsgType nEvent, uint64_t unLinkId)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    if (nEvent == eMsgType_CONNECTED)
    {
        std::string ip = FindModule<NFIMessageModule>()->GetLinkIp(unLinkId);
        NFLogDebug(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "monitor server connect master success!");
        RegisterMasterServer();

        //???????????????????????????
        if (!m_pPluginManager->IsInited())
        {
            m_pPluginManager->FinishAppTask(NF_ST_MONITOR_SERVER, APP_INIT_CONNECT_MASTER);
        }
    }
    else if (nEvent == eMsgType_DISCONNECTED)
    {
        NFLogError(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "monitor server disconnect master success");
    }
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

/*
	??????Master????????????????????????
*/
int NFCMonitorServerModule::OnHandleMasterOtherMessage(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");
    std::string ip = FindModule<NFIMessageModule>()->GetLinkIp(unLinkId);
    NFLogWarning(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "master server other message not handled:playerId:{},msgId:{},ip:{}", playerId, nMsgId, ip);
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::RegisterMasterServer()
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");
    NFServerConfig* pConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_MONITOR_SERVER);
    if (pConfig)
    {
        proto_ff::ServerInfoReportList xMsg;
        proto_ff::ServerInfoReport* pData = xMsg.add_server_list();
        pData->set_bus_id(pConfig->mBusId);
        pData->set_bus_name(pConfig->mBusName);
        pData->set_server_type(pConfig->mServerType);
        pData->set_server_name(pConfig->mServerName);

        pData->set_bus_length(pConfig->mBusLength);
        pData->set_link_mode(pConfig->mLinkMode);
        pData->set_url(pConfig->mUrl);
        pData->set_server_ip(pConfig->mServerIp);
        pData->set_server_port(pConfig->mServerPort);
        pData->set_route_svr(pConfig->mRouteAgent);
        pData->set_server_state(proto_ff::EST_NARMAL);

        FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_SERVER_TO_SERVER_REGISTER, xMsg);
    }
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::ServerReport()
{
    if (m_pPluginManager->IsLoadAllServer())
    {
        return 0;
    }

    static uint64_t mLastReportTime = m_pPluginManager->GetNowTime();
    if (mLastReportTime + 100000 > m_pPluginManager->GetNowTime())
    {
        return 0;
    }

    mLastReportTime = m_pPluginManager->GetNowTime();

    NFServerConfig* pConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_MONITOR_SERVER);
    if (pConfig)
    {
        proto_ff::ServerInfoReportList xMsg;
        proto_ff::ServerInfoReport* pData = xMsg.add_server_list();
        pData->set_bus_id(pConfig->mBusId);
        pData->set_bus_name(pConfig->mBusName);
        pData->set_server_type(pConfig->mServerType);
        pData->set_server_name(pConfig->mServerName);

        pData->set_bus_length(pConfig->mBusLength);
        pData->set_link_mode(pConfig->mLinkMode);
        pData->set_url(pConfig->mUrl);
        pData->set_server_ip(pConfig->mServerIp);
        pData->set_server_port(pConfig->mServerPort);
        pData->set_route_svr(pConfig->mRouteAgent);
        pData->set_server_state(proto_ff::EST_NARMAL);

        NFIMonitorModule* pMonitorModule = m_pPluginManager->FindModule<NFIMonitorModule>();
        if (pMonitorModule)
        {
            const NFSystemInfo& systemInfo = pMonitorModule->GetSystemInfo();

            pData->set_system_info(systemInfo.GetOsInfo().mOsDescription);
            pData->set_total_mem(systemInfo.GetMemInfo().mTotalMem);
            pData->set_free_mem(systemInfo.GetMemInfo().mFreeMem);
            pData->set_used_mem(systemInfo.GetMemInfo().mUsedMem);

            pData->set_proc_cpu(systemInfo.GetProcessInfo().mCpuUsed);
            pData->set_proc_mem(systemInfo.GetProcessInfo().mMemUsed);
            pData->set_proc_thread(systemInfo.GetProcessInfo().mThreads);
            pData->set_proc_name(systemInfo.GetProcessInfo().mName);
            pData->set_proc_cwd(systemInfo.GetProcessInfo().mCwd);
            pData->set_proc_pid(systemInfo.GetProcessInfo().mPid);
            pData->set_server_cur_online(systemInfo.GetUserCount());
        }

        if (pData->proc_cpu() > 0 && pData->proc_mem() > 0)
        {
            FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_SERVER_TO_MASTER_SERVER_REPORT, xMsg);
        }
    }
    return 0;
}

int NFCMonitorServerModule::OnHandleServerReport(uint64_t unLinkId, uint64_t playerId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::ServerInfoReportList xMsg;
    CLIENT_MSG_PROCESS_NO_PRINTF(nMsgId, playerId, msg, nLen, xMsg);

    for (int i = 0; i < xMsg.server_list_size(); ++i)
    {
        const proto_ff::ServerInfoReport& xData = xMsg.server_list(i);
        switch (xData.server_type())
        {
            default:
                break;
        }
    }
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleReloadServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorReloadReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    std::string serverName = xMsg.server_name();
    std::string serverId = xMsg.server_id();

    NFServerProcInfo* pServerInfo = m_procMonitor->FindProcByBusName(serverId);
    if (pServerInfo && pServerInfo->m_serverName == serverName)
    {
        m_procMonitor->ReloadProcess(pServerInfo, httpReqId);
    }
    else
    {
        proto_ff::Proto_MonitorTMasterReloadRsp rspMsg;
        rspMsg.set_result(-1);
        rspMsg.set_server_name(serverName);
        rspMsg.set_server_id(serverId);
        FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_MonitorTMaster_RELOAD_CMD_RSP, rspMsg, httpReqId);

    }

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleRestartServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorRestartReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    std::string serverName = xMsg.server_name();
    std::string serverId = xMsg.server_id();

    NFServerProcInfo* pServerInfo = m_procMonitor->FindProcByBusName(serverId);
    if (pServerInfo && pServerInfo->m_serverName == serverName)
    {
        m_procMonitor->RestartProcess(pServerInfo, httpReqId);
    }
    else
    {
        proto_ff::Proto_MonitorTMasterRestartRsp rspMsg;
        rspMsg.set_result(-1);
        rspMsg.set_server_name(serverName);
        rspMsg.set_server_id(serverId);
        FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_MonitorTMaster_RESTART_CMD_RSP, rspMsg, httpReqId);
    }

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleStartServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorStartReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    std::string serverName = xMsg.server_name();
    std::string serverId = xMsg.server_id();

    NFServerProcInfo* pServerInfo = m_procMonitor->FindProcByBusName(serverId);
    if (pServerInfo && pServerInfo->m_serverName == serverName)
    {
        m_procMonitor->StartProcess(pServerInfo, httpReqId);
    }
    else
    {
        proto_ff::Proto_MonitorTMasterStartRsp rspMsg;
        rspMsg.set_result(-1);
        rspMsg.set_server_name(serverName);
        rspMsg.set_server_id(serverId);
        FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_MonitorTMaster_START_CMD_RSP, rspMsg, httpReqId);
    }

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleStopServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorStopReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    std::string serverName = xMsg.server_name();
    std::string serverId = xMsg.server_id();

    NFServerProcInfo* pServerInfo = m_procMonitor->FindProcByBusName(serverId);
    if (pServerInfo && pServerInfo->m_serverName == serverName)
    {
        m_procMonitor->StopProcess(pServerInfo, httpReqId);
    }
    else
    {
        proto_ff::Proto_MonitorTMasterStopRsp rspMsg;
        rspMsg.set_result(-1);
        rspMsg.set_server_name(serverName);
        rspMsg.set_server_id(serverId);
        FindModule<NFIMessageModule>()->SendMsgToMasterServer(NF_ST_MONITOR_SERVER, proto_ff::NF_MonitorTMaster_STOP_CMD_RSP, rspMsg, httpReqId);
    }

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleReloadAllServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorReloadReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    m_procMonitor->ReloadAllProcess(httpReqId);

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleRestartAllServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorRestartReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    m_procMonitor->RestartAllProcess(httpReqId);

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleStartAllServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorStartReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    m_procMonitor->StartAllProcess(httpReqId);

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

int NFCMonitorServerModule::OnHandleStopAllServer(uint64_t unLinkId, uint64_t httpReqId, uint64_t value2, uint32_t nMsgId, const char* msg, uint32_t nLen)
{
    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- begin --");

    proto_ff::Proto_MasterTMonitorStopReq xMsg;
    CLIENT_MSG_PROCESS_WITH_PRINTF(nMsgId, httpReqId, msg, nLen, xMsg);

    m_procMonitor->StopAllProcess(httpReqId);

    NFLogTrace(NF_LOG_MONITOR_SERVER_PLUGIN, 0, "-- end --");
    return 0;
}

