#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/partner_s.h"

#define MAX_PARTNER_FRAGMENT_NUM 20

class PartnerFragmentDesc : public NFIDescStore
{
public:
	PartnerFragmentDesc(NFIPluginManager* pPluginManager);
	virtual ~PartnerFragmentDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::partnerfragment_s* GetDesc(int id) const;
	proto_ff_s::partnerfragment_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::partnerfragment_s, MAX_PARTNER_FRAGMENT_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::partnerfragment_s, MAX_PARTNER_FRAGMENT_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::partnerfragment_s, partnerfragment, MAX_PARTNER_FRAGMENT_NUM);
DECLARE_IDCREATE(PartnerFragmentDesc);
};
