#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/boss_s.h"

#define MAX_BOSS_BOSSTYPE_NUM 20

class BossBosstypeDesc : public NFIDescStore
{
public:
	BossBosstypeDesc();
	virtual ~BossBosstypeDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::bossbosstype_s* GetDesc(int id) const;
	proto_ff_s::bossbosstype_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::bossbosstype_s, bossbosstype, MAX_BOSS_BOSSTYPE_NUM);
DECLARE_IDCREATE(BossBosstypeDesc);
};
