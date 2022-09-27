#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/festival_s.h"

#define MAX_FESTIVAL_MUBAN_DINGZHI_NUM 20

class FestivalMuban_dingzhiDesc : public NFIDescStore
{
public:
	FestivalMuban_dingzhiDesc(NFIPluginManager* pPluginManager);
	virtual ~FestivalMuban_dingzhiDesc();
	const proto_ff_s::festivalmuban_dingzhi_s* GetDesc(int id) const;
	proto_ff_s::festivalmuban_dingzhi_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::festivalmuban_dingzhi_s, MAX_FESTIVAL_MUBAN_DINGZHI_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::festivalmuban_dingzhi_s, MAX_FESTIVAL_MUBAN_DINGZHI_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::festivalmuban_dingzhi_s, festivalmuban_dingzhi, MAX_FESTIVAL_MUBAN_DINGZHI_NUM);
DECLARE_IDCREATE(FestivalMuban_dingzhiDesc);
};
