// -------------------------------------------------------------------------
//    @FileName         :    NFCSharedMemModule.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFKernelPlugin
//
// -------------------------------------------------------------------------

#include "NFCSharedMemModule.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"

#include <cassert>
#include <errno.h>
#include "NFComm/NFCore/NFStringUtility.h"
#include "NFComm/NFCore/NFFileUtility.h"
#include "NFGlobalID.h"
#include "NFIDRuntimeClass.h"
#include "NFShmObjSeg.h"
#include "NFComm/NFShmCore/NFShmMgr.h"
#include "NFComm/NFShmCore/NFTypeDefines.h"
#include "NFShmIdx.h"
#include "NFShmTimerManager.h"
#include "NFTransMng.h"
#include "NFComm/NFCore/NFTime.h"
#include "NFServerComm/NFDescStorePlugin/NFIDescStoreModule.h"
#include "NFComm/NFCore/NFServerIDUtil.h"
#include "NFComm/NFPluginModule/NFIPlugin.h"
#include "NFShmEventMgr.h"

NFCSharedMemModule::NFCSharedMemModule(NFIPluginManager *p) : NFISharedMemModule(p)
{
    m_pObjPluginManager = p;
    m_pSharedMemMgr = NULL;
    m_enRunMode = EN_OBJ_MODE_RECOVER;
    m_enCreateMode = EN_OBJ_MODE_RECOVER;
    m_siShmSize = 0;
    m_nRunTimeFileID = p->GetAppID();

    m_iObjSegSizeTotal = 0;
    m_iTotalObjCount = 0;
    m_nObjSegSwapCounter.resize(EOT_MAX_TYPE);
    m_pGlobalID = NULL;
}

NFCSharedMemModule::~NFCSharedMemModule()
{
}

bool NFCSharedMemModule::AfterLoadAllPlugin()
{
    std::list<NFIPlugin *> listPlugin = m_pObjPluginManager->GetListPlugin();

    for (auto iter = listPlugin.begin(); iter != listPlugin.end(); ++iter)
    {
        NFIPlugin *pPlugin = *iter;
        if (pPlugin)
        {
            pPlugin->InitShmObjectRegister();
        }
    }

    /*
        分配共享内存
    */
    AllocShm();

    /*
        初始化共享内存里的对象
    */
    InitializeAllObj();

    /*
        创建一些全局性对象
    */
    InitShmObjectGlobal();

    return true;
}

bool NFCSharedMemModule::ReadyExecute()
{
    /*
    初始化完毕
    */
    SetShmInitSuccessFlag();
    return true;
}

bool NFCSharedMemModule::Execute()
{
    NFShmTimerManager *pTimerMng = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pTimerMng)
    {
        pTimerMng->OnTick(NFTime::Now().UnixMSec());
    }
    NFTransMng *pTransManager = (NFTransMng *) GetHeadObj(EOT_TRANS_MNG);
    if (pTransManager)
    {
        pTransManager->TickNow(m_pObjPluginManager->GetCurFrameCount());
    }
    return true;
}

bool NFCSharedMemModule::Finalize()
{
    DestroyShareMem();
    return true;
}

bool NFCSharedMemModule::OnReloadConfig()
{
    return true;
}

bool NFCSharedMemModule::AfterOnReloadConfig()
{
    for (int i = 0; i < (int) m_nObjSegSwapCounter.size(); i++)
    {
        NFShmObjSeg *pObjSeg = m_nObjSegSwapCounter[i].m_pidRuntimeClass.m_pObjSeg;
        if (pObjSeg)
        {
            NFShmObj *pObj = pObjSeg->GetHeadObj();
            while (pObj)
            {
                pObj->AfterOnReloadConfig();
                pObj = pObjSeg->GetNextObj(pObj);
            }
        }
    }
    return true;
}

int NFCSharedMemModule::ReadRunMode()
{
    if (m_pObjPluginManager->IsInitShm())
    {
        m_enRunMode = EN_OBJ_MODE_INIT;
    }
    else
    {
        m_enRunMode = EN_OBJ_MODE_RECOVER;
    }
    return 0;
}

/**
* 分配共享内存
*/
int NFCSharedMemModule::AllocShm()
{
    return AllocShm(NFServerIDUtil::GetShmObjKey(m_pObjPluginManager->GetBusName()), GetAllObjSize());
}

int NFCSharedMemModule::AllocShm(int iKey, size_t siShmSize)
{
    int iRet = 0;
    ReadRunMode();

    if (m_enRunMode == EN_OBJ_MODE_RECOVER)
    {
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "run by RECOVER mode");
    }
    else
    {
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "run by INIT mode");
    }

    m_siShmSize = siShmSize;
    m_pSharedMemMgr = CreateShareMem(iKey, m_siShmSize, m_enRunMode, true);
    if (!m_pSharedMemMgr)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "create shm fail");
        iRet = -1;
    }

    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "--end-- ret {}", iRet);

    return iRet;
}

