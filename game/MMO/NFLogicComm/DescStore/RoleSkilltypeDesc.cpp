#include "RoleSkilltypeDesc.h"
#include "NFComm/NFPluginModule/NFCheck.h"

IMPLEMENT_IDCREATE_WITHTYPE(RoleSkilltypeDesc, EOT_CONST_ROLE_SKILLTYPE_DESC_ID, NFShmObj)

RoleSkilltypeDesc::RoleSkilltypeDesc(NFIPluginManager* pPluginManager):NFIDescStore(pPluginManager)
{
	if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode()) {
		CreateInit();
	}
	else {
		ResumeInit();
	}
}

RoleSkilltypeDesc::~RoleSkilltypeDesc()
{
}

int RoleSkilltypeDesc::CreateInit()
{
	Initialize();
	return 0;
}

int RoleSkilltypeDesc::ResumeInit()
{
	return 0;
}

int RoleSkilltypeDesc::Load(NFResDB *pDB)
{
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--begin--");
	CHECK_EXPR(pDB != NULL, -1, "pDB == NULL");

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "NFConstDesc::Load() strFileName = {}", GetFileName());

	proto_ff::Sheet_roleskillType table;
	NFResTable* pResTable = pDB->GetTable(GetFileName());
	CHECK_EXPR(pResTable != NULL, -1, "pTable == NULL, GetTable:{} Error", GetFileName());

	int iRet = 0;
	iRet = pResTable->FindAllRecord(GetDBName(), &table);
	CHECK_EXPR(iRet == 0, -1, "FindAllRecord Error:{}", GetFileName());

	//NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "{}", table.Utf8DebugString());

	if ((table.roleskillType_list_size() < 0) || (table.roleskillType_list_size() > (int)(m_astDesc.GetSize())))
	{
		NFLogError(NF_LOG_COMM_LOGIC_PLUGIN, 0, "Invalid TotalNum:{}", table.roleskillType_list_size());
		return -2;
	}

	for (int i = 0; i < table.roleskillType_list_size(); i++)
	{
		const proto_ff::roleskillType& desc = table.roleskillType_list(i);
		auto pDesc = m_astDesc.Insert(desc.skillid());
		CHECK_EXPR(pDesc, -1, "m_astDesc.Insert Failed desc.id:{}", desc.skillid());
		pDesc->read_from_pbmsg(desc);
	}

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "load {}, num={}", iRet, table.roleskillType_list_size());
	return 0;
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--end--");
}

int RoleSkilltypeDesc::CheckWhenAllDataLoaded()
{
	return 0;
}

const proto_ff_s::roleskillType_s * RoleSkilltypeDesc::GetDesc(int id) const
{
	return m_astDesc.Find(id);
}

proto_ff_s::roleskillType_s * RoleSkilltypeDesc::GetDesc(int id)
{
	return m_astDesc.Find(id);
}

