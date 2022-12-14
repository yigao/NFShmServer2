// -------------------------------------------------------------------------
//    @FileName         :    NFWorldServerPlayerPlugin.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFWorldServerPlayerPlugin
//
// -------------------------------------------------------------------------

#include "NFWorldServerPlayerPlugin.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include "NFComm/NFPluginModule/NFIConfigModule.h"
#include "NFWorldConfig.h"
#include "NFWorldPlayerModule.h"
#include "NFWorldPlayer.h"
#include "NFWorldPlayerMgr.h"
#include "NFWorldSession.h"
#include "NFWorldSessionMgr.h"
#include "NFWorldSceneMgr.h"
#include "NFWorldGMModule.h"

#ifdef NF_DYNAMIC_PLUGIN

NF_EXPORT void DllStartPlugin(NFIPluginManager* pm)
{
    CREATE_PLUGIN(pm, NFWorldServerPlayerPlugin)

};

NF_EXPORT void DllStopPlugin(NFIPluginManager* pm)
{
    DESTROY_PLUGIN(pm, NFWorldServerPlayerPlugin)
};

#endif


//////////////////////////////////////////////////////////////////////////

int NFWorldServerPlayerPlugin::GetPluginVersion()
{
	return 0;
}

std::string NFWorldServerPlayerPlugin::GetPluginName()
{
	return GET_CLASS_NAME(NFWorldServerPlayerPlugin);
}

void NFWorldServerPlayerPlugin::Install()
{
	REGISTER_MODULE(m_pObjPluginManager, NFCWorldPlayerModule, NFCWorldPlayerModule);
    REGISTER_MODULE(m_pObjPluginManager, NFWorldGMModule, NFWorldGMModule);
}

void NFWorldServerPlayerPlugin::Uninstall()
{
	UNREGISTER_MODULE(m_pObjPluginManager, NFCWorldPlayerModule, NFCWorldPlayerModule);
    UNREGISTER_MODULE(m_pObjPluginManager, NFWorldGMModule, NFWorldGMModule);
}

bool NFWorldServerPlayerPlugin::InitShmObjectRegister()
{
    NFServerConfig* pConfig = FindModule<NFIConfigModule>()->GetAppConfig(NF_ST_WORLD_SERVER);
    NF_ASSERT(pConfig);

    uint32_t maxOnlinePlayerNum = pConfig->MaxOnlinePlayerNum;
    if (maxOnlinePlayerNum >= WORLD_SERVER_MAX_ONLINE_COUNT)
    {
        maxOnlinePlayerNum = WORLD_SERVER_MAX_ONLINE_COUNT;
    }

    REGISTER_SINGLETON_SHM_OBJ(NFWorldConfig);//
	REGISTER_SHM_OBJ_WITH_HASH_AND_INDEX(NFWorldPlayer, maxOnlinePlayerNum, NF_WORLD_PLAYER_MAX_INDEX, 2);
    REGISTER_SINGLETON_SHM_OBJ(NFWorldPlayerMgr);//
    REGISTER_SHM_OBJ_WITH_HASH(NFWorldSession, maxOnlinePlayerNum * 2);//
    REGISTER_SINGLETON_SHM_OBJ(NFWorldSessionMgr);//
    REGISTER_SINGLETON_SHM_OBJ(NFWorldSceneMgr);//

	return true;
}
