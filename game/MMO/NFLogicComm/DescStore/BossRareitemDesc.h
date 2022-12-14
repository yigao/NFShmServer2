#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/boss_s.h"

#define MAX_BOSS_RAREITEM_NUM 600

class BossRareitemDesc : public NFIDescStore
{
public:
	BossRareitemDesc();
	virtual ~BossRareitemDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::bossrareItem_s* GetDesc(int id) const;
	proto_ff_s::bossrareItem_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::bossrareItem_s, bossrareItem, MAX_BOSS_RAREITEM_NUM);
DECLARE_IDCREATE(BossRareitemDesc);
};
