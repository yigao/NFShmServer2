// -------------------------------------------------------------------------
//    @FileName         :    NFItemUtil.cpp
//    @Author           :    gaoyi
//    @Date             :    22-11-26
//    @Email			:    445267987@qq.com
//    @Module           :    NFItemUtil
//
// -------------------------------------------------------------------------

#include "NFItemMgr.h"
#include "NFComm/NFPluginModule/NFCheck.h"
#include "DescStore/ItemItemDesc.h"
#include "DescStore/EquipEquipDesc.h"
#include "DescStoreEx/NFItemDescStoreEx.h"

IMPLEMENT_IDCREATE_WITHTYPE(NFItemMgr, EOT_LOGIC_ITEM_MGR_ID, NFShmObj)

NFItemMgr::NFItemMgr()
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

NFItemMgr::~NFItemMgr()
{
}

int NFItemMgr::CreateInit()
{
    return 0;
}

int NFItemMgr::ResumeInit()
{
    return 0;
}

int NFItemMgr::ItemFromCSData(NFGridItem &item, const proto_ff::ItemGridCSData *pData)
{
    CHECK_NULL(pData);
    return 0;
}

bool NFItemMgr::IsVirItem(uint64_t itemId)
{
    return NFItemDescStoreEx::Instance(m_pObjPluginManager)->AttrIdByItem(itemId) > 0;
}

bool NFItemMgr::IsVirItem(uint64_t itemId, uint32_t &attrId)
{
    uint32_t attr = NFItemDescStoreEx::Instance(m_pObjPluginManager)->AttrIdByItem(itemId);
    if (attr > 0)
    {
        attrId = attr;
        return true;
    }
    return false;
}

void NFItemMgr::FilterVirItem(const LIST_ITEM &lstItem, LIST_ITEM &lstOutItem, MAP_UINT32_INT64 &mapAttr)
{
    uint32_t attrId = 0;
    for (auto iter = lstItem.begin(); iter != lstItem.end(); ++iter)
    {
        const SItem &item = (*iter);
        attrId = 0;
        if (IsVirItem(item.nItemID, attrId))
        {
            if (item.nNum > 0)
            {
                MAP_UINT32_INT64::iterator iterAttr = mapAttr.find(attrId);
                if (iterAttr != mapAttr.end())
                {
                    iterAttr->second += item.nNum;
                }
                else
                {
                    mapAttr[attrId] = item.nNum;
                }
            }
        }
        else
        {
            lstOutItem.push_back(item);
        }
    }
}

void NFItemMgr::FilterVirItem(const LIST_ITEM &lstItem, LIST_ITEM &lstOutItem)
{
    MAP_UINT32_INT64 mapAttr;
    FilterVirItem(lstItem, lstOutItem, mapAttr);
}

//??????????????????????????????
void NFItemMgr::FilterVirItem(const VEC_ITEM_PROTO_EX &vecProtoItemsEx, VEC_ITEM_PROTO_EX &vecOutProtoItemsEx, MAP_UINT32_INT64 &mapAttr)
{
    uint32_t attrId = 0;
    for (auto iter = vecProtoItemsEx.begin(); iter != vecProtoItemsEx.end(); ++iter)
    {
        const proto_ff::ItemProtoInfo &proto = (*iter);

        attrId = 0;
        if (IsVirItem(proto.item_id(), attrId))
        {
            if (proto.item_num() > 0)
            {
                MAP_UINT32_INT64::iterator iterAttr = mapAttr.find(attrId);
                if (iterAttr != mapAttr.end())
                {
                    iterAttr->second += proto.item_num();
                }
                else
                {
                    mapAttr[attrId] = proto.item_num();
                }
            }
        }
        else
        {
            vecOutProtoItemsEx.push_back(proto);
        }
    }
}

//??????????????????????????????
void NFItemMgr::FilterVirItem(const VEC_ITEM_PROTO_EX &vecProtoItemsEx, VEC_ITEM_PROTO_EX &vecOutProtoItemsEx)
{
    MAP_UINT32_INT64 mapAttr;
    FilterVirItem(vecProtoItemsEx, vecOutProtoItemsEx, mapAttr);
}

