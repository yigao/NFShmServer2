#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/box_s.h"

#define MAX_BOX_BOXDATA_NUM 40

class BoxBoxdataDesc : public NFIDescStore
{
public:
	BoxBoxdataDesc();
	virtual ~BoxBoxdataDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::boxboxdata_s* GetDesc(int id) const;
	proto_ff_s::boxboxdata_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::boxboxdata_s, boxboxdata, MAX_BOX_BOXDATA_NUM);
DECLARE_IDCREATE(BoxBoxdataDesc);
};