/**
* 从共享内存里获得一块内存
*/
void *NFCSharedMemModule::CreateSegment(size_t siSize)
{
    if (m_pSharedMemMgr)
    {
        return m_pSharedMemMgr->CreateSegment(siSize);
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
    return NULL;
}

/**
* 共享内存模式
*/
EN_OBJ_MODE NFCSharedMemModule::GetInitMode()
{
    if (m_pSharedMemMgr)
    {
        return m_pSharedMemMgr->GetInitMode();
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
    return EN_OBJ_MODE_INIT;
}

void NFCSharedMemModule::SetInitMode(EN_OBJ_MODE mode)
{
    if (m_pSharedMemMgr)
    {
        return m_pSharedMemMgr->SetInitMode(mode);
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
}

/**
* 共享内存创建对象模式
*/
EN_OBJ_MODE NFCSharedMemModule::GetCreateMode()
{
    return m_enCreateMode;
}

/**
* 共享内存创建对象模式
*/
void NFCSharedMemModule::SetCreateMode(EN_OBJ_MODE mode)
{
    m_enCreateMode = mode;
}

/**
* @brief  对象seq自增
*/
int NFCSharedMemModule::IncreaseObjSeqNum()
{
    if (m_pSharedMemMgr)
    {
        return m_pSharedMemMgr->IncreaseObjSeqNum();
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
    return 0;
}

/**
* @brief  获得偏移地址
*/
size_t NFCSharedMemModule::GetAddrOffset()
{
    if (m_pSharedMemMgr)
    {
        return m_pSharedMemMgr->GetAddrOffset();
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
    return 0;
}

/**
* @brief  NFGlobalID
*/
NFGlobalID *NFCSharedMemModule::GetGlobalID()
{
    return m_pGlobalID;
}

/**
* @brief  设置功能内存初始化成功
*/
void NFCSharedMemModule::SetShmInitSuccessFlag()
{
    if (m_pSharedMemMgr)
    {
        m_pSharedMemMgr->SetShmInitSuccessFlag();
    }
    NF_ASSERT_MSG(m_pSharedMemMgr, "m_pSharedMemMgr == NULL");
}

/**
* @brief  运行时文件ID
*/
uint32_t NFCSharedMemModule::GetRunTimeFileId()
{
    return m_nRunTimeFileID;
}

NFCSharedMem *NFCSharedMemModule::CreateShareMem(int iKey, size_t siSize, EN_OBJ_MODE enInitFlag, bool bCheckShmInitSuccessFlag)
{
    NFCSharedMem *pShm = NULL;
    size_t siTempShmSize = 0;
    void *pAddr = NULL;
#if NF_PLATFORM == NF_PLATFORM_WIN
    HANDLE			hShmID = nullptr;
    long			sPageSize = 4096;
#else
    int hShmID = 0;
    long sPageSize = getpagesize();;
#endif

    siTempShmSize = siSize;
    siTempShmSize += sizeof(NFCSharedMem);


    if (siTempShmSize % sPageSize)
    {
        siTempShmSize = (siTempShmSize / sPageSize + 1) * sPageSize;
    }

    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "--begin-- key:{},  size:{}M, pagesize:{}, mode:{} ", iKey, siTempShmSize / 1024.0 / 1024.0, sPageSize,
              enInitFlag);

#if NF_PLATFORM == NF_PLATFORM_WIN
    std::string shmFileName = NF_FORMAT("{}_shm_key_{}.bus", m_pObjPluginManager->GetAppName(), iKey);
    //std::wstring wShmFileName = NFStringUtility::s2ws(shmFileName);
    hShmID = OpenFileMapping(FILE_MAP_ALL_ACCESS, false, shmFileName.c_str());

    if (hShmID == nullptr)
    {
        HANDLE hFileID = CreateFile(shmFileName.c_str(), GENERIC_READ | GENERIC_WRITE, FILE_SHARE_READ | FILE_SHARE_WRITE, NULL, OPEN_ALWAYS, FILE_FLAG_SEQUENTIAL_SCAN, NULL);

        if (hFileID == nullptr)
        {
            NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem CreateFile error:{}, {}", errno, strerror(errno));
            NFSLEEP(1);
            exit(-1);
        }

        hShmID = CreateFileMapping(hFileID, nullptr, PAGE_READWRITE, 0, static_cast<DWORD>(siTempShmSize), shmFileName.c_str());

        if (hShmID == nullptr)
        {
            NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem CreateFile error:{}, {}", errno, strerror(errno));
            NFSLEEP(1);
            exit(-1);
        }

        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "shm ori mode {} change to mode {}(mode 1:Init, 2:Recover)", enInitFlag, EN_OBJ_MODE_INIT);

        enInitFlag = EN_OBJ_MODE_INIT;
    }

    pAddr = (void*)MapViewOfFile(hShmID, FILE_MAP_ALL_ACCESS, 0, 0, siTempShmSize);
    if (pAddr == nullptr)
    {
        CloseHandle(hShmID);
        NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem MapViewOfFile error:{}, {}", errno, strerror(errno));
        NFSLEEP(1);
        exit(-1);
    }
    else
    {
        NFCSharedMem::pbCurrentShm = (char*)pAddr;
        NFCSharedMem::s_bCheckInitSuccessFlag = enInitFlag;
        pShm = new NFCSharedMem(iKey, siTempShmSize, enInitFlag, hShmID);
    }

#else

    //注意_bCreate的赋值位置:保证多线程用一个对象的时候也不会有问题
    //试图创建
    if ((hShmID = shmget(iKey, siTempShmSize, IPC_CREAT | IPC_EXCL | 0666)) < 0)
    {
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "CreateShareMem failed for error:{}, {}, server will try to attach it", errno, strerror(errno));
        //no space left
        if (errno == 28 || errno == 12)
        {
            NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem failed for error:{}, {}", errno, strerror(errno));
            NFSLEEP(1000);
            exit(-1);
        }

        //有可能是已经存在同样的key_shm,则试图连接
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "same shm  exist, now try to attach it ... ");
        if ((hShmID = shmget(iKey, siTempShmSize, 0666)) < 0)
        {
            NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem failed for error:{}, {}", errno, strerror(errno));
            if ((hShmID = shmget(iKey, 0, 0666)) < 0)
            {
                NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem failed for error:{}, {}", errno, strerror(errno));
                NFSLEEP(1000);
                exit(-1);
            }
            else
            {
                NFLogInfo(NF_LOG_SYSTEMLOG, 0, "rm the exsit shm ...");
                if (EN_OBJ_MODE_INIT == enInitFlag)
                {
                    if (shmctl(hShmID, IPC_RMID, NULL))
                    {
                        NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem rm failed for {}, {}", errno, strerror(errno));
                        NFSLEEP(1000);
                        exit(-1);
                    }

                    if ((hShmID = shmget(iKey, siTempShmSize, IPC_CREAT | IPC_EXCL | 0666)) < 0)
                    {
                        NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem alloc failed for  {}, {}", errno, strerror(errno));
                        NFSLEEP(1000);
                        exit(-1);
                    }
                }
                else
                {
                    NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem shm already exist, but size not match, alloc failed for  {}, {}", errno,
                               strerror(errno));
                    NFSLEEP(1000);
                    exit(-1);
                }
            }
        }
        else
        {
            NFLogInfo(NF_LOG_SYSTEMLOG, 0, "attach succ ");
        }
    }
    else
    {
        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "shm ori mode {} change to mode {}(mode 1:Init, 2:Recover)", enInitFlag, EN_OBJ_MODE_INIT);
        enInitFlag = EN_OBJ_MODE_INIT;
    }

    struct shmid_ds stDs;

    int iRetCode = shmctl(hShmID, IPC_STAT, &stDs);
    if (iRetCode != 0)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "CSharedMem shmctl Failed");
        return NULL;
    }

    if (siTempShmSize != stDs.shm_segsz)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "CSharedMem Invalid ReqShmSize With Shm, ReqShmSize:{}  ActShmSize:{} ShmID:{} ShmKey:{}", siTempShmSize,
                   stDs.shm_segsz, hShmID, iKey);
        return NULL;
    }

    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "CSharedMem ReqShmSize:{}M ActShmSize:{}M ShmID:{} ShmKey:{}", siTempShmSize / 1024.0 / 1024.0,
              stDs.shm_segsz / 1024.0 / 1024.0, hShmID, iKey);
    //try to access shm
    if ((pAddr = shmat(hShmID, NULL, 0)) == (char *) -1)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "CreateShareMem shmat failed for  {}, {}", errno, strerror(errno));
        NFSLEEP(1000);
        exit(-1);
    }

    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "shmat return {}", (void *) pAddr);

    if (pAddr != (void *) -1)
    {
        NFCSharedMem::pbCurrentShm = (char *) pAddr;
        NFCSharedMem::s_bCheckInitSuccessFlag = enInitFlag;
        pShm = new NFCSharedMem(iKey, siTempShmSize, enInitFlag, hShmID);
    }
    else
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "shmat failed for  {}, {}", errno, strerror(errno));
        NFSLEEP(1000);
        exit(-1);
    }
