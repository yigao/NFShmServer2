// -------------------------------------------------------------------------
//    @FileName         :    NFCMysqlDriver.h
//    @Author           :    eliteYang
//    @Date             :   2022-09-18
//    @Module           :    NFCMysqlDriver
//    @Desc             :
// -------------------------------------------------------------------------

#pragma once

//#define MS_HIREDIS
#ifdef _MSC_VER
#include <windows.h>
#include <winsock2.h>
#include <WS2tcpip.h>
#include <stdint.h>
#pragma comment(lib, "ws2_32.lib")

#else

#include <sys/file.h>
#include <sys/ioctl.h>
#include <sys/param.h>
#include <sys/stat.h>
#include <sys/time.h>
//#include <sys/timeb.h>
#include <sys/types.h>

#include <assert.h>
#include <ctype.h>
#include <dirent.h>
#include <dlfcn.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#endif

#include <string>
#include <vector>
#include <set>
#include "mysqlpp/mysql++.h"
#include "NFComm/NFKernelMessage/storesvr_sqldata.pb.h"
#include "NFComm/NFCore/NFQueue.hpp"
#include "NFComm/NFCore/NFMutex.h"
#include "NFComm/NFCore/NFLock.h"
#include <string>
#include "mysqlpp/connection.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"

#define  NFMYSQLTRYBEGIN try {

#define  NFMYSQLTRYEND(msg) }\
    catch (mysqlpp::BadQuery er) \
    { \
        errormsg = er.what();\
        NFLogError(NF_LOG_SYSTEMLOG, 0, "BadQuery [{}] Error:{}", msg, er.what());\
        return -1; \
    } \
    catch (const mysqlpp::BadConversion& er)  \
    { \
        errormsg = er.what();\
        NFLogError(NF_LOG_SYSTEMLOG, 0, "BadConversion [{}] Error:{} retrieved data size:{}, actual size:{}", msg, er.what(), er.retrieved, er.actual_size);\
        return -1; \
    } \
    catch (const mysqlpp::Exception& er) \
    { \
        errormsg = er.what();\
        NFLogError(NF_LOG_SYSTEMLOG, 0, "mysqlpp::Exception [{}] Error:{}", msg, er.what());\
        return -1; \
    }\
    catch ( ... ) \
    { \
        errormsg = "UnKnown Error";\
        NFLogError(NF_LOG_SYSTEMLOG, 0, "std::exception [{}] Error:Error:Unknown", msg);\
        return -1; \
    }

//////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

/**
* @brief mysql????????? ???????????????myql??????
** ???????????????protobuf????????????????????????????????????????????????
*****************************???????????????db??????*******************************/

class NFCMysqlDriver {
public:
    /**
     * @brief ????????????
     *
     * @param  nReconnectTime ????????????
     * @param  nReconnectCount ???????????????-1???????????????
     * @return
     */
    NFCMysqlDriver(int nReconnectTime = 3, int nReconnectCount = -1);

    /**
     * @brief ????????????
     *
     * @param  strDBName ???????????????
     * @param  strDBHost ?????????IP
     * @param  nDBPort   ???????????????
     * @param  strDBUser ???????????????
     * @param  strDBPwd  ???????????????
     * @return
     */
    NFCMysqlDriver(const std::string &strDBName, const std::string &strDBHost, int nDBPort,
                   const std::string &strDBUser, const std::string &strDBPwd);

    /**
     * @brief ????????????
     */
    virtual ~NFCMysqlDriver();


    /**
     * @brief ???????????????
     *
     * @param  strDBName ???????????????
     * @param  strDBHost ?????????IP
     * @param  nDBPort   ???????????????
     * @param  strDBUser ??????????????????
     * @param  strDBPwd  ???????????????
     * @return bool
     */
    int Connect(const std::string &strDBName, const std::string &strDBHost, int nDBPort, const std::string &strDBUser,
                const std::string &strDBPwd);

    /**
     * @brief ????????????
     *
     * @return bool
     */
    int CheckConnect();

    /**
     * @brief ??????sql??????????????????
     *
     * @param  qstr sql??????
     * @param  queryResult ????????????
     * @return bool ?????????????????????
     */
    int Query(const std::string &qstr, mysqlpp::StoreQueryResult &queryResult, std::string &errormsg);

    /**
     * @brief ??????sql??????
     *
     * @param  qstr sql??????
     * @param  valueVec ????????????
     * @return int =0????????????, != 0??????
     */
    int ExecuteOne(const std::string &qstr, std::map<std::string, std::string> &valueVec, std::string &errormsg);

    /**
     * @brief ??????sql??????
     *
     * @param  qstr sql??????
     * @param  valueVec ????????????
     * @return int =0????????????, != 0??????
     */
    int ExecuteMore(const std::string &qstr, std::vector<std::map<std::string, std::string>> &valueVec,
                    std::string &errormsg);

