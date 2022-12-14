#pragma once

#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "NFServerLogicMessage/msg_s.h"

#define MAX_MSG_PHPMSG_NUM 200

class MsgPhpmsgDesc : public NFIDescStore
{
public:
	MsgPhpmsgDesc();
	virtual ~MsgPhpmsgDesc();
	int CreateInit();
	int ResumeInit();
	const proto_ff_s::msgphpmsg_s* GetDesc(int id) const;
	proto_ff_s::msgphpmsg_s* GetDesc(int id);
public:
IMPL_RES_HASH_DESC(proto_ff_s::msgphpmsg_s, msgphpmsg, MAX_MSG_PHPMSG_NUM);
DECLARE_IDCREATE(MsgPhpmsgDesc);
};
