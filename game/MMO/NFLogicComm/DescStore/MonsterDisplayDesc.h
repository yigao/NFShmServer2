#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/monster_s.h"

#define MAX_MONSTER_DISPLAY_NUM 80

class MonsterDisplayDesc : public NFIDescStore
{
public:
	MonsterDisplayDesc();
	virtual ~MonsterDisplayDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::monsterdisplay_s* GetDesc(int id) const;
	proto_ff_s::monsterdisplay_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::monsterdisplay_s, monsterdisplay, MAX_MONSTER_DISPLAY_NUM);
DECLARE_IDCREATE(MonsterDisplayDesc);
};
