#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/randomname_s.h"

#define MAX_RANDOMNAME_MANSECOND_NUM 60

class RandomnameMansecondDesc : public NFIDescStore
{
public:
	RandomnameMansecondDesc(NFIPluginManager* pPluginManager);
	virtual ~RandomnameMansecondDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::randomnamemansecond_s* GetDesc(int id) const;
	proto_ff_s::randomnamemansecond_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::randomnamemansecond_s, MAX_RANDOMNAME_MANSECOND_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::randomnamemansecond_s, MAX_RANDOMNAME_MANSECOND_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::randomnamemansecond_s, randomnamemansecond, MAX_RANDOMNAME_MANSECOND_NUM);
DECLARE_IDCREATE(RandomnameMansecondDesc);
};
