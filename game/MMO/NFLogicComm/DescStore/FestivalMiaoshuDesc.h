#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/festival_s.h"

#define MAX_FESTIVAL_MIAOSHU_NUM 20

class FestivalMiaoshuDesc : public NFIDescStore
{
public:
	FestivalMiaoshuDesc(NFIPluginManager* pPluginManager);
	virtual ~FestivalMiaoshuDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::festivalmiaoshu_s* GetDesc(int id) const;
	proto_ff_s::festivalmiaoshu_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::festivalmiaoshu_s, MAX_FESTIVAL_MIAOSHU_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::festivalmiaoshu_s, MAX_FESTIVAL_MIAOSHU_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::festivalmiaoshu_s, festivalmiaoshu, MAX_FESTIVAL_MIAOSHU_NUM);
DECLARE_IDCREATE(FestivalMiaoshuDesc);
};
