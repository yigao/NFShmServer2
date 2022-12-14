// -------------------------------------------------------------------------
//    @FileName         :    NFMemTracker.h
//    @Author           :    gaoyi
//    @Date             :    2022/10/10
//    @Email			:    445267987@qq.com
//    @Module           :    NFMemTracker
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFCore/NFPlatform.h"
#include "NFComm/NFCore/NFMutex.h"
#include "NFComm/NFCore/NFSingleton.hpp"
#include <unordered_map>

struct NFTrackData
{
    uint32_t line_no_;
    std::string file_name_;
    std::string func_name_;

    NFTrackData(uint32_t line_no,
                const char *file_name,
                const char *func_name);
};

class NFMemTracker : public NFSingleton<NFMemTracker>
{
public:
    void PrintMemLink(const std::string& output_filename);

    bool TrackMalloc(void *ptr, const char *file_path, const char *func_num, uint32_t line_no);

    void TrackFree(void *ptr);

protected:
    typedef NFMutex TMutexLock;
    typedef std::unordered_map<void *, NFTrackData> PtrTrackMap;

    TMutexLock mutex_lock_;
    PtrTrackMap ptr_track_map_;

public:
    NFMemTracker();
    virtual ~NFMemTracker();
};


