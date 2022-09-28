#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/festival_s.h"

#define MAX_FESTIVAL_MUBAN_SHOUCHONG_NUM 20

class FestivalMuban_shouchongDesc : public NFIDescStore
{
public:
	FestivalMuban_shouchongDesc(NFIPluginManager* pPluginManager);
	virtual ~FestivalMuban_shouchongDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::festivalmuban_shouchong_s* GetDesc(int id) const;
	proto_ff_s::festivalmuban_shouchong_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::festivalmuban_shouchong_s, MAX_FESTIVAL_MUBAN_SHOUCHONG_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::festivalmuban_shouchong_s, MAX_FESTIVAL_MUBAN_SHOUCHONG_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::festivalmuban_shouchong_s, festivalmuban_shouchong, MAX_FESTIVAL_MUBAN_SHOUCHONG_NUM);
DECLARE_IDCREATE(FestivalMuban_shouchongDesc);
};