//?????????????????????????????????-??????????????????????????????????????????????????????????????????, ??????????????????????????????????????????????????????????????????
uint32_t NFItemMgr::CalcGridNeed(const LIST_ITEM &lstItem, const VEC_ITEM_PROTO_EX &vecProtoEx, uint32_t &nNoPileNeed, uint32_t &nPileNeed)
{
    MAP_UINT64_INT64 mapbd;
    MAP_UINT64_INT64 mapunbd;
    MAP_UINT64_INT64 mapmaxpile;
    //
    for (auto &iter: lstItem)
    {
        int64_t maxPile = 0;
        uint8_t byBind = (uint8_t) EBindState::EBindState_no;
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(iter.nItemID);
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(iter.nItemID);
            if (nullptr == pEquipCfg)
            {
                continue;
            }
            byBind = BindStateByWay(pEquipCfg, iter.byBind);
            maxPile = ItemMaxPile(pEquipCfg);
        }
        else
        {
            byBind = BindStateByWay(pItemCfg, iter.byBind);
            maxPile = ItemMaxPile(pItemCfg);
        }
        //
        mapmaxpile[iter.nItemID] = maxPile;
        //
        if (maxPile <= 1)
        {
            nNoPileNeed += iter.nNum;
        }
        else
        {
            if ((uint8_t) EBindState::EBindState_bind == byBind)
            {
                auto iterbd = mapbd.find(iter.nItemID);
                if (iterbd != mapbd.end())
                {
                    iterbd->second += iter.nNum;
                }
                else
                {
                    mapbd[iter.nItemID] = iter.nNum;
                }
            }
            else if ((uint8_t) EBindState::EBindState_no == byBind)
            {
                auto iterunbd = mapunbd.find(iter.nItemID);
                if (iterunbd != mapunbd.end())
                {
                    iterunbd->second += iter.nNum;
                }
                else
                {
                    mapunbd[iter.nItemID] = iter.nNum;
                }
            }
        }
    }
    //
    for (auto &iterproto: vecProtoEx)
    {
        int64_t maxPile = 0;
        uint8_t byBind = (uint8_t) EBindState::EBindState_no;
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(iterproto.item_id());
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(iterproto.item_id());
            if (nullptr == pEquipCfg)
            {
                continue;
            }
            byBind = BindStateByWay(pEquipCfg, iterproto.bind());
            maxPile = ItemMaxPile(pEquipCfg);
        }
        else
        {
            byBind = BindStateByWay(pItemCfg, iterproto.bind());
            maxPile = ItemMaxPile(pItemCfg);
        }
        //
        mapmaxpile[iterproto.item_id()] = maxPile;
        //
        if (maxPile <= 1)
        {
            nNoPileNeed += iterproto.item_num();
        }
        else
        {
            if ((uint8_t) EBindState::EBindState_bind == byBind)
            {
                auto iterbd = mapbd.find(iterproto.item_id());
                if (iterbd != mapbd.end())
                {
                    iterbd->second += iterproto.item_num();
                }
                else
                {
                    mapbd[iterproto.item_id()] = iterproto.item_num();
                }
            }
            else if ((uint8_t) EBindState::EBindState_no == byBind)
            {
                auto iterunbd = mapunbd.find(iterproto.item_id());
                if (iterunbd != mapunbd.end())
                {
                    iterunbd->second += iterproto.item_num();
                }
                else
                {
                    mapunbd[iterproto.item_id()] = iterproto.item_num();
                }
            }
        }
    }
    //
    for (auto &iterbd: mapbd)
    {
        auto iterf = mapmaxpile.find(iterbd.first);
        if (iterf == mapmaxpile.end())
        {
            continue;
        }
        int64_t maxPile = iterf->second;
        maxPile = (maxPile < 1) ? 1 : maxPile;
        //
        nPileNeed += iterbd.second / maxPile;
    }
    //
    for (auto &iterunbd: mapunbd)
    {
        auto iterf = mapmaxpile.find(iterunbd.first);
        if (iterf == mapmaxpile.end())
        {
            continue;
        }
        int64_t maxPile = iterf->second;
        maxPile = (maxPile < 1) ? 1 : maxPile;
        //
        nPileNeed += iterunbd.second / maxPile;
    }

    return (nNoPileNeed + nPileNeed);
}

