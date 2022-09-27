#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/randomname_s.h"

#define MAX_RANDOMNAME_WOMANTHIRD_NUM 400

class RandomnameWomanthirdDesc : public NFIDescStore
{
public:
	RandomnameWomanthirdDesc(NFIPluginManager* pPluginManager);
	virtual ~RandomnameWomanthirdDesc();
	const proto_ff_s::randomnamewomanthird_s* GetDesc(int id) const;
	proto_ff_s::randomnamewomanthird_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::randomnamewomanthird_s, MAX_RANDOMNAME_WOMANTHIRD_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::randomnamewomanthird_s, MAX_RANDOMNAME_WOMANTHIRD_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::randomnamewomanthird_s, randomnamewomanthird, MAX_RANDOMNAME_WOMANTHIRD_NUM);
DECLARE_IDCREATE(RandomnameWomanthirdDesc);
};