    /**
     * @brief ??????sql??????
     *
     * @param  qstr sql??????
     * @param  valueVec ????????????
     * @return int =0????????????, != 0??????
     */
    int Execute(const storesvr_sqldata::storesvr_execute &select, storesvr_sqldata::storesvr_execute_res &select_res);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int SelectByCond(const storesvr_sqldata::storesvr_sel &select, storesvr_sqldata::storesvr_sel_res &select_res);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int SelectByCond(const storesvr_sqldata::storesvr_sel &select, ::google::protobuf::RepeatedPtrField<storesvr_sqldata::storesvr_sel_res> &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_sel &select, std::string &select_res);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  message ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int SelectObj(const std::string& tbName, google::protobuf::Message *pMessage, std::string& errMsg);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  message ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int SelectObj(const storesvr_sqldata::storesvr_selobj &select, storesvr_sqldata::storesvr_selobj_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_selobj &select, std::map<std::string, std::string> &keyMap);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int DeleteByCond(const storesvr_sqldata::storesvr_del &select, storesvr_sqldata::storesvr_del_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_del &select, std::string &select_res);
    int CreateSql(const storesvr_sqldata::storesvr_mod &select, std::string &select_res);
    int CreateSql(const storesvr_sqldata::storesvr_modins &select, std::string &select_res);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int DeleteObj(const storesvr_sqldata::storesvr_delobj &select, storesvr_sqldata::storesvr_delobj_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_delobj &select,std::map<std::string, std::string>& keyMap);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  message ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int InsertObj(const std::string& tbName, const google::protobuf::Message *pMessage, std::string& errMsg);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int InsertObj(const storesvr_sqldata::storesvr_ins &select, storesvr_sqldata::storesvr_ins_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_ins &select, std::map<std::string, std::string> &resultMap);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  message ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int ModifyObj(const std::string& tbName, const google::protobuf::Message *pMessage, std::string& errMsg);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int ModifyByCond(const storesvr_sqldata::storesvr_mod &select, storesvr_sqldata::storesvr_mod_res &select_res);
    int ModifyObj(const storesvr_sqldata::storesvr_modobj &select, storesvr_sqldata::storesvr_modobj_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_mod &select, std::map<std::string, std::string> &keyMap, std::map<std::string, std::string> &kevValueMap);
    int CreateSql(const storesvr_sqldata::storesvr_modins &select, std::map<std::string, std::string> &keyMap, std::map<std::string, std::string> &kevValueMap);
    int CreateSql(const storesvr_sqldata::storesvr_modobj &select, std::map<std::string, std::string> &keyMap,
                  std::map<std::string, std::string> &kevValueMap);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  message ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int UpdateObj(const std::string& tbName, const google::protobuf::Message *pMessage, std::string& errMsg);

    /**
     * @brief ??????select???????????? ?????????????????????????????????????????????selelct_res
     *
     * @param  select ????????????
     * @param  select_res ????????????
     * @return int =0????????????, != 0??????
     */
    int UpdateByCond(const storesvr_sqldata::storesvr_modins &select, storesvr_sqldata::storesvr_modins_res &select_res);
    int UpdateObj(const storesvr_sqldata::storesvr_modinsobj &select, storesvr_sqldata::storesvr_modinsobj_res &select_res);

    /**
     * @brief ??????select??????????????????sql??????
     *
     * @param  select ????????????
     * @param  selectSql ??????sql??????
     * @return int =0????????????, != 0??????
     */
    int CreateSql(const storesvr_sqldata::storesvr_modinsobj &select, std::map<std::string, std::string> &keyMap,
                  std::map<std::string, std::string> &kevValueMap);

    /**
     * @brief ??????sql??????, ??????????????????????????????????????????
     *
     * @param  table ???????????????
     * @param  sheet_fullname protobuf????????????????????????message
     * @param  pMessage sheet_fullname???protobuf????????????????????????????????????
     *  ?????? message Sheet_GameRoomDesc
     *		{
     *			repeated GameRoomDesc GameRoomDesc_List = 1  [(yd_fieldoptions.field_arysize)=100];
     *		}
     * ????????????Excel??????GameRoomDesc, ???????????????????????????GameRoomDesc
     * ??????????????????????????????????????????????????????
     *
     *
     * @return bool ?????????????????????
     */
    int QueryDescStore(const std::string &table, google::protobuf::Message **pMessage);


    /**
     * @brief ??????sql??????, ??????????????????????????????????????????
     *
     * @param  table ???????????????
     * @param  sheet_fullname protobuf????????????????????????message
     * @param  pMessage sheet_fullname???protobuf????????????????????????????????????
     *  ?????? message Sheet_GameRoomDesc
     *		{
     *			repeated GameRoomDesc GameRoomDesc_List = 1  [(yd_fieldoptions.field_arysize)=100];
     *		}
     * ????????????Excel??????GameRoomDesc, ???????????????????????????GameRoomDesc
     * ??????????????????????????????????????????????????????
     *
     *
     * @return bool ?????????????????????
     */
    int QueryDescStore(const std::string &table, google::protobuf::Message *pMessage);

