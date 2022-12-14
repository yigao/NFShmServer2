// -------------------------------------------------------------------------
//    @FileName         :    NFMonitorModule.h
//    @Author           :    Yi.Gao
//    @Date             :   2022-09-18
//    @Module           :    NFMonitorPlugin
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFPluginModule/NFIMonitorModule.h"
#include "NFComm/NFPluginModule/NFSystemInfo.h"
#include "NFComm/NFPluginModule/NFTimerObj.h"
#include "NFComm/NFPluginModule/NFEventObj.h"
#include "NFComm/NFPluginModule/NFEventObj.h"

/**
* @brief 服务器监控模块
*/
class NFCMonitorModule : public NFIMonitorModule
{
public:
	NFCMonitorModule(NFIPluginManager* p);

	virtual ~NFCMonitorModule();
public:
	virtual bool Init() override;

	virtual bool Execute() override;

	virtual bool Finalize() override;

	/**
	* @brief 处理定时器功能
	*
	* @return void
	*/
	virtual int OnTimer(uint32_t nTimerID);

	/**
	* @brief 处理事件
	*
	* @return void
	*/
	virtual int OnExecute(uint32_t serverType, uint32_t nEventID, uint32_t bySrcType, uint64_t nSrcID, const google::protobuf::Message* pMessage);

	virtual const NFSystemInfo& GetSystemInfo() const;

	virtual uint32_t GetUserCount() const;
	virtual void SetUserCount(uint32_t count);

	virtual double GetCpuUsed();

	virtual uint64_t GetMemUsed();

    virtual void CountAndPrint();
private:
	NFSystemInfo mSystemInfo;
};
