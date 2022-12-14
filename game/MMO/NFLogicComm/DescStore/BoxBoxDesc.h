#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/box_s.h"

#define MAX_BOX_BOX_NUM 20

class BoxBoxDesc : public NFIDescStore
{
public:
	BoxBoxDesc();
	virtual ~BoxBoxDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::boxbox_s* GetDesc(int id) const;
	proto_ff_s::boxbox_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::boxbox_s, boxbox, MAX_BOX_BOX_NUM);
DECLARE_IDCREATE(BoxBoxDesc);
};
