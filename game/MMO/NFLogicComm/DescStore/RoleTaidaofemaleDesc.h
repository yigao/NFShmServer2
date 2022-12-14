#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/role_s.h"

#define MAX_ROLE_TAIDAOFEMALE_NUM 2000

class RoleTaidaofemaleDesc : public NFIDescStore
{
public:
	RoleTaidaofemaleDesc();
	virtual ~RoleTaidaofemaleDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::roletaidaoFemale_s* GetDesc(int id) const;
	proto_ff_s::roletaidaoFemale_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::roletaidaoFemale_s, roletaidaoFemale, MAX_ROLE_TAIDAOFEMALE_NUM);
DECLARE_IDCREATE(RoleTaidaofemaleDesc);
};
