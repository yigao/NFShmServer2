// -------------------------------------------------------------------------
//    @FileName         :    NFShmMgr.h
//    @Author           :    xxxxx
//    @Date             :   xxxx-xx-xx
//    @Email			:    xxxxxxxxx@xxx.xxx
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#pragma once

#include "NFComm/NFCore/NFSingleton.hpp"
#include "NFComm/NFCore/NFPlatform.h"
#include "NFTypeDefines.h"
#include "NFShmDefine.h"
#include "NFTypeDefines.h"

class NFShmObj;
class NFISharedMemModule;
class NFTransBase;
class NFShmTimerObj;

class NFShmMgr : public NFSingleton<NFShmMgr>
{
public:
	NFShmMgr();
	virtual ~NFShmMgr();
public:
	/**
	* 共享内存创建对象模式
	*/
	virtual EN_OBJ_MODE	GetCreateMode();

	/**
	* 共享内存创建对象模式
	*/
	virtual void	SetCreateMode(EN_OBJ_MODE mode);

    /**
    * @brief  获得偏移地址
    */
    virtual size_t   GetAddrOffset();

    virtual void SetAddrOffset(size_t offset);
public:
    EN_OBJ_MODE m_objMode;
    /**
    * 相对于上次共享内存地址recover之后的偏移量,用来恢复指针对象
    */
    size_t  m_siAddrOffset;
};

