#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/skill_s.h"

#define MAX_SKILL_BUFFUP_NUM 40

class SkillBuffupDesc : public NFIDescStore
{
public:
	SkillBuffupDesc();
	virtual ~SkillBuffupDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::skillbuffUp_s* GetDesc(int id) const;
	proto_ff_s::skillbuffUp_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::skillbuffUp_s, skillbuffUp, MAX_SKILL_BUFFUP_NUM);
DECLARE_IDCREATE(SkillBuffupDesc);
};
