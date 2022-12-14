// -------------------------------------------------------------------------
//    @FileName         :    NFDescStoreTrans.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFDescStoreTrans.cpp
//
// -------------------------------------------------------------------------

#include "NFDescStoreTrans.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFPluginModule/NFCheck.h"
#include "NFComm/NFKernelMessage/proto_kernel.pb.h"
#include "NFComm/NFPluginModule/NFIMessageModule.h"
#include "NFComm/NFKernelMessage/storesvr_sqldata.pb.h"
#include "NFComm/NFPluginModule/NFICoroutineModule.h"
#include "NFComm/NFShmCore/NFISharedMemModule.h"
#include "NFServerComm/NFServerCommon/NFIServerMessageModule.h"
#include "NFComm/NFCore/NFTime.h"
#include "NFComm/NFShmCore/NFShmMgr.h"

IMPLEMENT_IDCREATE_WITHTYPE(NFDescStoreTrans, EOT_RPC_TRANS_ID, NFTransBase)

NFDescStoreTrans::NFDescStoreTrans():NFTransBase() {
    if (NFShmMgr::Instance()->GetCreateMode() == EN_OBJ_MODE_INIT) {
        CreateInit();
    } else {
        ResumeInit();
    }
}

NFDescStoreTrans::~NFDescStoreTrans() {
    if (m_timeId != INVALID_ID)
    {
        DeleteTimer(m_timeId);
        m_timeId = INVALID_ID;
    }
}

int NFDescStoreTrans::CreateInit() {
    m_coId = INVALID_ID;
    m_descStoreCB = NULL;
    m_descStoreMessage = NULL;
    m_timeId = INVALID_ID;
    m_eType = NF_ST_NONE;
    return 0;
}

int NFDescStoreTrans::Init(int64_t coId, const google::protobuf::Message *pDescStoreMessage)
{
    m_coId = coId;
    m_descStoreMessage = pDescStoreMessage->New();
    m_timeId = SetTimer(30000, 0, 0, 0, 5, 0);
    return 0;
}

int NFDescStoreTrans::ResumeInit() {
    m_coId = INVALID_ID;
    m_descStoreCB = NULL;
    m_descStoreMessage = NULL;
    return 0;
}

std::string NFDescStoreTrans::GetDescStoreClsName()
{
    CHECK_EXPR(m_descStoreMessage, std::string(), "m_descStoreMessage == NULL");

    const google::protobuf::Descriptor *pSheetFieldDesc = m_descStoreMessage->GetDescriptor();
    CHECK_EXPR(pSheetFieldDesc, std::string(), "pSheetFieldDesc == NULL");
    const google::protobuf::Reflection *pSheetReflect = m_descStoreMessage->GetReflection();
    CHECK_EXPR(pSheetReflect, std::string(), "pSheetFieldDesc == NULL");

    for (int sheet_field_index = 0; sheet_field_index < pSheetFieldDesc->field_count(); sheet_field_index++) {
        const google::protobuf::FieldDescriptor *pSheetRepeatedFieldDesc = pSheetFieldDesc->field(sheet_field_index);
        if (pSheetRepeatedFieldDesc->is_repeated() &&
            pSheetRepeatedFieldDesc->cpp_type() == google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE) {
            return pSheetRepeatedFieldDesc->message_type()->name();
        }
    }
    return std::string();
}

