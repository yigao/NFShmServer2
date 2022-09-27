#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/closetest_s.h"

#define MAX_CLOSETEST_ACTIVITY_NUM 20

class ClosetestActivityDesc : public NFIDescStore
{
public:
	ClosetestActivityDesc(NFIPluginManager* pPluginManager);
	virtual ~ClosetestActivityDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::closetestActivity_s* GetDesc(int id) const;
	proto_ff_s::closetestActivity_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::closetestActivity_s, MAX_CLOSETEST_ACTIVITY_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::closetestActivity_s, MAX_CLOSETEST_ACTIVITY_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::closetestActivity_s, closetestActivity, MAX_CLOSETEST_ACTIVITY_NUM);
DECLARE_IDCREATE(ClosetestActivityDesc);
};
