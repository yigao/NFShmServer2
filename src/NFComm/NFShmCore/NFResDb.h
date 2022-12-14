// -------------------------------------------------------------------------
//    @FileName         :    NFResDb.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFResDb.h
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFCore/NFPlatform.h"
#include "google/protobuf/message.h"
#include "NFComm/NFShmCore/NFArray.h"
#include "NFComm/NFShmCore/NFShmHashMap.h"
#include "NFComm/NFPluginModule/NFObject.h"

#define NF_MAX_DESC_STORE_INDEX_SIZE 10000

//proto_ff_s::RoleInitInfoDesc_s, RoleInitInfoDesc, MAX_ROLE_INIT_INFO_RECORD_NUM
#define IMPL_RES_ARRAY_DESC(DESCCLASSNAME, DESCSTORENAME, DESCNUM) \
    private:\
    NFArray<DESCCLASSNAME, DESCNUM> m_astDesc;                     \
    NFArray<int, NF_MAX_DESC_STORE_INDEX_SIZE> m_astDescIndex;\
    public:\
    int GetResNum() const override { return m_astDesc.GetSize();}\
    NFArray<DESCCLASSNAME, DESCNUM>& GetResDesc() { return m_astDesc; }\
    int Initialize() override\
    {\
        m_astDesc.CreateInit();\
        m_astDesc.CreateInit();\
        return 0;\
    }\
    int Reload(NFResDB *pDB) override\
    {\
        PrepareReload();\
        int iRetCode = Load( pDB );\
        return iRetCode;\
    }\
    virtual std::string GetFileName() override\
    {\
        return std::string(#DESCSTORENAME);\
    }\
    int Load(NFResDB* pDB) override;\
    int CheckWhenAllDataLoaded() override;\
    int CalcUseRatio() override\
    {\
        return m_astDesc.GetSize() * 100 / m_astDesc.GetMaxSize();\
    }\
    int SaveDescStore() override\
    {\
        if (!IsLoaded()) return 0;\
        for(int i = 0; i < (int)m_astDesc.GetSize(); i++)\
        {\
            if (m_astDesc[i].IsUrgentNeedSave())\
            {\
                auto pb = DESCCLASSNAME::make_pbmsg();\
                m_astDesc[i].write_to_pbmsg(pb);\
                SaveDescStoreToDB(&pb);\
                m_astDesc[i].ClearUrgent();\
            }\
        }\
        return 0;\
    }\
    int InsertDescStore(const DESCCLASSNAME& desc)\
    {\
        auto pb = DESCCLASSNAME::make_pbmsg();\
        desc.write_to_pbmsg(pb);\
        InsertDescStoreToDB(&pb);\
        return 0;\
    }                                                        \
    int DeleteDescStore(const DESCCLASSNAME& desc)\
    {\
        auto pb = DESCCLASSNAME::make_pbmsg();\
        desc.write_to_pbmsg(pb);\
        DeleteDescStoreToDB(&pb);\
        return 0;\
    }\




#define IMPL_RES_HASH_DESC(DESCCLASSNAME, DESCSTORENAME, DESCNUM) \
    private:\
    NFArray<DESCCLASSNAME, DESCNUM> m_astDesc;\
    NFShmHashMap<uint64_t, int, DESCNUM> m_astDescMap;\
    NFArray<int, NF_MAX_DESC_STORE_INDEX_SIZE> m_astDescIndex;\
    public:\
    virtual int GetResNum() const override { return m_astDesc.GetSize();}\
    NFArray<DESCCLASSNAME, DESCNUM>& GetResDesc() { return m_astDesc; }\
    const NFArray<DESCCLASSNAME, DESCNUM>& GetResDesc() const { return m_astDesc; } \
    NFArray<DESCCLASSNAME, DESCNUM>* GetResDescPtr() { return &m_astDesc; }\
    const NFArray<DESCCLASSNAME, DESCNUM>* GetResDescPtr() const { return &m_astDesc; }\
    virtual int Initialize() override\
    {\
        m_astDesc.CreateInit();\
        m_astDescMap.CreateInit();\
        m_astDescIndex.CreateInit();\
        return 0;\
    }\
    virtual int Reload(NFResDB *pDB) override\
    {\
        PrepareReload();\
        int iRetCode = Load( pDB );\
        return iRetCode;\
    }\
    virtual std::string GetFileName() override\
    {\
        return std::string(#DESCSTORENAME);\
    }\
    virtual int Load(NFResDB* pDB) override;\
    virtual int CheckWhenAllDataLoaded() override;\
    virtual int CalcUseRatio() override\
    {\
        return m_astDesc.GetSize() * 100 / m_astDesc.GetMaxSize();\
    }\
    virtual int SaveDescStore() override\
    {\
        if (!IsLoaded()) return 0;\
        for(int i = 0; i < (int)m_astDesc.GetSize(); i++)\
        {\
            if (m_astDesc[i].IsUrgentNeedSave())\
            {\
                auto pb = DESCCLASSNAME::make_pbmsg();\
                m_astDesc[i].write_to_pbmsg(pb);\
                SaveDescStoreToDB(&pb);\
                m_astDesc[i].ClearUrgent();\
            }\
        }\
        return 0;\
    }\
    int InsertDescStore(const DESCCLASSNAME& desc)\
    {\
        auto pb = DESCCLASSNAME::make_pbmsg();\
        desc.write_to_pbmsg(pb);\
        InsertDescStoreToDB(&pb);\
        return 0;\
    }                                                        \
    int DeleteDescStore(const DESCCLASSNAME& desc)\
    {\
        auto pb = DESCCLASSNAME::make_pbmsg();\
        desc.write_to_pbmsg(pb);\
        DeleteDescStoreToDB(&pb);\
        return 0;\
    }\


#define IMPL_RES_SIMPLE_DESC(DESCSTORENAME) \
    private:\
	int GetResNum() const {return 0;}\
    int Initialize()\
    {\
        return 0;\
    }\
    int Reload(NFResDB *pDB)\
    {\
        PrepareReload();\
        Initialize();\
        int iRetCode = Load( pDB );\
        return iRetCode;\
    }\
    virtual std::string GetFileName() override\
    {\
        return std::string(#DESCSTORENAME);\
    }\
    int Load(NFResDB* pDB);\
    int CheckWhenAllDataLoaded();\
    int CalcUseRatio()\
    {\
        return 0;\
    }                                       \
    int SaveDescStore()\
    {\
        return 0;\
    }\

#define MAX_MD5_STR_LEN  33
#define MAX_DESC_FILE_PATH_STR_LEN  512
const int MAX_DESC_NAME_LEN = 64;

enum
{
	DESC_CHECK_FATAL = -1000,
};

class NFResTable : public NFObject
{
public:
    NFResTable(NFIPluginManager* p):NFObject(p) {}
    virtual ~NFResTable() {}

	virtual int FindAllRecord(const std::string &serverId, google::protobuf::Message *pMessage) = 0;
    virtual int FindOneRecord(const std::string &serverId, google::protobuf::Message *pMessage) = 0;
    virtual int SaveOneRecord(const std::string &serverId, const google::protobuf::Message *pMessage) = 0;
    virtual int InsertOneRecord(const std::string &serverId, const google::protobuf::Message *pMessage) = 0;
    virtual int DeleteOneRecord(const std::string &serverId, const google::protobuf::Message *pMessage) = 0;
};

class NFResDB : public NFObject
{
public:
    NFResDB(NFIPluginManager* p):NFObject(p) {}
	virtual ~NFResDB() {}

	/**????????????????????????????????????
	*@param[in] pname ????????????????????? ????????????????????????????????????????????????????????? ??????????????????table????????????
	*@retval ==NULL ?????????????????????
	*@retval !=NULL ??????????????????
	*/
	virtual NFResTable *GetTable(const std::string& name) = 0;
};

