#include "Gm5helpRewardDesc.h"
#include "NFComm/NFPluginModule/NFCheck.h"

IMPLEMENT_IDCREATE_WITHTYPE(Gm5helpRewardDesc, EOT_CONST_GM5HELP_REWARD_DESC_ID, NFShmObj)

Gm5helpRewardDesc::Gm5helpRewardDesc(NFIPluginManager* pPluginManager):NFIDescStore(pPluginManager)
{
	if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode()) {
		CreateInit();
	}
	else {
		ResumeInit();
	}
}

Gm5helpRewardDesc::~Gm5helpRewardDesc()
{
}

int Gm5helpRewardDesc::CreateInit()
{
	Initialize();
	return 0;
}

int Gm5helpRewardDesc::ResumeInit()
{
	return 0;
}

int Gm5helpRewardDesc::Load(NFResDB *pDB)
{
	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "--begin--");
	CHECK_EXPR(pDB != NULL, -1, "pDB == NULL");

	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "NFConstDesc::Load() strFileName = {}", GetFileName());

	proto_ff::Sheet_gm5Helpreward table;
	NFResTable* pResTable = pDB->GetTable(GetFileName());
	CHECK_EXPR(pResTable != NULL, -1, "pTable == NULL, GetTable:{} Error", GetFileName());

	int iRet = 0;
	iRet = pResTable->FindAllRecord(GetDBName(), &table);
	CHECK_EXPR(iRet == 0, -1, "FindAllRecord Error:{}", GetFileName());

	//NFLogTrace(NF_LOG_SYSTEMLOG, 0, "{}", table.Utf8DebugString());

	if ((table.gm5helpreward_list_size() < 0) || (table.gm5helpreward_list_size() > (int)(m_astDesc.GetSize())))
	{
		NFLogError(NF_LOG_SYSTEMLOG, 0, "Invalid TotalNum:{}", table.gm5helpreward_list_size());
		return -2;
	}

	for (int i = 0; i < table.gm5helpreward_list_size(); i++)
	{
		const proto_ff::gm5Helpreward& desc = table.gm5helpreward_list(i);
		if (desc.has_id() == false && desc.ByteSize() == 0)
		{
			NFLogError(NF_LOG_SYSTEMLOG, 0, "the desc no value, {}", desc.Utf8DebugString());
			continue;
		}
		//NFLogTrace(NF_LOG_SYSTEMLOG, 0, "{}", desc.Utf8DebugString());
		auto pDesc = m_astDesc.Insert(desc.id());
		CHECK_EXPR(pDesc, -1, "m_astDesc.Insert Failed desc.id:{}", desc.id());
		pDesc->read_from_pbmsg(desc);
	}

	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "load {}, num={}", iRet, table.gm5helpreward_list_size());
	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "--end--");
	return 0;
}

int Gm5helpRewardDesc::CheckWhenAllDataLoaded()
{
	return 0;
}

const proto_ff_s::gm5Helpreward_s * Gm5helpRewardDesc::GetDesc(int id) const
{
	return m_astDesc.Find(id);
}

proto_ff_s::gm5Helpreward_s * Gm5helpRewardDesc::GetDesc(int id)
{
	return m_astDesc.Find(id);
}
