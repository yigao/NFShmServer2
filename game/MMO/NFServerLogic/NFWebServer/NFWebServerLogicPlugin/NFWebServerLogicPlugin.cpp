// -------------------------------------------------------------------------
//    @FileName         :    NFWebServerLogicPlugin.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFWebServerLogicPlugin.cpp
//
// -------------------------------------------------------------------------


#include "NFWebServerLogicPlugin.h"
#include "NFComm/NFPluginModule/NFIPluginManager.h"
#include "NFCWebMessageModule.h"

#ifdef NF_DYNAMIC_PLUGIN

NF_EXPORT void DllStartPlugin(NFIPluginManager* pm)
{
    CREATE_PLUGIN(pm, NFWebServerLogicPlugin)

};

NF_EXPORT void DllStopPlugin(NFIPluginManager* pm)
{
    DESTROY_PLUGIN(pm, NFWebServerLogicPlugin)
};

#endif


//////////////////////////////////////////////////////////////////////////

int NFWebServerLogicPlugin::GetPluginVersion()
{
    return 0;
}

std::string NFWebServerLogicPlugin::GetPluginName()
{
    return GET_CLASS_NAME(NFWebServerLogicPlugin);
}

void NFWebServerLogicPlugin::Install()
{
    REGISTER_MODULE(m_pPluginManager, NFCWebMessageModule, NFCWebMessageModule);
}

void NFWebServerLogicPlugin::Uninstall()
{
    UNREGISTER_MODULE(m_pPluginManager, NFCWebMessageModule, NFCWebMessageModule);
}