#endif

    NFLogInfo(NF_LOG_SYSTEMLOG, 0, " --end-- pShm:{}", (void *) pShm);

    return pShm;
}

/**
* 摧毁共享内存
*/
int NFCSharedMemModule::DestroyShareMem()
{
// 	if (m_pSharedMemMgr == NULL)
// 	{
// 		return 0;
// 	}
// 
// #if NF_PLATFORM == NF_PLATFORM_WIN
// 	if (m_pSharedMemMgr->pbCurrentShm != NULL)
// 	{
// 		UnmapViewOfFile(m_pSharedMemMgr->pbCurrentShm);
// 		CloseHandle(m_pSharedMemMgr->m_shemID);
// 
// 		m_pSharedMemMgr->m_shemID = NULL;
// 		m_pSharedMemMgr->pbCurrentShm = NULL;
// 	}
// #else
// 	int hShmID = shmget(m_pSharedMemMgr->m_nShmKey, 0, 0666);
// 	if (((int64_t)hShmID) < 0)
// 	{
// 		NFLogError(NF_LOG_SYSTEMLOG, 0, "Error, touch to shm failed {}", strerror(errno));
// 		return -1;
// 	}
// 	else
// 	{
// 		NFLogInfo(NF_LOG_SYSTEMLOG, 0, "Now remove the exist share memory:{}", hShmID);
// 
// 		if (shmctl(hShmID, IPC_RMID, NULL))
// 		{
// 			NFLogError(NF_LOG_SYSTEMLOG, 0, "Remove share memory failed : {}", strerror(errno));
// 			return -1;
// 		}
// 
// 		NFLogDebug(NF_LOG_SYSTEMLOG, 0, "Remove shared memory(id = {}, key = {}) succeed.", hShmID, m_pSharedMemMgr->m_nShmKey);
// 	}
// 
// #endif

    return 0;
}


std::string NFCSharedMemModule::GetClassName(int bType)
{
    NF_ASSERT_MSG((int) bType < (int) m_nObjSegSwapCounter.size(), "bType < (int)m_nObjSegSwapCounter.size()");
    return m_nObjSegSwapCounter[bType].m_szClassName;
}

int NFCSharedMemModule::GetClassType(int bType)
{
    NF_ASSERT_MSG((int) bType < (int) m_nObjSegSwapCounter.size(), "bType < (int)m_nObjSegSwapCounter.size()");
    return m_nObjSegSwapCounter[bType].m_iObjType;
}

NFShmObjSegSwapCounter *NFCSharedMemModule::CreateCounterObj(int bType)
{
    NF_ASSERT_MSG((int) bType < (int) m_nObjSegSwapCounter.size(), "bType < (int)m_nObjSegSwapCounter.size()");
    return &m_nObjSegSwapCounter[bType];
}

int NFCSharedMemModule::InitAllObjSeg()
{
    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "total obj shm size: {}M", m_iObjSegSizeTotal / 1024.0 / 1024.0);
    int iRet = 0;

    for (int i = 0; i < (int) m_nObjSegSwapCounter.size(); i++)
    {
        m_nObjSegSwapCounter[i].m_iObjType = i;
        m_nObjSegSwapCounter[i].m_pidRuntimeClass.m_iSelfType = i;
        if (m_nObjSegSwapCounter[i].m_nObjSize > 0 && m_nObjSegSwapCounter[i].m_iItemCount > 0)
        {
            NFShmObjSeg *pObjSeg = NFShmObjSeg::CreateObject(m_pObjPluginManager);
            NFShmObjSegSwapCounter *pObjSegSwapCounter = &m_nObjSegSwapCounter[i];
            pObjSegSwapCounter->SetObjSeg(pObjSeg);
            NFShmMgr::Instance()->m_pTempPluginManager = m_pObjPluginManager;
            NFShmMgr::Instance()->m_iType = i;
            iRet = pObjSeg->SetAndInitObj(pObjSegSwapCounter->m_nObjSize,
                                          pObjSegSwapCounter->m_iItemCount,
                                          pObjSegSwapCounter->m_pFn, pObjSegSwapCounter->m_pidRuntimeClass.m_iUseHash,
                                          pObjSegSwapCounter->m_pidRuntimeClass.m_iIndexCount,
                                          pObjSegSwapCounter->m_pidRuntimeClass.m_iIndexTime);

            NFShmMgr::Instance()->m_pTempPluginManager = NULL;
            NFShmMgr::Instance()->m_iType = INVALID_ID;

            if (iRet)
            {
                NFLogInfo(NF_LOG_SYSTEMLOG, 0, "NFShmObjSeg::InitAllObj failed!");
                return iRet;
            }
            else
            {
                size_t sObjSegSize = pObjSegSwapCounter->m_nObjSize * pObjSegSwapCounter->m_iItemCount;
                if (pObjSegSwapCounter->m_pidRuntimeClass.m_iUseHash)
                {
                    sObjSegSize += NFShmObjSeg::GetHashSize(pObjSegSwapCounter->m_iItemCount);
                }
                if (pObjSegSwapCounter->m_pidRuntimeClass.m_iIndexCount > 0)
                {
                    sObjSegSize += NFShmObjSeg::GetIndexSize(pObjSegSwapCounter->m_pidRuntimeClass.m_iIndexCount,
                                                             pObjSegSwapCounter->m_pidRuntimeClass.m_iIndexTime, pObjSegSwapCounter->m_iItemCount);
                }

                NFLogInfo(NF_LOG_SYSTEMLOG, 0, "{} count {}   --- ObjStart:{}, size:{}({}MB), IdxStart:{}", pObjSegSwapCounter->m_szClassName,
                          pObjSegSwapCounter->m_iItemCount,
                          (void *) pObjSeg->m_pObjs, sObjSegSize, (float) sObjSegSize / 1024.0 / 1024.0, (void *) pObjSeg->m_pIdxs);
            }
        }
    }

    return 0;
}

