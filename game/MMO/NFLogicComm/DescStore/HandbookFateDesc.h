#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/handbook_s.h"

#define MAX_HANDBOOK_FATE_NUM 40

class HandbookFateDesc : public NFIDescStore
{
public:
	HandbookFateDesc(NFIPluginManager* pPluginManager);
	virtual ~HandbookFateDesc();
	const proto_ff_s::handbookfate_s* GetDesc(int id) const;
	proto_ff_s::handbookfate_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::handbookfate_s, MAX_HANDBOOK_FATE_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::handbookfate_s, MAX_HANDBOOK_FATE_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::handbookfate_s, handbookfate, MAX_HANDBOOK_FATE_NUM);
DECLARE_IDCREATE(HandbookFateDesc);
};