int8_t NFItemMgr::BindStateByWay(uint64_t nItemId, int8_t byBind, int8_t bindWay)
{
    //????????????????????????????????????????????????
    if ((int8_t) EBindState::EBindState_bind == byBind)
    {
        return byBind;
    }

    auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(nItemId);
    if (nullptr == pItemCfg)
    {
        auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(nItemId);
        if (nullptr == pEquipCfg)
        {
            //?????????????????????????????? ?????????????????????
            return byBind;
        }
        //???????????????????????? ??????????????????????????????????????????????????????????????????
        return BindStateByWay(pEquipCfg, byBind, bindWay);
    }
    //
    return BindStateByWay(pItemCfg, byBind, bindWay);
}

int8_t NFItemMgr::BindStateByWay(const proto_ff_s::itemitem_s *pItemCfg, int8_t byBind, int8_t bindWay)
{
    if ((int8_t) EBindState::EBindState_bind == byBind)
    {
        return byBind;
    }
    if (nullptr != pItemCfg && pItemCfg->bindType)
    {
        return (int8_t) EBindState::EBindState_bind;
    }
    return byBind;
}

int8_t NFItemMgr::BindStateByWay(const proto_ff_s::equipequip_s *pEquipCfg, int8_t byBind, int8_t bindWay)
{
    if ((int8_t) EBindState::EBindState_bind == byBind)
    {
        return byBind;
    }
    if (nullptr != pEquipCfg && pEquipCfg->isCanbind)
    {
        return (int8_t) EBindState::EBindState_bind;
    }
    return byBind;
}

int64_t NFItemMgr::ItemMaxPile(uint64_t itemId)
{
    int64_t maxPile = 1;
    auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(itemId);
    if (nullptr == pItemCfg)
    {
        auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(itemId);
        maxPile = ItemMaxPile(pEquipCfg);
    }
    else
    {
        maxPile = ItemMaxPile(pItemCfg);
    }
    return maxPile;
}

int64_t NFItemMgr::ItemMaxPile(const proto_ff_s::itemitem_s *pItemCfg)
{
    int64_t maxPile = 1;
    if (nullptr != pItemCfg)
    {
        if (IsVirItem(pItemCfg->id))
        {
            //????????????,????????????int64_t ????????????
            maxPile = INT64_MAX;
        }
        else
        {
            maxPile = (pItemCfg->stackLimit < 1) ? 1 : pItemCfg->stackLimit;
        }
    }
    return maxPile;
}

int64_t NFItemMgr::ItemMaxPile(const proto_ff_s::equipequip_s *pEquipCfg)
{
    int64_t maxPile = 1;
    if (nullptr != pEquipCfg)
    {
        maxPile = 1;//???????????????1
    }
    return maxPile;
}

//???????????????????????????
bool NFItemMgr::ValidBindWay(int8_t bindWay)
{
    if (bindWay > EItemBindWay_None && bindWay < EItemBindWay_Limit)
    {
        return true;
    }
    return false;
}

//???????????????????????????
bool NFItemMgr::ValidForbidType(int8_t forbidType)
{
    if (forbidType > EItemForbidType_None && forbidType < EItemForbidType_Limit)
    {
        return true;
    }
    return false;
}
//??????????????????????????????????????????
bool NFItemMgr::ValidInitAttrType(int8_t initAttrType)
{
    return (initAttrType > (int8_t) EInitAttrType::None && initAttrType < (int8_t) EInitAttrType::Limit);
}

