#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/guild_s.h"

#define MAX_GUILD_LEVEL_NUM 20

class GuildLevelDesc : public NFIDescStore
{
public:
	GuildLevelDesc(NFIPluginManager* pPluginManager);
	virtual ~GuildLevelDesc();
	const proto_ff_s::guildlevel_s* GetDesc(int id) const;
	proto_ff_s::guildlevel_s* GetDesc(int id);
	const NFShmHashMap<uint64_t, proto_ff_s::guildlevel_s, MAX_GUILD_LEVEL_NUM>* GetAllDesc() const { return &m_astDesc; }
	NFShmHashMap<uint64_t, proto_ff_s::guildlevel_s, MAX_GUILD_LEVEL_NUM>* GetAllDesc() { return &m_astDesc; }
public:
IMPL_RES_HASH_DESC(proto_ff_s::guildlevel_s, guildlevel, MAX_GUILD_LEVEL_NUM);
DECLARE_IDCREATE(GuildLevelDesc);
};
