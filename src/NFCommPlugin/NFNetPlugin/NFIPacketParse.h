﻿// -------------------------------------------------------------------------
//    @FileName         :    NFIPacketParse.h
//    @Author           :    xxxxx
//    @Date             :   xxxx-xx-xx
//    @Email			:    xxxxxxxxx@xxx.xxx
//    @Module           :    NFNetPlugin
//
// -------------------------------------------------------------------------

#pragma once

#include <stdint.h>
#include <string>
#include "NFComm/NFCore/NFBuffer.h"
#include "NFNetDefine.h"
#include <vector>
#include "NFComm/NFPluginModule/NFServerDefine.h"

class NFIPacketParse
{
public:
	virtual ~NFIPacketParse()
	{
	}

	//////////////////////////////////////////////////////////////
	virtual int DeCodeImpl(const char* strData, uint32_t unLen, char*& outData, uint32_t& outLen, uint32_t& allLen, NFDataPackage& recvPackage) = 0;
	virtual int EnCodeImpl(uint32_t unMsgID,uint64_t nSendValue, uint64_t nSendId, const char* strData, uint32_t unDataLen, NFBuffer& buffer, uint64_t nSendBusLinkId = 0) = 0;
	/////////////////////////////////////////////////////////////
	static int DeCode(uint32_t packetType, const char* strData, uint32_t unLen, char*& outData, uint32_t& outLen, uint32_t& allLen, NFDataPackage& recvPackage);
	static int EnCode(uint32_t packetType, uint32_t unMsgID, uint64_t nSendValue, uint64_t nSendId, const char* strData, uint32_t unDataLen, NFBuffer& buffer, uint64_t nSendBusLinkId = 0);

    // 使用 lzf 算法 压缩、解压
    virtual int CompressImpl(const char* inBuffer, int inLen, void *outBuffer, unsigned int outSize) { return -1; }
    virtual int DecompressImpl(const char* inBuffer, int inLen, void *outBuffer, int outSize) { return -1; }

    // 使用 lzf 算法 压缩、解压
    static int Compress(int32_t packetType, const char* inBuffer, int inLen, void *outBuffer, unsigned int outSize);
    static int Decompress(int32_t packetType, const char* inBuffer, int inLen, void *outBuffer, int outSize);

	////////////////////////////////////////////////////////////
	static NFIPacketParse* CreatePacketParse(int parseType = 0);
	static void DeletePacketParse(NFIPacketParse* pPacketParse);
private:
	static std::vector<NFIPacketParse*> m_pPacketParse;
};
