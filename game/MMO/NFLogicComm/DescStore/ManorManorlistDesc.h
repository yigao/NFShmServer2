#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/manor_s.h"

#define MAX_MANOR_MANORLIST_NUM 60

class ManorManorlistDesc : public NFIDescStore
{
public:
	ManorManorlistDesc(NFIPluginManager* pPluginManager);
	virtual ~ManorManorlistDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::manormanorlist_s* GetDesc(int id) const;
	proto_ff_s::manormanorlist_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::manormanorlist_s, MAX_MANOR_MANORLIST_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::manormanorlist_s, MAX_MANOR_MANORLIST_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::manormanorlist_s, manormanorlist, MAX_MANOR_MANORLIST_NUM);
DECLARE_IDCREATE(ManorManorlistDesc);
};
