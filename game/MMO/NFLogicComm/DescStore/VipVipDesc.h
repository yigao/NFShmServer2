#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/vip_s.h"

#define MAX_VIP_VIP_NUM 20

class VipVipDesc : public NFIDescStore
{
public:
	VipVipDesc();
	virtual ~VipVipDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::vipvip_s* GetDesc(int id) const;
	proto_ff_s::vipvip_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::vipvip_s, vipvip, MAX_VIP_VIP_NUM);
DECLARE_IDCREATE(VipVipDesc);
};
