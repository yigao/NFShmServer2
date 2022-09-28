#include "EquipStrongexpDesc.h"
#include "NFComm/NFPluginModule/NFCheck.h"

IMPLEMENT_IDCREATE_WITHTYPE(EquipStrongexpDesc, EOT_CONST_EQUIP_STRONGEXP_DESC_ID, NFShmObj)

EquipStrongexpDesc::EquipStrongexpDesc(NFIPluginManager* pPluginManager):NFIDescStore(pPluginManager)
{
	if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode()) {
		CreateInit();
	}
	else {
		ResumeInit();
	}
}

EquipStrongexpDesc::~EquipStrongexpDesc()
{
}

int EquipStrongexpDesc::CreateInit()
{
	Initialize();
	return 0;
}

int EquipStrongexpDesc::ResumeInit()
{
	return 0;
}

int EquipStrongexpDesc::Load(NFResDB *pDB)
{
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--begin--");
	CHECK_EXPR(pDB != NULL, -1, "pDB == NULL");

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "NFConstDesc::Load() strFileName = {}", GetFileName());

	proto_ff::Sheet_equipstrongexp table;
	NFResTable* pResTable = pDB->GetTable(GetFileName());
	CHECK_EXPR(pResTable != NULL, -1, "pTable == NULL, GetTable:{} Error", GetFileName());

	int iRet = 0;
	iRet = pResTable->FindAllRecord(GetDBName(), &table);
	CHECK_EXPR(iRet == 0, -1, "FindAllRecord Error:{}", GetFileName());

	//NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "{}", table.Utf8DebugString());

	if ((table.equipstrongexp_list_size() < 0) || (table.equipstrongexp_list_size() > (int)(m_astDesc.GetSize())))
	{
		NFLogError(NF_LOG_COMM_LOGIC_PLUGIN, 0, "Invalid TotalNum:{}", table.equipstrongexp_list_size());
		return -2;
	}

	for (int i = 0; i < table.equipstrongexp_list_size(); i++)
	{
		const proto_ff::equipstrongexp& desc = table.equipstrongexp_list(i);
		auto pDesc = m_astDesc.Insert(desc.lv());
		CHECK_EXPR(pDesc, -1, "m_astDesc.Insert Failed desc.id:{}", desc.lv());
		pDesc->read_from_pbmsg(desc);
	}

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "load {}, num={}", iRet, table.equipstrongexp_list_size());
	return 0;
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--end--");
}

int EquipStrongexpDesc::CheckWhenAllDataLoaded()
{
	return 0;
}

const proto_ff_s::equipstrongexp_s * EquipStrongexpDesc::GetDesc(int id) const
{
	return m_astDesc.Find(id);
}

proto_ff_s::equipstrongexp_s * EquipStrongexpDesc::GetDesc(int id)
{
	return m_astDesc.Find(id);
}
