#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/functionunlock_s.h"

#define MAX_FUNCTIONUNLOCK_PREVIEW_NUM 20

class FunctionunlockPreviewDesc : public NFIDescStore
{
public:
	FunctionunlockPreviewDesc();
	virtual ~FunctionunlockPreviewDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::functionunlockpreview_s* GetDesc(int id) const;
	proto_ff_s::functionunlockpreview_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::functionunlockpreview_s, functionunlockpreview, MAX_FUNCTIONUNLOCK_PREVIEW_NUM);
DECLARE_IDCREATE(FunctionunlockPreviewDesc);
};
