#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/getTreasure_s.h"

#define MAX_GETTREASURE_RAREITEM_NUM 400

class GettreasureRareitemDesc : public NFIDescStore
{
public:
	GettreasureRareitemDesc(NFIPluginManager* pPluginManager);
	virtual ~GettreasureRareitemDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::getTreasurerareItem_s* GetDesc(int id) const;
	proto_ff_s::getTreasurerareItem_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::getTreasurerareItem_s, MAX_GETTREASURE_RAREITEM_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::getTreasurerareItem_s, MAX_GETTREASURE_RAREITEM_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::getTreasurerareItem_s, getTreasurerareItem, MAX_GETTREASURE_RAREITEM_NUM);
DECLARE_IDCREATE(GettreasureRareitemDesc);
};