//?????????????????????
bool NFItemMgr::CanTrade(uint64_t itemId, int8_t byInBind)
{
    /*
    ????????? ????????????
    ????????????  ?????????
    */
    return ((int8_t) EBindState::EBindState_no == byInBind);

}
//??????????????????
bool NFItemMgr::CanSell(uint64_t itemId, int8_t byInBind)
{
    /*
    ?????????????????????????????????????????????
    */
    return true;
}

//?????????????????????
bool NFItemMgr::IsTaskItem(uint64_t itemId)
{
    auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(itemId);
    if (nullptr != pItemCfg && proto_ff::EItemType_Task == pItemCfg->itemType)
    {
        return true;
    }
    return false;
}

//??????????????????CD
uint32_t NFItemMgr::GetPickupDropCd()
{
    return m_nPickupMillsec;
}

//?????????????????????????????????
uint32_t NFItemMgr::GetPickupNumAtOnce()
{
    return m_nPickupNumLimit;
}

//???????????????????????????
bool NFItemMgr::IsNormalPos(uint8_t pos)
{
    return (m_setNormalPos.Find(pos) != NULL) ? true : false;
}
//??????????????????????????????
bool NFItemMgr::IsJewelryPos(uint8_t pos)
{
    return (m_setJewelryPos.Find(pos) != NULL) ? true : false;
}
//??????????????? ????????????
bool NFItemMgr::IsFairyPos(uint8_t pos)
{
    return (m_setFairyPos.Find(pos) != NULL) ? true : false;
}

//????????????
bool NFItemMgr::CreateItem(const LIST_ITEM &lstItem, VEC_PACKAGE_ITEM &vecItems, SItemCond &itemCond, bool bMerge /*= true*/)
{
    if (!ValidInitAttrType((int8_t) itemCond.inittype))
    {
        return false;
    }

    if (lstItem.size() <= 0)
    {
        return true;
    }

    LIST_ITEM lstOutItem;
    lstOutItem.clear();
    if (bMerge)
    {
        MergeItem(lstItem, lstOutItem);
    }
    else
    {
        lstOutItem = lstItem;
    }

    for (auto iter = lstOutItem.begin(); iter != lstOutItem.end(); ++iter)
    {
        SItem &item = (*iter);
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(item.nItemID);
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(item.nItemID);
            if (nullptr == pEquipCfg)
            {
                continue;
            }
        }

        NFGridItem itemObj;
        itemObj.Init(0, item.nItemID, itemCond, item.nNum, item.byBind);
        vecItems.push_back(itemObj);
    }

    return true;
}
//
bool NFItemMgr::CreateItem(const LIST_ITEM &lstItem, VEC_ITEM_PROTO_EX &vecProtoEx, SItemCond &itemCond, bool bMerge /*= true*/)
{
    VEC_PACKAGE_ITEM vecItems;
    vecItems.clear();
    if (!CreateItem(lstItem, vecItems, itemCond, bMerge))
    {
        return false;
    }

    VEC_PACKAGE_ITEM::iterator iter = vecItems.begin();
    while (iter != vecItems.end())
    {
        proto_ff::ItemProtoInfo proto;
        if (SetItemProtoInfo(&(*iter), &proto))
        {
            vecProtoEx.push_back(proto);
        }
        iter = vecItems.erase(iter);
    }

    return true;
}
//????????????
bool NFItemMgr::CreateItem(const VEC_ITEM_PROTO &vecProtoItems, VEC_PACKAGE_ITEM &vecItems)
{
    VEC_ITEM_PROTO_EX vecProtoItemEx;
    vecProtoItemEx.clear();
    for (auto iter = vecProtoItems.begin(); iter != vecProtoItems.end(); ++iter)
    {
        proto_ff::ItemProtoInfo *proto = (*iter);
        vecProtoItemEx.push_back(*proto);
    }
    return CreateItem(vecProtoItemEx, vecItems);
}

