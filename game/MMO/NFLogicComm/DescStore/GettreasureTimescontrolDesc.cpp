#include "GettreasureTimescontrolDesc.h"
#include "NFComm/NFPluginModule/NFCheck.h"

IMPLEMENT_IDCREATE_WITHTYPE(GettreasureTimescontrolDesc, EOT_CONST_GETTREASURE_TIMESCONTROL_DESC_ID, NFShmObj)

GettreasureTimescontrolDesc::GettreasureTimescontrolDesc(NFIPluginManager* pPluginManager):NFIDescStore(pPluginManager)
{
	if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode()) {
		CreateInit();
	}
	else {
		ResumeInit();
	}
}

GettreasureTimescontrolDesc::~GettreasureTimescontrolDesc()
{
}

int GettreasureTimescontrolDesc::CreateInit()
{
	Initialize();
	return 0;
}

int GettreasureTimescontrolDesc::ResumeInit()
{
	return 0;
}

int GettreasureTimescontrolDesc::Load(NFResDB *pDB)
{
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--begin--");
	CHECK_EXPR(pDB != NULL, -1, "pDB == NULL");

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "NFConstDesc::Load() strFileName = {}", GetFileName());

	proto_ff::Sheet_getTreasuretimesControl table;
	NFResTable* pResTable = pDB->GetTable(GetFileName());
	CHECK_EXPR(pResTable != NULL, -1, "pTable == NULL, GetTable:{} Error", GetFileName());

	int iRet = 0;
	iRet = pResTable->FindAllRecord(GetDBName(), &table);
	CHECK_EXPR(iRet == 0, -1, "FindAllRecord Error:{}", GetFileName());

	//NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "{}", table.Utf8DebugString());

	if ((table.getTreasuretimesControl_list_size() < 0) || (table.getTreasuretimesControl_list_size() > (int)(m_astDesc.GetSize())))
	{
		NFLogError(NF_LOG_COMM_LOGIC_PLUGIN, 0, "Invalid TotalNum:{}", table.getTreasuretimesControl_list_size());
		return -2;
	}

	for (int i = 0; i < table.getTreasuretimesControl_list_size(); i++)
	{
		const proto_ff::getTreasuretimesControl& desc = table.getTreasuretimesControl_list(i);
		auto pDesc = m_astDesc.Insert(desc.bosstype());
		CHECK_EXPR(pDesc, -1, "m_astDesc.Insert Failed desc.id:{}", desc.bosstype());
		pDesc->read_from_pbmsg(desc);
	}

	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "load {}, num={}", iRet, table.getTreasuretimesControl_list_size());
	return 0;
	NFLogTrace(NF_LOG_COMM_LOGIC_PLUGIN, 0, "--end--");
}

int GettreasureTimescontrolDesc::CheckWhenAllDataLoaded()
{
	return 0;
}

const proto_ff_s::getTreasuretimesControl_s * GettreasureTimescontrolDesc::GetDesc(int id) const
{
	return m_astDesc.Find(id);
}

proto_ff_s::getTreasuretimesControl_s * GettreasureTimescontrolDesc::GetDesc(int id)
{
	return m_astDesc.Find(id);
}

