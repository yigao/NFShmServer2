#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/godRelics_s.h"

#define MAX_GODRELICS_GODRELICS_NUM 20

class GodrelicsGodrelicsDesc : public NFIDescStore
{
public:
	GodrelicsGodrelicsDesc();
	virtual ~GodrelicsGodrelicsDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::godRelicsgodRelics_s* GetDesc(int id) const;
	proto_ff_s::godRelicsgodRelics_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::godRelicsgodRelics_s, godRelicsgodRelics, MAX_GODRELICS_GODRELICS_NUM);
DECLARE_IDCREATE(GodrelicsGodrelicsDesc);
};
