// -------------------------------------------------------------------------
//    @FileName         :    NFObjSeg.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------
#pragma once

#include "NFComm/NFCore/NFPlatform.h"
#include "NFComm/NFShmCore/NFShmHashObjectMgr.h"
#include "NFComm/NFPluginModule/NFObject.h"

class NFShmObj;
class NFShmIdx;

class NFShmObjSeg : public NFObject
{
	friend class NFCSharedMemModule;
public:
    static void *operator new(size_t nSize, void *pBuffer) throw();
    static NFShmObjSeg* CreateObject(NFIPluginManager* pPluginManager);
	static void  operator delete(void *pSeg);


	int		Initialize();
	int		FormatIdx();						//格式化索引区
	int		RecoverIdx();						//恢复索引区
	int		FormatObj();						//格式化对象区

	void* AllocMemForObject();
	void FreeMemForObject(void *pMem);
	NFShmObj* GetObj(int iIdx);

    int   HashAlloc(uint64_t key, int globalId);
	NFShmObj* HashFind(uint64_t key, int iType);
	int   HashErase(int hashId);
    NFHashObjectMgr<uint64_t, int>& GetHashMgr();

	//added by xxxx
	NFShmObj* GetObjFast(int iIdx);

	NFShmIdx* GetIdx(int iIdx);
	int	GetObjId(void *pstObj);
	NFShmObj* GetHeadObj();
	NFShmObj* GetNextObj(NFShmObj* pObj);

	bool IsEnd(int iIndex);

	int GetItemCount() { return m_iItemCount; }
	int GetUsedCount() { return m_iUsedCount; }
	int GetUsedHead() { return m_iUsedHead; }
	int GetFreeHead() { return m_iFreeHead; }
	int GetFreeCount() { return m_iItemCount - m_iUsedCount; }
	int GetObjSize() { return m_nObjSize; }
	int GetExternalDataSize() { return m_iExternalDataSize; }
	int GetExternalItemCount() { return m_iExternalItemCount; }
	char* GetExternalBuffer() { return m_iExternalBuffer; }


	int CreateObject();

	static int GetHashSize(int objCount);
protected:
	int CreateIdx();
	int DestroyIdx(int iIdx);

private:

	NFShmObjSeg(NFIPluginManager* p);
	~NFShmObjSeg();

	int SetAndInitObj(size_t nObjSize, int iItemCount, NFShmObj* (*pfCreateObj)(NFIPluginManager*, void *), bool iUseHash = false, int externalDataSize = 0, int externalItemCount = 0);

	short		m_nIsFormated;
	size_t		m_nObjSize;
	NFShmIdx*		m_pIdxs;
	NFShmObj*		m_pObjs;
    NFHashObjectMgr<uint64_t, int> m_hashMgr;
	int		m_iItemCount;
	int		m_iFreeHead;
	int		m_iUsedHead;
	int		m_iUsedCount;
	bool    m_iUseHash;
	char*   m_iHashBuffer;
	int     m_iExternalDataSize;
	int     m_iExternalItemCount;
	char*   m_iExternalBuffer;

	NFShmObj* (*m_pFn)(NFIPluginManager*,void *);
};