    /**
     * @brief ???result???????????????????????????????????????message???
     *
     * @param  result???????????????????????????
     * table  ????????????message???protobuf????????????
     * @param  pMessage ????????????mesage
     * @return int =0????????????, != 0??????
     */
    int TransTableRowToMessage(const std::map<std::string, std::string> &result, const std::string &table,
                               google::protobuf::Message **pMessage);

    /**
     * @brief ??????mysqlpp?????????
     *
     * @return mysqlpp::Connection*
     */
    mysqlpp::Connection *GetConnection();

    /**
     * @brief ????????????
     *
     * @return void
     */
    virtual void CloseConnection();

    /**
     * @brief ??????????????????
     *
     * @return bool
     */
    bool Enable();

    /**
     * @brief ??????????????????
     *
     * @return bool
     */
    bool CanReconnect();

    /**
     * @brief ??????
     *
     * @return bool
     */
    int Reconnect();

    /**
     * @brief mysql?????????????????????
     *
     * @param  strTableName		??????
     * @param  strKeyColName	key??????????????????
     * @param  strKey			key??????
     * @param  keyvalueMap		??????
     * @return bool				???????????????
     */
    int Update(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
               const std::map<std::string, std::string> &keyvalueMap, std::string &errormsg);


    /**
     * @brief mysql?????????????????????
     *
     * @param  strTableName		??????
     * @param  strKeyColName	key??????????????????
     * @param  strKey			key??????
     * @param  keyvalueMap		??????
     * @return bool				???????????????
     */
    int Modify(const std::string &strTableName, const std::string& where,
               const std::map<std::string, std::string> &keyvalueMap, std::string &errormsg);
    int Modify(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
               const std::map<std::string, std::string> &keyvalueMap, std::string &errormsg);

    /**
     * @brief mysql?????????????????????
     *
     * @param  strTableName		??????
     * @param  keyvalueMap		??????
     * @return bool				???????????????
     */
    int Insert(const std::string &strTableName, const std::map<std::string, std::string> &keyvalueMap,
               std::string &errormsg);

    /**
     * @brief ????????????????????????
     *
     * @param  strTableName		??????
     * @param  strKeyColName	key??????????????????
     * @param  strKey			key??????
     * @param  fieldVec			???????????????????????????
     * @param  valueVec			??????????????????
     * @return bool				???????????????
     */
    int QueryOne(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
                 const std::vector<std::string> &fieldVec, std::map<std::string, std::string> &valueVec,
                 std::string &errormsg);


    /**
     * @brief ????????????????????????
     *
     * @param  strTableName		??????
     * @param  strKeyColName	key??????????????????
     * @param  strKey			key??????
     * @param  fieldVec			???????????????????????????
     * @param  valueVec			??????????????????
     * @return bool				???????????????
     */
    int QueryOne(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
                 std::map<std::string, std::string> &valueVec,
                 std::string &errormsg);

    /**
     * @brief ????????????????????????
     *
     * @param  strTableName		??????
     * @param  strKeyColName	key??????????????????
     * @param  strKey			key??????
     * @param  fieldVec			???????????????????????????
     * @param  valueVec			??????????????????
     * @return bool				???????????????
     */
    int QueryMore(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
                  const std::vector<std::string> &fieldVec,
                  std::vector<std::map<std::string, std::string>> &valueVec, std::string &errormsg);

    /**
     * @brief ???????????????
     *
     * @param  strTableName
     * @param  strKeyColName
     * @param  strKey
     * @return bool
     */
    int Delete(const std::string &strTableName, const std::string &strKeyColName, const std::string &strKey, std::string &errormsg);
    int Delete(const std::string &strTableName, const std::map<std::string, std::string> &keyMap, std::string &errormsg);
    int Delete(const std::string &sql, std::string &errormsg);

    /**
     * @brief ????????????????????????
     *
     * @param  strTableName
     * @param  strKeyColName
     * @param  strKey
     * @param  bExit
     * @return bool
     */
    int Exists(const std::string &strTableName, const std::string &strKeyColName, const std::string &strKey,
               bool &bExit);

    /**
     * @brief ????????????????????????
     *
     * @param  strTableName
     * @param  strKeyColName
     * @param  strKey
     * @param  bExit
     * @return bool
     */
    int Exists(const std::string &strTableName, const std::map<std::string, std::string> &keyMap,
               bool &bExit);

protected:
    /**
     * @brief ??????????????????
     *
     * @return bool
     */
    bool IsNeedReconnect();

    /**
     * @brief ??????
     *
     * @return bool
     */
    int Connect();

private:
    std::string mstrDBName;
    std::string mstrDBHost;
    int mnDBPort;
    std::string mstrDBUser;
    std::string mstrDBPwd;

    mysqlpp::Connection *m_pMysqlConnect; // mysql????????????
    float mfCheckReconnect; //?????????????????????

    int mnReconnectTime;
    int mnReconnectCount;

    static NFMutex ConnectLock; //m_pMysqlConnect?????????Connect??????????????????????????????????????????
};
