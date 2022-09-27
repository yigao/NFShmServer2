#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/solo_s.h"

#define MAX_SOLO_PIPEI_NUM 20

class SoloPipeiDesc : public NFIDescStore
{
public:
	SoloPipeiDesc(NFIPluginManager* pPluginManager);
	virtual ~SoloPipeiDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::solopipei_s* GetDesc(int id) const;
	proto_ff_s::solopipei_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::solopipei_s, MAX_SOLO_PIPEI_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::solopipei_s, MAX_SOLO_PIPEI_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::solopipei_s, solopipei, MAX_SOLO_PIPEI_NUM);
DECLARE_IDCREATE(SoloPipeiDesc);
};
