#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/randomname_s.h"

#define MAX_RANDOMNAME_WOMANSECOND_NUM 40

class RandomnameWomansecondDesc : public NFIDescStore
{
public:
	RandomnameWomansecondDesc();
	virtual ~RandomnameWomansecondDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::randomnamewomansecond_s* GetDesc(int id) const;
	proto_ff_s::randomnamewomansecond_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::randomnamewomansecond_s, randomnamewomansecond, MAX_RANDOMNAME_WOMANSECOND_NUM);
DECLARE_IDCREATE(RandomnameWomansecondDesc);
};