void
NFCSharedMemModule::SetObjSegParam(int bType, size_t nObjSize, int iItemCount, NFShmObj *(*pfResumeObj)(NFIPluginManager *pPluginManager, void *),
                                   NFShmObj *(*pCreatefn)(NFIPluginManager *pPluginManager),
                                   void(*pDestroy)(NFIPluginManager *pPluginManager, NFShmObj *), int parentType, const std::string &pszClassName,
                                   bool useHash, int indexCount, int indexTime, bool singleton)
{
    NFShmObjSegSwapCounter *pCounter = CreateCounterObj(bType);
    bool add = false;
    if (pCounter->m_nObjSize > 0)
    {
        add = true;
        NF_ASSERT(pCounter->m_nObjSize == nObjSize);
        NF_ASSERT(pCounter->m_iObjType == bType);
        NF_ASSERT(pCounter->m_singleton == singleton);
        NF_ASSERT(pCounter->m_pFn == pfResumeObj);
        NF_ASSERT(pCounter->m_szClassName == pszClassName);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_iSelfType == bType);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_pCreatefn == pCreatefn);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_pDestroyFn == pDestroy);

        NF_ASSERT(pCounter->m_pidRuntimeClass.m_pszName == pszClassName);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_iUseHash == useHash);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_iIndexCount == indexCount);
        NF_ASSERT(pCounter->m_pidRuntimeClass.m_iIndexTime == indexTime);
    }
    pCounter->m_nObjSize = nObjSize;
    pCounter->m_iItemCount += iItemCount;
    pCounter->m_iObjType = bType;
    pCounter->m_singleton = singleton;

    if (pCounter->m_iItemCount < 0)
    {
        pCounter->m_iItemCount = 0;
    }

    if (singleton)
    {
        pCounter->m_iItemCount = 1;
    }

    pCounter->m_pFn = pfResumeObj;
    pCounter->m_szClassName = pszClassName;

    pCounter->m_pidRuntimeClass.m_iSelfType = bType;
    pCounter->m_pidRuntimeClass.m_pCreatefn = pCreatefn;
    pCounter->m_pidRuntimeClass.m_pDestroyFn = pDestroy;
    if (parentType < 0)
    {
        pCounter->m_pidRuntimeClass.m_pParent = NULL;
    }
    else
    {
        pCounter->m_pidRuntimeClass.m_pParent = GetIDRuntimeClass(parentType);
    }
    pCounter->m_pidRuntimeClass.m_pObjSeg = NULL;
    pCounter->m_pidRuntimeClass.m_pszName = pszClassName;
    pCounter->m_pidRuntimeClass.m_iUseHash = useHash;
    pCounter->m_pidRuntimeClass.m_iIndexCount = indexCount;
    pCounter->m_pidRuntimeClass.m_iIndexTime = indexTime;

    size_t siThisObjSegTotal = 0;
    if (!add)
    {
        siThisObjSegTotal += sizeof(NFShmObjSeg);
        siThisObjSegTotal += sizeof(NFShmIdx) * pCounter->m_iItemCount;
        siThisObjSegTotal += pCounter->m_nObjSize * pCounter->m_iItemCount;

        if (pCounter->m_pidRuntimeClass.m_iUseHash)
        {
            siThisObjSegTotal += NFShmObjSeg::GetHashSize(pCounter->m_iItemCount);
        }

        if (pCounter->m_pidRuntimeClass.m_iIndexCount > 0)
        {
            siThisObjSegTotal += NFShmObjSeg::GetIndexSize(pCounter->m_pidRuntimeClass.m_iIndexCount,
                                                           pCounter->m_pidRuntimeClass.m_iIndexTime,
                                                           pCounter->m_iItemCount);
        }

        m_iObjSegSizeTotal += siThisObjSegTotal;
        m_iTotalObjCount += pCounter->m_iItemCount;

        if (siThisObjSegTotal / 1024.0 / 1024.0 >= 10)
        {
            NFLogWarning(NF_LOG_SYSTEMLOG, 0, "class {} objsize {} M count {} tablesize {} M total obj count {}", pszClassName,
                         pCounter->m_nObjSize / 1024.0 / 1024.0, pCounter->m_iItemCount, siThisObjSegTotal / 1024.0 / 1024.0, m_iTotalObjCount);
        }
        else
        {
            NFLogInfo(NF_LOG_SYSTEMLOG, 0, "class {} objsize {} byte count {} tablesize {} M total obj count {}", pszClassName,
                      pCounter->m_nObjSize, pCounter->m_iItemCount, siThisObjSegTotal / 1024.0 / 1024.0, m_iTotalObjCount);
        }
    }
    else {
        siThisObjSegTotal += sizeof(NFShmIdx) * iItemCount;
        siThisObjSegTotal += pCounter->m_nObjSize * iItemCount;

        if (pCounter->m_pidRuntimeClass.m_iUseHash)
        {
            siThisObjSegTotal += NFShmObjSeg::GetHashSize(iItemCount);
        }

        if (pCounter->m_pidRuntimeClass.m_iIndexCount > 0)
        {
            siThisObjSegTotal += NFShmObjSeg::GetIndexSize(pCounter->m_pidRuntimeClass.m_iIndexCount,
                                                           pCounter->m_pidRuntimeClass.m_iIndexTime,
                                                           iItemCount);
        }

        m_iObjSegSizeTotal += siThisObjSegTotal;
        m_iTotalObjCount += iItemCount;

        if (siThisObjSegTotal / 1024.0 / 1024.0 >= 10)
        {
            NFLogWarning(NF_LOG_SYSTEMLOG, 0, "append class {} objsize {} M count {} tablesize {} M total obj count {}", pszClassName,
                         pCounter->m_nObjSize / 1024.0 / 1024.0, iItemCount, siThisObjSegTotal / 1024.0 / 1024.0, m_iTotalObjCount);
        }
        else
        {
            NFLogInfo(NF_LOG_SYSTEMLOG, 0, "append class {} objsize {} byte count {} tablesize {} M total obj count {}", pszClassName,
                      pCounter->m_nObjSize, iItemCount, siThisObjSegTotal / 1024.0 / 1024.0, m_iTotalObjCount);
        }
    }

    CHECK_EXPR_NOT_RET(m_iTotalObjCount < MAX_GLOBALID_NUM * 0.8, "the shm obj too much, m_iTotalObjCount:{} < MAX_GLOBALID_NUM:{}*0.8",
                       m_iTotalObjCount, MAX_GLOBALID_NUM);
}

void NFShmObjSegSwapCounter::SetObjSeg(NFShmObjSeg *pObjSeg)
{
    m_pidRuntimeClass.m_pObjSeg = pObjSeg;
}

//////////////////////////////////////////////////////////////////////////
int NFCSharedMemModule::InitializeAllObj()
{
    int iRet = InitAllObjSeg();

    if (iRet)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "failed!");
        return -1;
    }

    //对象内存分配完毕后，统一把创建方式改为Init.
    NFShmMgr::Instance()->SetCreateMode(EN_OBJ_MODE_INIT);
    SetCreateMode(EN_OBJ_MODE_INIT);
    return 0;
}

