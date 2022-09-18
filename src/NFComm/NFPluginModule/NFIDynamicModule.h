// -------------------------------------------------------------------------
//    @FileName         :    NFIDynamicModule.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFIDynamicModule
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFPluginModule/NFIModule.h"
#include "NFComm/NFPluginModule/NFTimerObj.h"
#include "NFComm/NFPluginModule/NFEventObj.h"


/**
* @brief 用来实现动态加载的模块，所有可以动态加载的引擎的module都需要继承这个类
*/
class NFIDynamicModule : public NFIModule, public NFTimerObj, public NFEventObj
{
public:
	NFIDynamicModule(NFIPluginManager* p);

	virtual ~NFIDynamicModule();

	virtual void OnTimer(uint32_t nTimerID);

	virtual int OnExecute(uint32_t nEventID, uint64_t nSrcID, uint32_t bySrcType, const google::protobuf::Message& message);
};