//????????????
bool NFItemMgr::CheckItem(const VEC_ITEM_PROTO_EX &vecProtoItems)
{
    for (auto iter = vecProtoItems.begin(); iter != vecProtoItems.end(); ++iter)
    {
        const proto_ff::ItemProtoInfo &proto = (*iter);
        if (!proto.has_item_id() || !proto.has_item_num() || (proto.item_num() < 0))
        {
            return false;
        }
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(proto.item_id());
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(proto.item_id());
            if (nullptr == pEquipCfg)
            {
                return false;
            }
            if (proto.item_num() != 1)//????????????????????????1
            {
                return false;
            }
        }
    }
    return true;
}

//????????????
bool NFItemMgr::CreateItem(const VEC_ITEM_PROTO_EX &vecProtoItemsEx, VEC_PACKAGE_ITEM &vecItems)
{
    if (!CheckItem(vecProtoItemsEx))
    {
        return false;
    }
    for (auto iter = vecProtoItemsEx.begin(); iter != vecProtoItemsEx.end(); ++iter)
    {
        const proto_ff::ItemProtoInfo &protoItem = (*iter);
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(protoItem.item_id());
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(protoItem.item_id());
            if (nullptr == pEquipCfg)
            {
                continue;
            }
        }

        NFGridItem itemObj;
        itemObj.read_from_pbmsg(protoItem);
        vecItems.push_back(itemObj);
    }
    return true;
}

//??????????????????
bool NFItemMgr::SetItemProtoInfo(const LIST_ITEM &lstItem, VEC_ITEM_PROTO_EX &vecProto, SItemCond &itemCond)
{
    return CreateItem(lstItem, vecProto, itemCond);
}

bool NFItemMgr::SetItemProtoInfo(NFGridItem *pItem, proto_ff::ItemProtoInfo *protoItemInfo, int64_t nNum /*= -1*/)
{
    if (nullptr == pItem || nullptr == protoItemInfo)
    {
        return false;
    }

    pItem->write_to_pbmsg(*protoItemInfo);

    if (0 == nNum)
    {
        protoItemInfo->set_item_num(0);
    }
    else if (nNum > 0)
    {
        if ((uint32_t) nNum > pItem->base.item_num)
        {
            protoItemInfo->set_item_num(pItem->base.item_num);
        }
        else
        {
            protoItemInfo->set_item_num(nNum);
        }
    }
    else
    {
        //???????????????0?????????????????????????????????pItem?????????
        protoItemInfo->set_item_num(pItem->base.item_num);
    }

    return true;
}

//????????????
void NFItemMgr::MergeItem(const LIST_ITEM &lstItem, LIST_ITEM &lstOutItem)
{
    for (auto iter = lstItem.begin(); iter != lstItem.end(); ++iter)
    {
        auto &item = (*iter);
        if (item.nItemID == 0)
        {
            continue;
        }
        int64_t stackLimit = 1;
        auto *pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(item.nItemID);
        if (nullptr == pItemCfg)
        {
            auto *pEquipCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(item.nItemID);
            if (nullptr == pEquipCfg)
            {
                continue;
            }
            stackLimit = ItemMaxPile(pEquipCfg);
        }
        else
        {
            stackLimit = ItemMaxPile(pItemCfg);
        }

        int64_t nCount = item.nNum;
        LIST_ITEM::iterator iterout = lstOutItem.begin();
        for (; iterout != lstOutItem.end(); ++iterout)
        {
            SItem &itemout = (*iterout);
            if (itemout.nItemID == item.nItemID
                && itemout.byBind == item.byBind
                && itemout.nNum < stackLimit
                    )
            {
                int64_t nCanAdd = stackLimit - itemout.nNum;
                if (nCount <= nCanAdd)
                {
                    itemout.nNum += nCount;
                    nCount = 0;
                }
                else
                {
                    itemout.nNum += nCanAdd;
                    nCount -= nCanAdd;
                }
            }
        }
        //
        if (nCount > 0)
        {
            int64_t nCnt = nCount / stackLimit;
            int64_t nExt = nCount % stackLimit;
            int64_t nMaxPile = stackLimit;
            for (int64_t i = 0; i < nCnt; ++i)
            {
                SItem newitem;
                newitem.nItemID = item.nItemID;
                newitem.nNum = nMaxPile;
                newitem.byBind = item.byBind;
                lstOutItem.push_back(newitem);
            }
            if (nExt > 0)
            {
                SItem newitem;
                newitem.nItemID = item.nItemID;
                newitem.nNum = nExt;
                newitem.byBind = item.byBind;
                lstOutItem.push_back(newitem);
            }
            nCount = 0;
        }
    }
}