size_t NFCSharedMemModule::GetAllObjSize()
{
    return m_iObjSegSizeTotal;
}

int NFCSharedMemModule::InitShmObjectGlobal()
{
    int iRet = 0;

    if (GetInitMode() == EN_OBJ_MODE_RECOVER)
    {
        m_pGlobalID = (NFGlobalID *) FindModule<NFISharedMemModule>()->GetObj(EOT_GLOBAL_ID, 0);
    }
    else
    {
        m_pGlobalID = (NFGlobalID *) NFGlobalID::CreateObject(m_pObjPluginManager);
        //CreateObjByHashKey(EOT_TYPE_TIMER_MNG);
        for (int i = EOT_GLOBAL_ID + 1; i < (int) m_nObjSegSwapCounter.size(); i++)
        {
            if (m_nObjSegSwapCounter[i].m_nObjSize > 0 && m_nObjSegSwapCounter[i].m_iItemCount > 0)
            {
                NFShmObjSegSwapCounter *pObjSegSwapCounter = &m_nObjSegSwapCounter[i];
                if (pObjSegSwapCounter->m_singleton)
                {
                    CreateObj(i);
                    NFLogTrace(NF_LOG_SYSTEMLOG, 0, "Create Shm Global Obj:{}", pObjSegSwapCounter->m_szClassName);
                }
            }
        }
    }

    InitSpecialShmObj();

    return iRet;
}

int NFCSharedMemModule::InitSpecialShmObj()
{
    NFTransMng *pManager = (NFTransMng *) GetHeadObj(EOT_TRANS_MNG);
    if (pManager)
    {
        /**
         * @brief 平衡处理，大概一帧处理200个trans
         */
        pManager->Init(1, 200);
    }

    if (GetInitMode() == EN_OBJ_MODE_RECOVER)
    {
        NFTransMng *pManager = (NFTransMng *) GetHeadObj(EOT_TRANS_MNG);
        if (pManager)
        {
            pManager->RebuildTransObjPointerListForResume();
        }
    }

    return 0;
}

NFShmObjSeg *NFCSharedMemModule::GetObjSeg(int iType)
{
    if (iType >= 0 && iType < (int) m_nObjSegSwapCounter.size()
        && m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg;
    }

    return NULL;
}

int NFCSharedMemModule::GetItemCount(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetItemCount();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetItemCount iType:{} null objseg", iType);
    return 0;
}

int NFCSharedMemModule::GetUsedCount(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetUsedCount();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetUsedCount iType:{} null objseg", iType);
    return 0;
}

int NFCSharedMemModule::GetFreeCount(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetFreeCount();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetFreeCount iType:{} null objseg", iType);
    return 0;
}

int NFCSharedMemModule::GetUsedHead(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetUsedHead();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetUsedHead iType:{} null objseg", iType);
    return 0;
}

int NFCSharedMemModule::GetFreeHead(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetFreeHead();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetFreeHead iType:{} null objseg", iType);
    return 0;
}

void *NFCSharedMemModule::AllocMemForObject(int iType)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        void *p = pObjSeg->AllocMemForObject();

        NFLogTrace(NF_LOG_SYSTEMLOG, 0, "{} type:{} objsize:{} AllocMem:{} usedCount:{} allCount:{}", m_nObjSegSwapCounter[iType].m_szClassName,
                   m_nObjSegSwapCounter[iType].m_iObjType, m_nObjSegSwapCounter[iType].m_nObjSize, p, pObjSeg->m_iUsedCount, pObjSeg->m_iItemCount);
        return p;
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now AllocMemForObject iType:{} null objseg", iType);
    return NULL;
}

void NFCSharedMemModule::FreeMemForObject(int iType, void *pMem)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->FreeMemForObject(pMem);
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now FreeMemForObject iType:{} null objseg", iType);
    return;
}

NFShmObj *NFCSharedMemModule::GetObj(int iType, int iIndex)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetObj(iIndex);
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetObj iType:{} null objseg", iType);
    return 0;
}

NFIDRuntimeClass *NFCSharedMemModule::GetIDRuntimeClass(int iType)
{
    if (iType >= 0 && iType < (int) m_nObjSegSwapCounter.size())
    {
        return &m_nObjSegSwapCounter[iType].m_pidRuntimeClass;
    }
    return NULL;
}

bool NFCSharedMemModule::IsEnd(int iType, int iIndex)
{
    assert(IsTypeValid(iType));

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->IsEnd(iIndex);
    }

    return true;
}

bool NFCSharedMemModule::IsTypeValid(int iType)
{
    if (iType < 0 || iType >= (int) m_nObjSegSwapCounter.size())
    {
        return false;
    }

    return true;
}

NFTransBase *NFCSharedMemModule::CreateTrans(int iType)
{
    CHECK_EXPR(IsTypeValid(iType), NULL, "iType:{} is not valid", iType);

    NFTransMng *pManager = (NFTransMng *) GetHeadObj(EOT_TRANS_MNG);
    if (pManager)
    {
        return pManager->CreateTrans(iType);
    }
    return NULL;
}

NFTransBase *NFCSharedMemModule::GetTrans(uint64_t ullTransId)
{
    NFTransMng *pManager = (NFTransMng *) GetHeadObj(EOT_TRANS_MNG);
    if (pManager)
    {
        return pManager->GetTransBase(ullTransId);
    }
    return NULL;
}

int NFCSharedMemModule::CreateIndexByKeyValue(uint32_t indexId, uint64_t indexKey, uint64_t indexValue, int iType)
{
    assert(IsTypeValid(iType));
    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->CreateIndexByKeyValue(indexId, indexKey, indexValue);
}

uint64_t *NFCSharedMemModule::GetIndexValueByIndexKey(uint32_t indexId, uint64_t indexKey, int iType)
{
    assert(IsTypeValid(iType));
    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetIndexValueByIndexKey(indexId, indexKey);
}

NFShmObj *NFCSharedMemModule::CreateIndexToHashKey(uint32_t indexId, uint64_t indexKey, uint64_t hashKey, int iType)
{
    assert(IsTypeValid(iType));

    if (!m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the obj can't not use hash");
        return NULL;
    }

    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->CreateIndexToHashKey(indexId, indexKey, hashKey, iType);
}

NFShmObj *NFCSharedMemModule::GetObjByIndexKey(uint32_t indexId, uint64_t indexKey, int iType)
{
    assert(IsTypeValid(iType));

    if (!m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the obj can't not use hash");
        return NULL;
    }

    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetObjByIndexKey(indexId, indexKey, iType);
}

