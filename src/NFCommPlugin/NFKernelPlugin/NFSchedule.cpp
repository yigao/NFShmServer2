// -------------------------------------------------------------------------
//    @FileName         :    NFSchedule.cpp
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------

#include "NFSchedule.h"
#include "NFComm/NFPluginModule/NFLogMgr.h"
#include "NFComm/NFKernelMessage/proto_kernel.pb.h"

#if NF_PLATFORM == NF_PLATFORM_LINUX
static void mainfunc(uint32_t low32, uint32_t hi32) {
    uintptr_t ptr = (uintptr_t) low32 | ((uintptr_t) hi32 << 32);
    NFSchedule *S = (NFSchedule *) ptr;
    int64_t id = S->running;
    NFCoroutine *C = S->co_hash_map[id];
    if (C->func != NULL) {
        C->func(S, C->ud);
    } else {
        C->std_func();
    }
    S->co_free_list.push_back(C);
    S->co_free_num++;

    if (S->co_free_num > MAX_FREE_CO_NUM) {
        NFCoroutine* co = S->co_free_list.front();
        delete co;

        S->co_free_list.pop_front();
        S->co_free_num--;
    }

    S->co_hash_map.erase(id);
    S->running = -1;
    NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} is deleted.", id);
}
#else
static void mainfunc(intptr_t ptr) {
	NFSchedule *S = (NFSchedule *)ptr;
	int64_t id = S->running;
	NFCoroutine *C = S->co_hash_map[id];
	if (C->func != NULL) {
		C->func(S, C->ud);
	}
	else {
		C->std_func();
	}

	S->co_free_list.push_back(C);
	S->co_free_num++;

	if (S->co_free_num > MAX_FREE_CO_NUM) {
		NFCoroutine* co = S->co_free_list.front();
		delete co;

		S->co_free_list.pop_front();
		S->co_free_num--;
	}

	S->co_hash_map.erase(id);
	S->running = -1;
	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} is deleted.", id);
	
	SwitchToFiber(S->main);
}
#endif

NFCoroutine *NFSchedule::NewCoroutine(const std::function<void()>& std_func)
{
	NFCoroutine * co = NULL;
	if (co_free_list.empty()) {
		co = new NFCoroutine(stack_size);
	} else {
		co = co_free_list.front();
		co_free_list.pop_front();

		co_free_num--;
#if NF_PLATFORM == NF_PLATFORM_LINUX
#else
        if (co->ctx)
		{
			DeleteFiber(co->ctx);
			co->ctx = NULL;
		}
#endif
	}

	co->std_func = std_func;
	co->func = NULL;
	co->ud = NULL;
	co->sch = this;
	co->status = NF_COROUTINE_READY;

	return co;
}

NFCoroutine *NFSchedule::NewCoroutine(NFCoroutineFunc func, void *ud)
{
	NFCoroutine * co = NULL;

	if (co_free_list.empty()) {
		co = new NFCoroutine(stack_size);
	} else {
		co = co_free_list.front();
		co_free_list.pop_front();

		co_free_num--;
#if NF_PLATFORM == NF_PLATFORM_LINUX
#else
		if (co->ctx)
		{
			DeleteFiber(co->ctx);
			co->ctx = NULL;
		}
#endif
	}
	co->func = func;
	co->ud = ud;
	co->sch = this;
	co->status = NF_COROUTINE_READY;

	return co;
}

int64_t NFSchedule::CreateCoroutine(const std::function<void()>& std_func)
{
    NFCoroutine *co = NewCoroutine(std_func);
    int64_t id = nco;
    co_hash_map[id] = co;
    nco++;

    NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} is created.", id);
    return id;
}

/// @brief ??????????????????
/// @param ??????????????????????????????
/// @param ??????????????????????????????
/// @return ??????ID
/// @note ???????????????????????????
int64_t NFSchedule::CreateCoroutine(NFCoroutineFunc func, void *ud)
{
    if (NULL == func) {
        return -1;
    }
    NFCoroutine *co = NewCoroutine(func, ud);
    int64_t id = nco;
    co_hash_map[id] = co;
    nco++;

    NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} is created.", id);
    return id;
}

