#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/manor_s.h"

#define MAX_MANOR_LOG_NUM 20

class ManorLogDesc : public NFIDescStore
{
public:
	ManorLogDesc(NFIPluginManager* pPluginManager);
	virtual ~ManorLogDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::manorlog_s* GetDesc(int id) const;
	proto_ff_s::manorlog_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::manorlog_s, MAX_MANOR_LOG_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::manorlog_s, MAX_MANOR_LOG_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::manorlog_s, manorlog, MAX_MANOR_LOG_NUM);
DECLARE_IDCREATE(ManorLogDesc);
};
