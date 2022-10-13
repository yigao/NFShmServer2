#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/manor_s.h"

#define MAX_MANOR_CONSTANTS_NUM 60

class ManorConstantsDesc : public NFIDescStore
{
public:
	ManorConstantsDesc(NFIPluginManager* pPluginManager);
	virtual ~ManorConstantsDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::manorconstants_s* GetDesc(int id) const;
	proto_ff_s::manorconstants_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::manorconstants_s, MAX_MANOR_CONSTANTS_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::manorconstants_s, MAX_MANOR_CONSTANTS_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::manorconstants_s, manorconstants, MAX_MANOR_CONSTANTS_NUM);
DECLARE_IDCREATE(ManorConstantsDesc);
};