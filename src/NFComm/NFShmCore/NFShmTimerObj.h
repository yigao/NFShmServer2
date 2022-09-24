// -------------------------------------------------------------------------
//    @FileName         :    NFShmTimerObj.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#pragma once

#include "NFComm/NFPluginModule/NFObject.h"
#include "NFComm/NFShmCore/NFArray.h"

#define NF_SHM_OBJ_MAX_TIMER_COUNT 5

class NFShmTimerObj : public NFObject
{
public:
	NFShmTimerObj(NFIPluginManager* pPluginManager);
	virtual ~NFShmTimerObj();

	//非继承函数, 不要加virtual
	int CreateInit();

    //非继承函数, 不要加virtual
	int ResumeInit()
	{
		return 0;
	}

	//must be virtual
	virtual void OnTimer(int timeId, int callcount) = 0;

	//delete objid
	virtual int DeleteTimer(int timeObjId);

	////注册距离现在多少时间执行一次的定时器(hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒, 只执行一次)
	virtual int SetTimer(int hour, int minutes, int second, int microSec);

	//注册某一个时间点执行一次的定时器(hour  minutes  second为第一次执行的时间点时分秒, 只执行一次)
	virtual int SetCalender(int hour, int minutes, int second);

	//注册某一个时间点执行一次的定时器(timestamp为第一次执行的时间点的时间戳,单位是秒, 只执行一次)
	virtual  int SetCalender(uint64_t timestamp);

	//注册循环执行定时器（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒,  interval 为循环间隔时间，为毫秒）
	virtual int SetTimer(int interval, int callcount, int hour, int minutes, int second, int microSec);

	//注册循环执行定时器（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒）
	virtual  int SetDayTime(int callcount, int hour, int minutes, int second, int microSec);

	//注册某一个时间点日循环执行定时器（hour  minutes  second为一天中开始执行的时间点，    23：23：23     每天23点23分23秒执行）
	virtual  int SetDayCalender(int callcount, int hour, int minutes, int second);

	//周循环（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒）
	virtual int SetWeekTime(int callcount, int hour, int minutes, int second, int microSec);

	//注册某一个时间点周循环执行定时器（ weekDay  hour  minutes  second 为一周中某一天开始执行的时间点）
	virtual int SetWeekCalender(int callcount, int weekDay, int hour, int minutes, int second);

	//月循环（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒,最好是同一天）
	virtual int SetMonthTime(int callcount, int hour, int minutes, int second, int microSec);

	//注册某一个时间点月循环执行定时器（ day  hour  minutes  second 为一月中某一天开始执行的时间点）
	virtual int SetMonthCalender(int callcount, int day, int hour, int minutes, int second);

#ifdef NF_DEBUG_MODE
    virtual uint32_t GetTimerObjType() const { return m_iTimerObjType; }
    virtual uint32_t GetTimerObjIndex() const { return m_iTimerObjIndex; }
    virtual void SetTimerObjType(uint32_t type) { m_iTimerObjType = type; }
    virtual void SetTimerObjIndex(uint32_t type) { m_iTimerObjIndex = type; }
#endif
public:
    virtual bool AddTimerId(int timerId);
    virtual bool DeleteTimerId(int timerId);
protected:
#ifdef NF_DEBUG_MODE
    uint32_t m_iTimerObjType;
    uint32_t m_iTimerObjIndex;
#endif
    NFArray<int, NF_SHM_OBJ_MAX_TIMER_COUNT> m_timerIdList;
};
