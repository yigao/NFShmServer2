// -------------------------------------------------------------------------
//    @FileName         :    dllmain.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginManager
//
// -------------------------------------------------------------------------

#pragma once
#include "NFComm/NFCore/NFPlatform.h"
#include <unordered_map>
#include "NFComm/NFPluginModule/NFServerDefine.h"
#include "NFComm/NFPluginModule/NFObject.h"

class NFCAppInitTask
{
public:
    NFCAppInitTask():m_taskType(APP_INIT_NONE),m_finished(false)
    {
    }
public:
    uint32_t m_taskType;
    bool m_finished;
    std::string m_desc;
};

class NFCAppInited : public NFObject
{
public:
	NFCAppInited(NFIPluginManager* pPluginManager): NFObject(pPluginManager), m_initServerConnectTasks(false), m_initDestStoreTasks(false), m_initOBjLoadForomDBTasks(false)
	{
        m_serverConnectTasks.resize(NF_ST_MAX);
        m_serverLoadDestStore.resize(NF_ST_MAX);
        m_appObjLoadFromDBTask.resize(NF_ST_MAX);
        m_fireFlag.resize(NF_ST_MAX);
        for(int i = 0; i < (int)m_fireFlag.size(); i++)
        {
            m_fireFlag[i] = false;
        }
        m_lastTime = NFGetSecondTime();
	}

	virtual ~NFCAppInited()
	{

	}

	int Execute();

	int RegisterAppTask(NF_SERVER_TYPES eServerType, uint32_t taskType, const std::string& desc, uint32_t initStatus = APP_INIT_STATUS_SERVER_CONNECT);

	int FinishAppTask(NF_SERVER_TYPES eServerType, uint32_t taskType, uint32_t initStatus = APP_INIT_STATUS_SERVER_CONNECT);

	int CheckTaskFinished();

	bool IsInitTasked() const;

	void PrintTimeout();
private:
    std::vector<std::vector<NFCAppInitTask>> m_serverConnectTasks;
    std::vector<std::vector<NFCAppInitTask>> m_serverLoadDestStore;
    std::vector<std::vector<NFCAppInitTask>> m_appObjLoadFromDBTask;
    std::vector<bool> m_fireFlag;
    bool m_initServerConnectTasks;
	bool m_initDestStoreTasks;
	bool m_initOBjLoadForomDBTasks;
	uint64_t m_lastTime;
};
