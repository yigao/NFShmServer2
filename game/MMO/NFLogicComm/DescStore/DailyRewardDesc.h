#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/daily_s.h"

#define MAX_DAILY_REWARD_NUM 20

class DailyRewardDesc : public NFIDescStore
{
public:
	DailyRewardDesc();
	virtual ~DailyRewardDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::dailyreward_s* GetDesc(int id) const;
	proto_ff_s::dailyreward_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::dailyreward_s, dailyreward, MAX_DAILY_REWARD_NUM);
DECLARE_IDCREATE(DailyRewardDesc);
};