int NFCSharedMemModule::DelIndexKey(uint32_t indexId, uint64_t indexKey, int iType)
{
    assert(IsTypeValid(iType));

    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->DelIndexKey(indexId, indexKey, iType);
}

NFShmObj *NFCSharedMemModule::CreateObjByHashKey(uint64_t hashKey, int iType)
{
    assert(IsTypeValid(iType));

    NFShmObj *pObj = NULL;
    if (!m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the obj can't not use hash");
        return NULL;
    }

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->HashFind(hashKey, iType))
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the hash key:{} exist.........", hashKey);
        return NULL;
    }

    NFShmMgr::Instance()->m_pTempPluginManager = m_pObjPluginManager;
    NFShmMgr::Instance()->m_iType = iType;
    pObj = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pCreatefn(m_pObjPluginManager);
    NFShmMgr::Instance()->m_pTempPluginManager = NULL;
    NFShmMgr::Instance()->m_iType = INVALID_ID;
    if (pObj)
    {
        int iID = pObj->GetGlobalID();

        if (iID >= 0)
        {
            if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
            {
                int iHashID = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->HashAlloc(hashKey, iID);
                if (iHashID < 0)
                {
                    assert(false);
                    m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pDestroyFn(m_pObjPluginManager, pObj);
                    pObj = NULL;
                }
                else
                {
                    pObj->SetHashID(iHashID);
                }
            }
            else
            {
            }
        }
        else
        {
            assert(false);
            m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pDestroyFn(m_pObjPluginManager, pObj);
            pObj = NULL;
        }
    }

    return pObj;
}

NFShmObj *NFCSharedMemModule::CreateObj(int iType)
{
    assert(IsTypeValid(iType));

    NFShmObj *pObj = NULL;
    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the obj use hash, create obj use CreateObjByHashKey(uint64_t hashKey, int iType)");
        return NULL;
    }

    NFShmMgr::Instance()->m_pTempPluginManager = m_pObjPluginManager;
    NFShmMgr::Instance()->m_iType = iType;
    pObj = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pCreatefn(m_pObjPluginManager);
    NFShmMgr::Instance()->m_pTempPluginManager = NULL;
    NFShmMgr::Instance()->m_iType = INVALID_ID;
    if (pObj)
    {
        int iID = pObj->GetGlobalID();

        if (iID >= 0)
        {
        }
        else
        {
            assert(false);
            m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pDestroyFn(m_pObjPluginManager, pObj);
            pObj = NULL;
        }

    }

    return pObj;
}

NFShmObj *NFCSharedMemModule::GetObjByHashKey(uint64_t hashKey, int iType)
{
    assert(IsTypeValid(iType));
    if (!m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
    {
        NFLogError(NF_LOG_SYSTEMLOG, 0, "the obj not use hash, get obj use GetObjFromGlobalID");
        return NULL;
    }

    return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->HashFind(hashKey, iType);
}

NFShmObj *NFCSharedMemModule::GetObjFromGlobalIDWithNoCheck(int iGlobalID)
{
    NFShmObj *pObj = m_pGlobalID->GetObj(iGlobalID);
    return pObj;
}

NFShmObj *NFCSharedMemModule::GetObjFromGlobalID(int iGlobalID, int iType, int iStrongType)
{
    NFShmObj *pObj = m_pGlobalID->GetObj(iGlobalID);
    //return pObj;

    int iRealType;
    NFIDRuntimeClass *pRuntimeClass;

    if (!pObj)
    {
        return NULL;
    }

#if defined(_DEBUG) | defined(_DEBUG_)
    pObj->CheckMemMagicNum();
#endif

    if (iType < 0)
    {
        return pObj;
    }

    iRealType = pObj->GetClassType();

    if ((iRealType != iType))
    {
#ifdef _DEBUG_DETAIL_
        LOGSVR_DEBUG("Want Type:" << iType << " GetType:" << pObj->GetClassType());
#endif

        if (iStrongType)
        {
            return NULL;
        }
    }

    pRuntimeClass = ((iRealType >= 0 && iRealType < (int) m_nObjSegSwapCounter.size()) ? &m_nObjSegSwapCounter[iRealType].m_pidRuntimeClass : NULL);

    if (!pRuntimeClass)
    {
        return NULL;
    }

    if (pRuntimeClass->m_iSelfType == iType)
    {
#ifdef _DEBUG_DETAIL_
        LOGSVR_DEBUG("Want Type:" << iType << " Real Type: " << pRuntimeClass->m_iSelfType);
#endif
        return pObj;
    }

    while (pRuntimeClass->m_pParent)
    {
        if (pRuntimeClass->m_pParent->m_iSelfType == iType)
        {
#ifdef _DEBUG_DETAIL_
            LOGSVR_DEBUG("Want Type:" << iType << " Real Type:" << pRuntimeClass->m_pParent->m_iSelfType);
#endif
            return pObj;
        }

        pRuntimeClass = pRuntimeClass->m_pParent;
    }

    return NULL;
}

/*static */
NFShmObj *NFCSharedMemModule::GetObjFromMiscID(int iMiscID, int iType)
{
    int iTypeInID = -1;

    if (iMiscID == -1)
    {
        return NULL;
    }

    NFShmObj *pObj;

    //MiscID is globalid
    if (iMiscID >= 0)
    {
        //带GloableID的对象尽量不要通过GetObjFromMiscID来获取对象
#if defined( _DEBUG_) | defined(_DEBUG)
        NFLogError(NF_LOG_SYSTEMLOG, 0, "advice:dont use GetObjFromMiscID get object with gloablid. {} ,type {}", iMiscID, iType);
#endif
        return GetObjFromGlobalID(iMiscID, iType);
    }
    else
    {
        int iIndexInID = -1;
        iTypeInID = (iMiscID & 0x7f800000) >> 23;
        iIndexInID = (iMiscID & 0x007fffff);
        pObj = GetObj(iTypeInID, iIndexInID);
    }

    if (!pObj)
    {
        return NULL;
    }

#if defined(_DEBUG) | defined(_DEBUG_)
    pObj->CheckMemMagicNum();
#endif

    int iRealType = pObj->GetClassType();

    //不需要GloableID的扩展类请不要通过CIDRuntimeClass创建对象
    assert(iRealType == iTypeInID);

    if (iRealType == iType)
    {
        return pObj;
    }

    if (iType >= 0)
    {

        NFIDRuntimeClass *pRuntimeClass = ((iRealType >= 0 && iRealType < (int) m_nObjSegSwapCounter.size())
                                           ? &m_nObjSegSwapCounter[iType].m_pidRuntimeClass : NULL);

        if (!pRuntimeClass)
        {
            assert(0);
            return NULL;
        }

        if (pRuntimeClass->m_iSelfType == iType)
        {
            return pObj;
        }

        while (pRuntimeClass->m_pParent)
        {
            if (pRuntimeClass->m_pParent->m_iSelfType == iType)
            {
                return pObj;
            }

            pRuntimeClass = pRuntimeClass->m_pParent;
        }

#if defined( _DEBUG_) | defined(_DEBUG)
        assert(0);
#endif
        NFLogError(NF_LOG_SYSTEMLOG, 0, "Want Type:{} Real Type:{}", iType, iRealType)

        return NULL;
    }

    return pObj;
}

NFShmObj *NFCSharedMemModule::GetHeadObj(int iType)
{
    if (!IsTypeValid(iType))
    {
        return NULL;
    }

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetHeadObj();
    }

    return NULL;
}

