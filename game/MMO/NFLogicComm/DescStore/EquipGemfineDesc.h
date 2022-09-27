#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/equip_s.h"

#define MAX_EQUIP_GEMFINE_NUM 200

class EquipGemfineDesc : public NFIDescStore
{
public:
	EquipGemfineDesc(NFIPluginManager* pPluginManager);
	virtual ~EquipGemfineDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::equipgemfine_s* GetDesc(int id) const;
	proto_ff_s::equipgemfine_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::equipgemfine_s, MAX_EQUIP_GEMFINE_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::equipgemfine_s, MAX_EQUIP_GEMFINE_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::equipgemfine_s, equipgemfine, MAX_EQUIP_GEMFINE_NUM);
DECLARE_IDCREATE(EquipGemfineDesc);
};
