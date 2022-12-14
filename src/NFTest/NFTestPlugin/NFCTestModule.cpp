// -------------------------------------------------------------------------
//    @FileName         :    NFCTestActorModule.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFTestPlugin
//
// -------------------------------------------------------------------------

#include "NFCTestModule.h"
#include "NFComm/NFCore/NFTime.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFCore/NFCommon.h"
#include "NFComm/NFPluginModule/NFIMessageModule.h"
#include "NFComm/NFPluginModule/NFIBusModule.h"
#include "NFComm/NFCore/NFMapEx.hpp"
#include "NFComm/NFCore/NFMap.hpp"
#include "NFComm/NFCore/NFFileUtility.h"
#include "NFComm/NFPluginModule/NFCoroutineTask.h"
#include "NFComm/NFPluginModule/NFIMysqlModule.h"
#include "NFComm/NFPluginModule/NFIAsyMysqlModule.h"

#include "NFComm/NFKernelMessage/yd_fieldoptions.pb.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFJson2PB/NFPbToJson.h"
#include "NFComm/NFPluginModule/NFJson2PB/NFJsonToPb.h"
#include "NFComm/NFShmCore/NFShmString.h"
#include "NFComm/NFShmCore/NFArray.h"
#include <iostream>
#include <mutex>
#include <atomic>
#include "NFComm/NFPluginModule/NFProto/NFXmlMessageCodec.h"
#include "NFComm/NFCore/NFMapEx.hpp"
#include "NFCommPlugin/NFNetPlugin/NFEmailSender.h"
#include "NFComm/NFCore/NFConcurrentQueue.h"
#include "NFComm/NFPluginModule/NFINamingModule.h"
#include "NFComm/NFCore/NFServerIDUtil.h"
#include "NFShmHashMapTest.h"
#include "NFEmailSenderTest.h"

NFCTestModule::NFCTestModule(NFIPluginManager* p): NFIDynamicModule(p)
{
}

NFCTestModule::~NFCTestModule()
{
}



bool NFCTestModule::Init()
{
    //����NFShmHashMap������
    TestShmHashMap();
    TestShmHashMap2();

    //TestEmailSender();

	SetTimer(1, 1000, 1);
	return true;
}


int NFCTestModule::OnTimer(uint32_t nTimerID)
{
    return 0;
}

bool NFCTestModule::Execute()
{
	return true;
}

bool NFCTestModule::BeforeShut()
{
	return true;
}

bool NFCTestModule::Shut()
{
	return true;
}
