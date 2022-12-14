#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/dup_s.h"

#define MAX_DUP_DUP_NUM 80

class DupDupDesc : public NFIDescStore
{
public:
	DupDupDesc();
	virtual ~DupDupDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::dupdup_s* GetDesc(int id) const;
	proto_ff_s::dupdup_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::dupdup_s, dupdup, MAX_DUP_DUP_NUM);
DECLARE_IDCREATE(DupDupDesc);
};