NFShmObj *NFCSharedMemModule::GetNextObj(int iType, NFShmObj *pObj)
{
    if (!IsTypeValid(iType) || !pObj)
    {
        return NULL;
    }

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        return m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetNextObj(pObj);
    }

    return NULL;
}

int NFCSharedMemModule::GetGlobalID(int iType, int iIndex, NFShmObj *pObj)
{
    if (m_pGlobalID)
    {
        return m_pGlobalID->GetGlobalID(iType, iIndex, pObj);
    }
    return INVALID_ID;
}

int NFCSharedMemModule::GetObjectID(int iType, NFShmObj *pObj)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        return pObjSeg->GetObjId(pObj);
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetObjectID iType:{} null objseg", iType);
    return -1;
}

int NFCSharedMemModule::GetNextObjectID(int iType, int iObjID)
{
    NFShmObjSeg *pObjSeg = GetObjSeg(iType);
    if (pObjSeg)
    {
        NFShmIdx *pstIdx = pObjSeg->GetIdx(iObjID);
        if (NULL == pstIdx)
        {
            return -1;
        }
        return pstIdx->GetNextIdx();
    }
    NFLogError(NF_LOG_SYSTEMLOG, 0, "now GetNextObjectID iType:{} null objseg", iType);
    return -1;
}

int NFCSharedMemModule::DestroyObjAutoErase(int iType, int maxNum, const DESTROY_SHM_AUTO_ERASE_FUNCTION &func)
{
    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
        {
            std::vector<NFShmObj *> vecObj;
            NFShmHashObjectMgr<uint64_t, int> &hashMgr = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetHashMgr();
            if (maxNum == INVALID_ID)
            {
                int index = hashMgr.GetHeadIndex();
                while (hashMgr.CheckIndexUsed(index))
                {
                    uint64_t key = hashMgr.GetKeyByIndex(index);
                    int globalId = hashMgr[index];
                    NFShmObj *pObj = GetObjFromGlobalID(globalId, iType, 1);
                    CHECK_EXPR(pObj, -1, "GetObjFromGlobalID Failed! key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);

                    if (func)
                    {
                        if (func(pObj))
                        {
                            vecObj.push_back(pObj);
                            NFLogInfo(NF_LOG_SYSTEMLOG, 0, "DestroyObjAutoErase Data, key:{} globalId:{} type:{} index:{}", key, globalId, iType,
                                      index);
                            break;
                        }
                    }
                    else
                    {
                        vecObj.push_back(pObj);
                        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "DestroyObjAutoErase Data, key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);
                        break;
                    }

                    index = hashMgr.GetNextIndex(index);
                }
            }
            else if (maxNum >= 0)
            {
                std::vector<NFShmObj *> vecObj;
                int index = hashMgr.GetHeadIndex();
                while (hashMgr.CheckIndexUsed(index) || hashMgr.Size(NFShmHashObjectMgr<uint64_t, int>::USED_LIST) > maxNum)
                {
                    uint64_t key = hashMgr.GetKeyByIndex(index);
                    int globalId = hashMgr[index];
                    NFShmObj *pObj = GetObjFromGlobalID(globalId, iType, 1);
                    CHECK_EXPR(pObj, -1, "GetObjFromGlobalID Failed! key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);

                    if (func)
                    {
                        if (func(pObj))
                        {
                            vecObj.push_back(pObj);
                            NFLogInfo(NF_LOG_SYSTEMLOG, 0, "DestroyObjAutoErase Data, key:{} globalId:{} type:{} index:{}", key, globalId, iType,
                                      index);
                        }
                    }
                    else
                    {
                        vecObj.push_back(pObj);
                        NFLogInfo(NF_LOG_SYSTEMLOG, 0, "DestroyObjAutoErase Data, key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);
                    }

                    index = hashMgr.GetNextIndex(index);
                }
            }

            if (vecObj.empty())
            {
                int index = hashMgr.GetHeadIndex();
                if (hashMgr.CheckIndexUsed(index))
                {
                    uint64_t key = hashMgr.GetKeyByIndex(index);
                    int globalId = hashMgr[index];
                    NFShmObj *pObj = GetObjFromGlobalID(globalId, iType, 1);
                    CHECK_EXPR(pObj, -1, "GetObjFromGlobalID Failed! key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);

                    DestroyObj(pObj);
                    NFLogInfo(NF_LOG_SYSTEMLOG, 0, "DestroyObjAutoErase Data, key:{} globalId:{} type:{} index:{}", key, globalId, iType, index);
                }
            }

            for (int i = 0; i < (int) vecObj.size(); i++)
            {
                DestroyObj(vecObj[i]);
            }
        }
        else
        {
            return -1;
        }
    }
    else
    {
        return -1;
    }

    return 0;
}

void NFCSharedMemModule::ClearAllObj(int iType)
{
    if (!IsTypeValid(iType)) return;

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        for (int i = 0; i < (int) m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetItemCount(); i++)
        {
            NFShmObj *pObj = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetObj(i);
            if (pObj)
            {
                DestroyObj(pObj);
            }
        }
        m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->DelAllIndex();
    }
}

void NFCSharedMemModule::DestroyObj(NFShmObj *pObj)
{
    int iType = -1;
    int iIndex = -1;
    int iID = -1;
    int iHashID = -1;

    iType = pObj->GetClassType();
    iIndex = pObj->GetObjectID();
    iID = pObj->GetGlobalID();
    iHashID = pObj->GetHashID();
    std::string className = pObj->GetClassName();

    if (iType < 0 || iType >= (int) m_nObjSegSwapCounter.size())
    {
        return;
    }

    if (iIndex < 0)
    {
        return;
    }

    if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg)
    {
        if (m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_iUseHash)
        {
            if (iHashID >= 0)
            {
                uint64_t key = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetHashMgr().GetKeyByIndex(iHashID);
                int checkHashID = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->GetHashMgr().HashFind(key);
                if (checkHashID != iHashID)
                {
                    NFLogError(NF_LOG_SYSTEMLOG, key, "DestroyObj {} Error, key:{} globalId:{} type:{} index:{} iHashID:{}, CheckHashID:{}", className, key,
                               iID, iType, iIndex, iHashID, checkHashID);
                }
                int ret = m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pObjSeg->HashErase(iHashID);
                if (ret != 0)
                {
                    NFLogError(NF_LOG_SYSTEMLOG, 0, "HashErase:{} Failed!", iHashID);
                }
                NFLogTrace(NF_LOG_SYSTEMLOG, key, "DestroyObj {}, key:{} globalId:{} type:{} index:{} iHashID:{}", className, key, iID, iType, iIndex,
                           iHashID);
            }
            else
            {
                NFLogError(NF_LOG_SYSTEMLOG, 0, "iHashID:{} < 0 error", iHashID);
            }
        }

        m_pGlobalID->ReleaseID(iID);

        m_nObjSegSwapCounter[iType].m_pidRuntimeClass.m_pDestroyFn(m_pObjPluginManager, pObj);
        NFLogTrace(NF_LOG_SYSTEMLOG, 0, "DestroyObj {}, globalId:{} type:{} index:{}", className, iID, iType, iIndex);
    }

    return;
}

int NFCSharedMemModule::DeleteAllTimer(NFShmObj *pObj)
{
    return NFShmTimerManager::Instance(m_pObjPluginManager)->ClearAllTimer(pObj);
}

int NFCSharedMemModule::DeleteTimer(NFShmObj *pObj, int timeObjId)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        NFShmTimer *pShmTimer = pManager->GetTimer(timeObjId);
        if (pShmTimer)
        {
            if (pShmTimer->GetTimerShmObj() == pObj)
            {
                return pManager->Delete(timeObjId);
            }
            else
            {
                NFLogError(NF_LOG_SYSTEMLOG, 0, "timeObjId:{} pShmTimer->GetTimerShmObj:{} != pObj:{} is not the obj timer..............", timeObjId,
                           (void *) pShmTimer->GetTimerShmObj(), (void *) pObj);
                NFSLEEP(1)
                NF_ASSERT(false);
            }
        }
    }
    return -1;
}

