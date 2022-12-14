#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/randomname_s.h"

#define MAX_RANDOMNAME_MANSECOND_NUM 60

class RandomnameMansecondDesc : public NFIDescStore
{
public:
	RandomnameMansecondDesc();
	virtual ~RandomnameMansecondDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::randomnamemansecond_s* GetDesc(int id) const;
	proto_ff_s::randomnamemansecond_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::randomnamemansecond_s, randomnamemansecond, MAX_RANDOMNAME_MANSECOND_NUM);
DECLARE_IDCREATE(RandomnameMansecondDesc);
};
