#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/dup_s.h"

#define MAX_DUP_GROUP_NUM 20

class DupGroupDesc : public NFIDescStore
{
public:
	DupGroupDesc();
	virtual ~DupGroupDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::dupgroup_s* GetDesc(int id) const;
	proto_ff_s::dupgroup_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::dupgroup_s, dupgroup, MAX_DUP_GROUP_NUM);
DECLARE_IDCREATE(DupGroupDesc);
};
