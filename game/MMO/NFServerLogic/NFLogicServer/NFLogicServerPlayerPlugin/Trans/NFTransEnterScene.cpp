// -------------------------------------------------------------------------
//    @FileName         :    NFTransEnterScene.cpp
//    @Author           :    gaoyi
//    @Date             :    22-11-15
//    @Email			:    445267987@qq.com
//    @Module           :    NFTransEnterScene
//
// -------------------------------------------------------------------------

#include "NFTransEnterScene.h"
#include "ServerInternalCmd2.pb.h"
#include "NFComm/NFPluginModule/NFCheck.h"
#include "Player/NFPlayer.h"
#include "ServerInternal2.pb.h"
#include "NFServerComm/NFServerCommon/NFIServerMessageModule.h"

IMPLEMENT_IDCREATE_WITHTYPE(NFTransEnterScene, EOT_TRANS_LOGIC_ENTER_SCENE, NFTransBase)

NFTransEnterScene::NFTransEnterScene() : NFTransPlayerBase()
{
    if (EN_OBJ_MODE_INIT == NFShmMgr::Instance()->GetCreateMode())
    {
        CreateInit();
    }
    else
    {
        ResumeInit();
    }
}

NFTransEnterScene::~NFTransEnterScene()
{
}

int NFTransEnterScene::CreateInit()
{
    return 0;
}

int NFTransEnterScene::ResumeInit()
{
    return 0;
}

int NFTransEnterScene::HandleCSMsgReq(const google::protobuf::Message *pCSMsgReq)
{
    return 0;
}

int NFTransEnterScene::InitStaticMapInfo()
{
    auto pPlayer = GetPlayer();
    CHECK_NULL(pPlayer);

    m_mapId = pPlayer->GetMapId();
    m_sceneId = pPlayer->GetSceneId();

    return 0;
}

int NFTransEnterScene::SendEnterScene()
{
    auto pPlayer = GetPlayer();
    CHECK_NULL(pPlayer);

    proto_ff::LogicToWorldEnterSceneReq xMsg;
    xMsg.set_cid(m_roleId);
    xMsg.set_map_id(m_mapId);
    xMsg.set_scene_id(m_sceneId);
    xMsg.set_req_trans_id(GetGlobalID());

    pPlayer->SendMsgToWorldServer(proto_ff::LOGIC_TO_WORLD_ENTER_SCENE_REQ, xMsg);
    return 0;
}
