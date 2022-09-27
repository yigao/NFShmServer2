#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/festival_s.h"

#define MAX_FESTIVAL_BIGYANHUACOST_NUM 20

class FestivalBigyanhuacostDesc : public NFIDescStore
{
public:
	FestivalBigyanhuacostDesc(NFIPluginManager* pPluginManager);
	virtual ~FestivalBigyanhuacostDesc();
	const proto_ff_s::festivalbigyanhuacost_s* GetDesc(int id) const;
	proto_ff_s::festivalbigyanhuacost_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::festivalbigyanhuacost_s, MAX_FESTIVAL_BIGYANHUACOST_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::festivalbigyanhuacost_s, MAX_FESTIVAL_BIGYANHUACOST_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::festivalbigyanhuacost_s, festivalbigyanhuacost, MAX_FESTIVAL_BIGYANHUACOST_NUM);
DECLARE_IDCREATE(FestivalBigyanhuacostDesc);
};
