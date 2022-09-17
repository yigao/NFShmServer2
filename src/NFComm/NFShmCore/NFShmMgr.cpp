// -------------------------------------------------------------------------
//    @FileName         :    NFShmMgr.cpp
//    @Author           :    xxxxx
//    @Date             :   xxxx-xx-xx
//    @Email			:    xxxxxxxxx@xxx.xxx
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------

#include "NFShmMgr.h"
#include "NFISharedMemModule.h"


NFShmMgr::NFShmMgr()
{
    m_objMode = EN_OBJ_MODE_RECOVER;
    m_siAddrOffset = 0;
}

NFShmMgr::~NFShmMgr()
{
}

/**
* 共享内存创建对象模式
*/
EN_OBJ_MODE	NFShmMgr::GetCreateMode()
{
    return m_objMode;
}

/**
* 共享内存创建对象模式
*/
void NFShmMgr::SetCreateMode(EN_OBJ_MODE mode)
{
    m_objMode = mode;
}

size_t NFShmMgr::GetAddrOffset()
{
    return m_siAddrOffset;
}

void NFShmMgr::SetAddrOffset(size_t offset)
{
    m_siAddrOffset = offset;
}
