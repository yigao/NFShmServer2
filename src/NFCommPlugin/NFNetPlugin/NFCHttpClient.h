// -------------------------------------------------------------------------
//    @FileName         :    NFCHttpClient.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFCHttpClient.h
//
// -------------------------------------------------------------------------

#pragma once

#include <evpp/event_loop_thread.h>
#include <evpp/httpc/request.h>
#include <unordered_map>
#include "NFComm/NFCore/NFConcurrentQueue.h"
#include "NFComm/NFPluginModule/NFIHttpHandle.h"
#include "evpp/httpc/request.h"
#include "NFComm/NFCore/NFTime.h"
#include "NFComm/NFPluginModule/NFObjectPool.hpp"

class NFCHttpClient;

class NFHttpClientMsg {
public:
    NFHttpClientMsg() {
        code = 0;
        reqid = 0;
    }

    void Clear()
    {
        body.clear();
        code = 0;
        reqid = 0;
    }

    NFHttpClientMsg(const NFHttpClientMsg& msg)
    {
        if (this != &msg)
        {
            body = msg.body;
            code = msg.code;
            reqid = msg.reqid;
        }
    }

    NFHttpClientMsg& operator=(const NFHttpClientMsg& msg)
    {
        if (this != &msg)
        {
            body = msg.body;
            code = msg.code;
            reqid = msg.reqid;
        }
        return *this;
    }

    std::string body;
    int code;
    int reqid;
};

class NFCHttpClientParam {
public:
    NFCHttpClientParam(int id, const HTTP_CLIENT_RESPONE &func, uint32_t timeout = 3) : m_id(id), m_resp(func) {
        m_timeout = NFTime::Now().UnixSec() + timeout*10;
    }

    ~NFCHttpClientParam() {

    }

    bool IsTimeOut() {
        return NFTime::Now().UnixSec() > m_timeout;
    }

public:
    int m_id = 0;
    HTTP_CLIENT_RESPONE m_resp;
    uint32_t m_timeout;
};

class NFCHttpClient {
public:
    NFCHttpClient();

    virtual ~NFCHttpClient();

    bool Execute();

    void ProcessMsgLogicThread();
public:
    void
    HandleHTTPGetResponse(const std::shared_ptr<evpp::httpc::Response> &response, evpp::httpc::GetRequest *request);

    void
    HandleHTTPPostResponse(const std::shared_ptr<evpp::httpc::Response> &response, evpp::httpc::PostRequest *request);

    virtual int HttpGet(const std::string &strUri,
                        const HTTP_CLIENT_RESPONE &respone,
                        const std::map<std::string, std::string> &xHeaders = std::map<std::string, std::string>(),
                        int timeout = 3);

    virtual int HttpPost(const std::string &strUri, const std::string &strPostData, const HTTP_CLIENT_RESPONE &respone,
                         const std::map<std::string, std::string> &xHeaders = std::map<std::string, std::string>(),
                         int timeout = 3);

private:
    std::unordered_map<int, NFCHttpClientParam *> m_httpClientMap;
    evpp::EventLoopThread m_threadLoop;
    NFConcurrentQueue<NFHttpClientMsg> mMsgQueue;
    NFObjectPool<NFCHttpClientParam>* m_pHttpClientParamPool;
    int m_staticReqId;
};
