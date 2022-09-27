#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/treasure_s.h"

#define MAX_TREASURE_FRAGMENT_NUM 20

class TreasureFragmentDesc : public NFIDescStore
{
public:
	TreasureFragmentDesc(NFIPluginManager* pPluginManager);
	virtual ~TreasureFragmentDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::treasurefragment_s* GetDesc(int id) const;
	proto_ff_s::treasurefragment_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::treasurefragment_s, MAX_TREASURE_FRAGMENT_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::treasurefragment_s, MAX_TREASURE_FRAGMENT_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::treasurefragment_s, treasurefragment, MAX_TREASURE_FRAGMENT_NUM);
DECLARE_IDCREATE(TreasureFragmentDesc);
};
