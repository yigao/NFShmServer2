#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/guild_s.h"

#define MAX_GUILD_POSITION_NUM 20

class GuildPositionDesc : public NFIDescStore
{
public:
	GuildPositionDesc(NFIPluginManager* pPluginManager);
	virtual ~GuildPositionDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::guildposition_s* GetDesc(int id) const;
	proto_ff_s::guildposition_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::guildposition_s, MAX_GUILD_POSITION_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::guildposition_s, MAX_GUILD_POSITION_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::guildposition_s, guildposition, MAX_GUILD_POSITION_NUM);
DECLARE_IDCREATE(GuildPositionDesc);
};