/// @brief ???????????????????????????
/// @param[in] ??????????????????????????????
/// @param[in] ??????ID
/// @param[in] resume??????????????????????????????0
/// @return ???????????? @see CoroutineErrorCode
/// @note ???????????????????????????
int32_t NFSchedule::CoroutineResume(int64_t id, int32_t result)
{
	if (running != -1) {
		return proto_ff::ERR_CODE_CO_CANNOT_RESUME_IN_COROUTINE;
	}
	auto pos = co_hash_map.find(id);

	// ???????????????????????????????????????????????????????????????????????????
	if (pos == co_hash_map.end()) {
		NFLogError(NF_LOG_SYSTEMLOG, 0, "coroutine {} can't find in co_map", id);
		return proto_ff::ERR_CODE_CO_COROUTINE_UNEXIST;
	}

	NFCoroutine *C = pos->second;
	if (NULL == C) {
		NFLogError(NF_LOG_SYSTEMLOG, 0, "coroutine {} instance is NULL", id);
		return proto_ff::ERR_CODE_CO_COROUTINE_UNEXIST;
	}

	C->result = result;
	int status = C->status;
	switch (status) {
		case NF_COROUTINE_READY: {
            NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} status is COROUTINE_READY, begin to execute...", id);
#if NF_PLATFORM == NF_PLATFORM_LINUX
			getcontext(&C->ctx);
			C->ctx.uc_stack.ss_sp = C->stack;
			C->ctx.uc_stack.ss_size = stack_size;
			C->ctx.uc_stack.ss_flags = 0;
			C->ctx.uc_link = &main;
			running = id;
			C->status = NF_COROUTINE_RUNNING;
			uintptr_t ptr = (uintptr_t)this;
			makecontext(&C->ctx, (void(*)(void)) mainfunc, 2,
				(uint32_t)ptr,  // NOLINT
				(uint32_t)(ptr >> 32));  // NOLINT

			swapcontext(&main, &C->ctx);
#else
			size_t commit_size = 4 * 1024;
			C->ctx = NULL;
			running = id;
			C->status = NF_COROUTINE_RUNNING;
			uintptr_t ptr = (uintptr_t)this;
			C->ctx = CreateFiberEx(commit_size,
				std::max<std::size_t>(stack_size, commit_size), FIBER_FLAG_FLOAT_SWITCH,
				(LPFIBER_START_ROUTINE)mainfunc, (LPVOID)ptr);

			SwitchToFiber(C->ctx);
#endif


			break;
		}
		case NF_COROUTINE_SUSPEND: {
            NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} status is COROUTINE_SUSPEND,"
					"begin to resume...", id);
#if NF_PLATFORM == NF_PLATFORM_LINUX
			running = id;
			C->status = NF_COROUTINE_RUNNING;
			swapcontext(&main, &C->ctx);
#else
			running = id;
			C->status = NF_COROUTINE_RUNNING;

			SwitchToFiber(C->ctx);
#endif
			break;
		}

		default:
			NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} status is failed, can not to be resume...", id);
			return proto_ff::ERR_CODE_CO_COROUTINE_STATUS_ERROR;
	}

	return 0;
}

/// @brief ????????????????????????
/// @param ??????????????????????????????
/// @param ??????ID
/// @return ????????????????????????
int NFSchedule::CoroutineStatus(int64_t id)
{
    if (id < 0 || id > nco) {
        NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} not exist", id);
        return NF_COROUTINE_DEAD;
    }

    auto pos = co_hash_map.find(id);

    // ???????????????????????????????????????????????????????????????????????????
    if (pos == co_hash_map.end()) {
        NFLogTrace(NF_LOG_SYSTEMLOG, 0, "cann't find coroutine {}", id);
        return NF_COROUTINE_DEAD;
    }

    return (pos->second)->status;
}

/// @brief ?????????????????????????????????ID
/// @param ??????????????????????????????
/// @return ???????????????????????????ID
int64_t NFSchedule::CoroutineRunning()
{
    return running;
}

/// @brief ???????????????????????????
/// @return ???????????????@see CoroutineErrorCode
/// @note ???????????????????????????
int32_t NFSchedule::CoroutineYield()
{
	int64_t id = running;
	if (id < 0) {
		NFLogError(NF_LOG_SYSTEMLOG, 0, "have no running coroutine, can't yield.");
		return proto_ff::ERR_CODE_CO_NOT_IN_COROUTINE;;
	}

	assert(id >= 0);
	NFCoroutine * C = co_hash_map[id];

	if (C->status != NF_COROUTINE_RUNNING) {
		NFLogError(NF_LOG_SYSTEMLOG, 0, "coroutine {} status is SUSPEND, can't yield again.", id);
		return proto_ff::ERR_CODE_CO_NOT_RUNNING;
	}

	C->status = NF_COROUTINE_SUSPEND;
	running = -1;

	NFLogTrace(NF_LOG_SYSTEMLOG, 0, "coroutine {} will be yield, swith to main loop...", id);
#if NF_PLATFORM == NF_PLATFORM_LINUX
	swapcontext(&C->ctx, &main);
#else
	SwitchToFiber(main);
#endif

	return C->result;
}