//????????????
bool NFItemMgr::CompareStarFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    //???????????????????????????
    //???????????????
    //???id
    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }

    auto pItemCfgA = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
    auto pItemCfgB = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
    if (nullptr == pItemCfgA || nullptr == pItemCfgB)
    {
        return false;
    }
    if (pItemCfgA->quality == pItemCfgB->quality)
    {
        if (pItemA->GetLevel() == pItemB->GetLevel())
        {
            return pItemCfgA->id > pItemCfgB->id;
        }
        return pItemA->GetLevel() > pItemB->GetLevel();
    }

    return pItemCfgA->quality > pItemCfgB->quality;
}


bool NFItemMgr::CompareGodhoodFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    //???????????????????????????
    //???????????????
    //???id
    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }

    auto pItemCfgA = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
    auto pItemCfgB = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
    if (nullptr == pItemCfgA || nullptr == pItemCfgB)
    {
        return false;
    }
    if (pItemCfgA->quality == pItemCfgB->quality)
    {
        if (pItemA->GetLevel() == pItemB->GetLevel())
        {
            return pItemCfgA->id > pItemCfgB->id;
        }
        return pItemA->GetLevel() > pItemB->GetLevel();
    }

    return pItemCfgA->quality > pItemCfgB->quality;
}

bool NFItemMgr::CompareSundryFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    //???????????????????????????
    //????????????????????????ID??????
    //??????ID????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    //????????????????????????ID??????

    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }

    auto pItemCfgA = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
    auto pItemCfgB = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
    if (nullptr == pItemCfgA || nullptr == pItemCfgB)
    {
        return false;
    }
    if (pItemCfgA->quality == pItemCfgB->quality)
    {
        if (pItemCfgA->id == pItemCfgB->id)
        {
            return pItemA->GetBind() > pItemB->GetBind();
        }
        return pItemCfgA->id > pItemCfgB->id;
    }

    return pItemCfgA->quality > pItemCfgB->quality;
}

bool NFItemMgr::CompareMaterialFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    /*
    ?????????????????????
    ????????????????????????ID??????
    ??????????????????ID??????
    ??????ID????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????

    */
    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }

    auto pItemCfgA = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
    auto pItemCfgB = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
    if (nullptr == pItemCfgA || nullptr == pItemCfgB)
    {
        return false;
    }
    if (pItemCfgA->quality == pItemCfgB->quality)
    {
        if (pItemCfgA->functionType == pItemCfgB->functionType)
        {
            if (pItemCfgA->id == pItemCfgB->id)
            {
                return pItemA->GetBind() < pItemB->GetBind();
            }
            return pItemCfgA->id > pItemCfgB->id;
        }

        return pItemCfgA->functionType < pItemCfgB->functionType;
    }

    return pItemCfgA->quality > pItemCfgB->quality;

}

bool NFItemMgr::CompareTaskFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    //?????????ID??????
    //??????ID????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????
    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }
    if (pItemA->GetItemID() == pItemB->GetItemID())
    {
        return pItemA->GetBind() > pItemB->GetBind();
    }

    return pItemA->GetItemID() > pItemB->GetItemID();
}

