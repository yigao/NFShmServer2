// -------------------------------------------------------------------------
//    @FileName         :    NFITimerModule.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#pragma once

#include "NFIModule.h"

class NFTimerObjBase;
class NFITimerModule : public NFIModule
{
public:
	NFITimerModule(NFIPluginManager* p) :NFIModule(p)
	{

	}

	virtual ~NFITimerModule()
	{

	}
	//设置定时器
	virtual bool SetTimer(uint32_t nTimerID, uint64_t nInterVal, NFTimerObjBase* handler, uint32_t nCallCount = INFINITY_CALL) = 0;

	//关闭定时器
	virtual bool KillTimer(uint32_t nTimerID, NFTimerObjBase* handler) = 0;

	//关闭所有定时器
	virtual bool KillAllTimer(NFTimerObjBase* handler) = 0;

	//设置固定时间的定时器
	virtual bool SetClocker(uint32_t nTimerID, uint64_t nStartTime, uint32_t nInterDays, NFTimerObjBase* handler, uint32_t nCallCount = INFINITY_CALL) = 0;

	virtual bool SetCalender(uint32_t nTimerID, const std::string& timeStr, NFTimerObjBase* handler, uint32_t nCallCount = INFINITY_CALL) = 0;
};