//注册距离现在多少时间执行一次的定时器(hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒, 只执行一次)
int NFCSharedMemModule::SetTimer(NFShmObj *pObj, int hour, int minutes, int second, int microSec)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetTimer(pObj, hour, minutes, second, microSec);
    }
    return -1;
}

//注册某一个时间点执行一次的定时器(hour  minutes  second为第一次执行的时间点时分秒, 只执行一次)
int NFCSharedMemModule::SetCalender(NFShmObj *pObj, int hour, int minutes, int second)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetCalender(pObj, hour, minutes, second);
    }
    return -1;
}

//注册某一个时间点执行一次的定时器(timestamp为第一次执行的时间点的时间戳,单位是秒, 只执行一次)
int NFCSharedMemModule::SetCalender(NFShmObj *pObj, uint64_t timestamp)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetCalender(pObj, timestamp);
    }
    return -1;
}

//注册循环执行定时器（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒,  interval 为循环间隔时间，为毫秒）
int NFCSharedMemModule::SetTimer(NFShmObj *pObj, int interval, int callcount, int hour, int minutes, int second, int microSec)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetTimer(pObj, interval, callcount, hour, minutes, second, microSec);
    }
    return -1;
}

//注册循环执行定时器（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒）
int NFCSharedMemModule::SetDayTime(NFShmObj *pObj, int callcount, int hour, int minutes, int second, int microSec)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetDayTime(pObj, callcount, hour, minutes, second, microSec);
    }
    return -1;
}

//注册某一个时间点日循环执行定时器（hour  minutes  second为一天中开始执行的时间点，    23：23：23     每天23点23分23秒执行）
int NFCSharedMemModule::SetDayCalender(NFShmObj *pObj, int callcount, int hour, int minutes, int second)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetDayCalender(pObj, callcount, hour, minutes, second);
    }
    return -1;
}

//周循环（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒）
int NFCSharedMemModule::SetWeekTime(NFShmObj *pObj, int callcount, int hour, int minutes, int second, int microSec)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetWeekTime(pObj, callcount, hour, minutes, second, microSec);
    }
    return -1;
}

//注册某一个时间点周循环执行定时器（ weekDay  hour  minutes  second 为一周中某一天开始执行的时间点）
int NFCSharedMemModule::SetWeekCalender(NFShmObj *pObj, int callcount, int weekDay, int hour, int minutes, int second)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetWeekCalender(pObj, callcount, weekDay, hour, minutes, second);
    }
    return -1;
}

//月循环（hour  minutes  second  microSec为第一次执行距离现在的时分秒毫秒,最好是同一天）
int NFCSharedMemModule::SetMonthTime(NFShmObj *pObj, int callcount, int hour, int minutes, int second, int microSec)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetMonthTime(pObj, callcount, hour, minutes, second, microSec);
    }
    return -1;
}

//注册某一个时间点月循环执行定时器（ day  hour  minutes  second 为一月中某一天开始执行的时间点）
int NFCSharedMemModule::SetMonthCalender(NFShmObj *pObj, int callcount, int day, int hour, int minutes, int second)
{
    NFShmTimerManager *pManager = (NFShmTimerManager *) GetHeadObj(EOT_TYPE_TIMER_MNG);
    if (pManager)
    {
        return pManager->SetMonthCalender(pObj, callcount, day, hour, minutes, second);
    }
    return -1;
}

int NFCSharedMemModule::Get32UUID()
{
    return m_pGlobalID->Get32UUID();
}

int NFCSharedMemModule::FireExecute(uint32_t serverType, uint32_t nEventID, uint32_t bySrcType, uint64_t nSrcID, const google::protobuf::Message &message)
{
    return NFShmEventMgr::Instance(m_pObjPluginManager)->Fire(serverType, nEventID, bySrcType, nSrcID, message);
}

int NFCSharedMemModule::Subscribe(NFShmObj *pObj, uint32_t serverType, uint32_t nEventID, uint32_t bySrcType, uint64_t nSrcID, const string &desc)
{
    return NFShmEventMgr::Instance(m_pObjPluginManager)->Subscribe(pObj, serverType, nEventID, bySrcType, nSrcID, desc);
}

int NFCSharedMemModule::UnSubscribe(NFShmObj *pObj, uint32_t serverType, uint32_t nEventID, uint32_t bySrcType, uint64_t nSrcID)
{
    return NFShmEventMgr::Instance(m_pObjPluginManager)->UnSubscribe(pObj, serverType, nEventID, bySrcType, nSrcID);
}

int NFCSharedMemModule::UnSubscribeAll(NFShmObj *pObj)
{
    return NFShmEventMgr::Instance(m_pObjPluginManager)->UnSubscribeAll(pObj);
}