int NFDescStoreTrans::HandleDescStoreData(const storesvr_sqldata::storesvr_sel_res* pSelRsp, uint32_t err_code)
{
    CHECK_EXPR(err_code == 0, proto_ff::ERR_CODE_SVR_SYSTEM_DATABASE_ERROR, "");
    CHECK_NULL(m_descStoreMessage);

    if (m_descStoreCB)
    {
        const google::protobuf::Descriptor *pSheetFieldDesc = m_descStoreMessage->GetDescriptor();
        CHECK_EXPR(pSheetFieldDesc, -1, "pSheetFieldDesc == NULL");
        const google::protobuf::Reflection *pSheetReflect = m_descStoreMessage->GetReflection();
        CHECK_EXPR(pSheetReflect, -1, "pSheetFieldDesc == NULL");

        for (int sheet_field_index = 0; sheet_field_index < pSheetFieldDesc->field_count(); sheet_field_index++) {
            /*  ?????? message Sheet_GameRoomDesc
            *		{
            *			repeated GameRoomDesc GameRoomDesc_List = 1  [(yd_fieldoptions.field_arysize)=100];
            *		}
            *		????????????GameRoomDesc_List??????
            */
            const google::protobuf::FieldDescriptor *pSheetRepeatedFieldDesc = pSheetFieldDesc->field(sheet_field_index);
            if (pSheetRepeatedFieldDesc->is_repeated() &&
                pSheetRepeatedFieldDesc->cpp_type() == google::protobuf::FieldDescriptor::CPPTYPE_MESSAGE) {
                //??????is_repeated ????????????
                for(int i = 0; i < (int)pSelRsp->sel_records_size(); i++)
                {
                    ::google::protobuf::Message *pSheetRepeatedMessageObject = pSheetReflect->AddMessage(
                            m_descStoreMessage, pSheetRepeatedFieldDesc);
                    pSheetRepeatedMessageObject->ParsePartialFromString(pSelRsp->sel_records(i));
                }
            }
        }

        if (pSelRsp->is_lastbatch())
        {
            m_descStoreCB(err_code, *m_descStoreMessage);
            SetFinished(0);
            return 0;
        }
        return 0;
    }
    return proto_ff::ERR_CODE_SVR_SYSTEM_ERROR;
}


int NFDescStoreTrans::HandleDBMsgRes(const google::protobuf::Message *pSSMsgRes, uint32_t cmd, uint32_t table_id, uint32_t seq, uint32_t err_code)
{
    int iRetCode = 0;
    switch(cmd)
    {
        case proto_ff::E_STORESVR_S2C_SELECT:
        {
            iRetCode = HandleDescStoreData((const storesvr_sqldata::storesvr_sel_res*)pSSMsgRes, err_code);
            break;
        }
        default:
        {
            break;
        }
    }
    return iRetCode;
}

bool NFDescStoreTrans::IsTimeOut()
{
    if (NFTime::Now().UnixSec() >= m_dwKeepAliveTime + 300) {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "This NFDescStoreTrans TimeOut Type:{} Info:{}", GetClassType(), DebugString());
        OnTimeOut();
        return true;
    }

    return false;
}

int NFDescStoreTrans::OnTimeOut()
{
    NFLogError(NF_LOG_SYSTEMLOG, 0, "NFDescStoreTrans timeout.......");
    return 0;
}

int NFDescStoreTrans::OnTimer(int timeId, int callcount)
{
    if (timeId == m_timeId && m_descStoreMessage)
    {
        std::vector<storesvr_sqldata::storesvr_vk> vk_list;

        FindModule<NFIServerMessageModule>()->SendTransToStoreServer(m_eType, 0,
                                                         proto_ff::E_STORESVR_C2S_SELECT, 0, m_dbName,
                                                         m_tableName, std::vector<std::string>(), vk_list, "", 100,
                                                         GetGlobalID(), 0, std::hash<std::string>()(m_tableName), GetDescStoreClsName());
    }
    return 0;
}

int NFDescStoreTrans::OnTransFinished(int iRunLogicRetCode)
{
    if (iRunLogicRetCode)
    {
        if (m_coId > 0)
        {
            FindModule<NFICoroutineModule>()->Resume(m_coId, iRunLogicRetCode);
        }
    }

    return 0;
}

int NFDescStoreTrans::SendGetDescStoreReq(NF_SERVER_TYPES eType, const std::string& dbName, const std::string &table_name, const QueryDescStore_CB& cb)
{
    m_descStoreCB = cb;
    m_eType = eType;
    m_tableName = table_name;
	m_dbName = dbName;

    std::vector<storesvr_sqldata::storesvr_vk> vk_list;

    FindModule<NFIServerMessageModule>()->SendTransToStoreServer(eType, 0,
                                                           proto_ff::E_STORESVR_C2S_SELECT, 0, m_dbName,
                                                           table_name, std::vector<std::string>(), vk_list, "", 100,
                                                           GetGlobalID(), 0, std::hash<std::string>()(table_name), GetDescStoreClsName());

    return 0;
}