bool NFItemMgr::CompareEquipFunc_(const NFGridItem *pItemA, const NFGridItem *pItemB)
{
    //??????
    //??????????????????
    //??????????????????????????????
    //???????????????????????????
    //??????????????????ID??????
    //??????ID????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????

    /*
    ??????>????????????????????????>??????
    ?????????????????????
    ??????????????????????????????
    ?????????????????????????????????
    ??????????????????ID??????
    ??????ID????????????????????????????????????????????????????????????????????????????????????????????????????????????????????????

    */

    if (nullptr == pItemA || nullptr == pItemB)
    {
        return false;
    }
    //??????????????????????????????????????????????????? pItemA ???pItemB ?????????????????????????????????
    int8_t itypeA = 0; // 0 ???????????????1 ?????????????????????2 ????????????
    int32_t qualityA = 0;
    int32_t positionA = 0;
    uint32_t itemIdA = pItemA->GetItemID();

    int8_t itypeB = 0;
    int32_t qualityB = 0;
    int32_t positionB = 0;
    uint32_t itemIdB = pItemB->GetItemID();
    //
    if (proto_ff::EItemType_Equip == pItemA->GetType())
    {
        auto pItemCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
        if (nullptr == pItemCfg)
        {
            return false;
        }
// 		if (2 == pItemCfg->gold) //1?????????????????????2?????????
// 		{
// 			itypeA = 2;
// 		}
        positionA = pItemCfg->position;
        qualityA = pItemCfg->wearQuality;
    }
    else
    {
        auto pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemA->GetItemID());
        if (nullptr == pItemCfg)
        {
            return false;
        }
        if (pItemCfg->functionType != (int32_t) EItemFuncType::EItemFuncType_Fashion)
        {
            return false;
        }
        itypeA = 1;
    }

    if (proto_ff::EItemType_Equip == pItemB->GetType())
    {
        auto pItemCfg = EquipEquipDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
        if (nullptr == pItemCfg)
        {
            return false;
        }
// 		if (2 == pItemCfg->gold) //1?????????????????????2?????????
// 		{
// 			itypeB = 2;
// 		}
        positionB = pItemCfg->position;
        qualityB = pItemCfg->wearQuality;
    }
    else
    {
        auto pItemCfg = ItemItemDesc::Instance(m_pObjPluginManager)->GetDesc(pItemB->GetItemID());
        if (nullptr == pItemCfg)
        {
            return false;
        }
        if (pItemCfg->functionType != (int32_t) EItemFuncType::EItemFuncType_Fashion)
        {
            return false;
        }
        itypeB = 1;
    }

    if (itypeA == itypeB)
    {
        if (qualityA == qualityB)
        {
            if (positionA == positionB)
            {
                /* ????????????
                if (pItemA->GetScore() == pItemB->GetScore())
                {
                    //pItemA->GetItemID() > pItemB->GetItemID();
                    return itemIdA > itemIdB;
                }
                return pItemA->GetScore() > pItemB->GetScore();
                */
                return itemIdA > itemIdB;
            }
                //return positionA > positionB;
            else
            {
                if (positionA >= 9 && positionA <= 12 && positionB >= 9 && positionB <= 12)
                {
                    return positionA < positionB;
                }
                else if (positionA >= 1 && positionA <= 8 && positionB >= 1 && positionB <= 8)
                {
                    return positionA > positionB;
                }
                else if (positionA >= 9 && positionA <= 12 && positionB >= 1 && positionB <= 8)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
        return qualityA > qualityB;
    }
    return itypeA > itypeB;
}

bool NFItemMgr::CompareSundryFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareSundryFunc_(&itemA, &itemB);
}

bool NFItemMgr::CompareMaterialFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareMaterialFunc_(&itemA, &itemB);
}

bool NFItemMgr::CompareTaskFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareTaskFunc_(&itemA, &itemB);
}

bool NFItemMgr::CompareEquipFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareEquipFunc_(&itemA, &itemB);
}

bool NFItemMgr::CompareStarFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareStarFunc_(&itemA, &itemB);
}

bool NFItemMgr::CompareGodhoodFunc(const NFGridItem &itemA, const NFGridItem &itemB)
{
    return CompareGodhoodFunc_(&itemA, &itemB);
}
