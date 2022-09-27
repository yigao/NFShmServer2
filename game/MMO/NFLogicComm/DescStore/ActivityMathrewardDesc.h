#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/activity_s.h"

#define MAX_ACTIVITY_MATHREWARD_NUM 20

class ActivityMathrewardDesc : public NFIDescStore
{
public:
	ActivityMathrewardDesc(NFIPluginManager* pPluginManager);
	virtual ~ActivityMathrewardDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::activitymathreward_s* GetDesc(int id) const;
	proto_ff_s::activitymathreward_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::activitymathreward_s, MAX_ACTIVITY_MATHREWARD_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::activitymathreward_s, MAX_ACTIVITY_MATHREWARD_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::activitymathreward_s, activitymathreward, MAX_ACTIVITY_MATHREWARD_NUM);
DECLARE_IDCREATE(ActivityMathrewardDesc);
};
