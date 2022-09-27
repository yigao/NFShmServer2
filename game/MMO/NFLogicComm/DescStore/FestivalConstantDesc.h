#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/festival_s.h"

#define MAX_FESTIVAL_CONSTANT_NUM 20

class FestivalConstantDesc : public NFIDescStore
{
public:
	FestivalConstantDesc(NFIPluginManager* pPluginManager);
	virtual ~FestivalConstantDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::festivalconstant_s* GetDesc(int id) const;
	proto_ff_s::festivalconstant_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::festivalconstant_s, MAX_FESTIVAL_CONSTANT_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::festivalconstant_s, MAX_FESTIVAL_CONSTANT_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::festivalconstant_s, festivalconstant, MAX_FESTIVAL_CONSTANT_NUM);
DECLARE_IDCREATE(FestivalConstantDesc);
};
