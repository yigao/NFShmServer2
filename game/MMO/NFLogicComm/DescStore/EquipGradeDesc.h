#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/equip_s.h"

#define MAX_EQUIP_GRADE_NUM 40

class EquipGradeDesc : public NFIDescStore
{
public:
	EquipGradeDesc();
	virtual ~EquipGradeDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::equipgrade_s* GetDesc(int id) const;
	proto_ff_s::equipgrade_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::equipgrade_s, equipgrade, MAX_EQUIP_GRADE_NUM);
DECLARE_IDCREATE(EquipGradeDesc);
};
