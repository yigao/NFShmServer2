// -------------------------------------------------------------------------
//    @FileName         :    NFMapDescStoreEx.h
//    @Author           :    gaoyi
//    @Date             :    22-11-2
//    @Email			:    445267987@qq.com
//    @Module           :    NFMapDescStoreEx
//
// -------------------------------------------------------------------------

#pragma once


#include "NFComm/NFCore/NFPlatform.h"
#include "NFServerComm/NFDescStorePlugin/NFIDescStore.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFLogicCommon/NFDescStoreTypeDefines.h"
#include "DescStore/MapMapDesc.h"
#include "DescStore/RoleBornDesc.h"
#include "common_logic_s.h"
#include "NFLogicCommon/NFPoint3.h"

#define NF_MAP_DESC_BORN_MAX_SIZE 40
#define NF_MAP_DESC_AREA_MAX_POS_SIZE 10
#define NF_MAP_DESC_PATH_MAX_POS_SIZE 10

class NFPosCfg
{
public:
    NFPosCfg()
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

    int CreateInit()
    {
        m_pos.CreateInit();
        m_dir = 0;
        return 0;
    }

    int ResumeInit()
    {
        return 0;
    }

    NFPoint3<float> m_pos;
    float m_dir;
};

typedef NFArray<NFPosCfg, NF_MAP_DESC_BORN_MAX_SIZE> VecPosCfg;
typedef NFArray<NFPoint3<float>, NF_MAP_DESC_PATH_MAX_POS_SIZE> VecPathPosCfg;

class NFPathCfg
{
public:
    NFPathCfg()
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

    int CreateInit()
    {
        m_pathCfg.CreateInit();
        m_id = 0;
        m_mapId = 0;
        return 0;
    }

    int ResumeInit()
    {
        return 0;
    }

    VecPathPosCfg m_pathCfg;
    uint64_t m_id;
    uint64_t m_mapId;
};

class NFAreaPosCfg
{
public:
    NFAreaPosCfg()
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

    int CreateInit()
    {
        m_circle.CreateInit();
        m_radius = 0;
        return 0;
    }

    int ResumeInit()
    {
        return 0;
    }

    NFPoint3<float> m_circle;
    float m_radius;
};

typedef NFArray<NFAreaPosCfg, NF_MAP_DESC_AREA_MAX_POS_SIZE> VecAreaPosCfg;

class NFAreaCfg
{
public:
    NFAreaCfg()
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

    int CreateInit()
    {
        m_areaCfg.CreateInit();
        m_id = 0;
        m_mapId = 0;
        return 0;
    }

    int ResumeInit()
    {
        return 0;
    }

    VecAreaPosCfg m_areaCfg;
    uint64_t m_id;
    uint64_t m_mapId;
};

class NFMapDescStoreEx : public NFIDescStore
{
public:
    NFMapDescStoreEx();

    virtual ~NFMapDescStoreEx();

    int CreateInit();

    int ResumeInit();

public:
    int LoadBornCfg(uint64_t mapId, const std::string &file);

    int32_t BornPointCount(int64_t mapId);                                //????????????????????????
    const NFPoint3<float> *RandBornPoint(int64_t mapId);                //??????????????????????????????
    const VecPosCfg *GetBornPosCfg(int64_t mapId);                    //???????????????????????????
    const proto_ff_s::roleborn_s *GetBornCfg(int32_t prof);                    //????????????????????????

    bool IsDynamic(int64_t mapId);                                            //?????????????????????
    bool IsActSpecMap(int64_t mapId);                                        //???????????????????????????
public:
    /**
     * @brief ?????????????????????
     * @param id
     * @return
     */
    const VecPosCfg* GetPointCfg(int64_t id);

    /**
     * @brief ??????????????????
     * @param id
     * @return
     */
    const NFPathCfg* GetPathCfg(int64_t id);

    /**
     * @brief ??????????????????
     * @param id
     * @return
     */
    const NFAreaCfg* GetAreaCfg(int64_t id);

    /**
     * @brief ??????????????????
     * @param areaid
     * @param pos
     * @return
     */
    bool InArea(int64_t areaid, const NFPoint3<float> &pos);

    /**
     * @brief ???????????????????????????
     * @param areaid
     * @param outpos
     * @return
     */
    bool RandPosInArea(int64_t areaid, NFPoint3<float> &outpos);


private:
    NFShmHashMap<uint64_t, VecPosCfg, MAX_MAP_MAP_NUM> m_bornPosMap;
    NFShmHashMap<uint64_t, uint64_t, 10> m_bornProfMap;
private:
    NFShmHashMap<uint64_t, VecPosCfg, MAX_MAP_MAP_NUM * 10> m_pointMap;
    NFShmHashMap<uint64_t, NFAreaCfg, MAX_MAP_MAP_NUM * 10> m_areaMap;
    NFShmHashMap<uint64_t, NFPathCfg, MAX_MAP_MAP_NUM * 10> m_pathMap;
private:
DECLARE_IDCREATE(NFMapDescStoreEx);
IMPL_RES_SIMPLE_DESC(NFMapDescStoreEx);
};