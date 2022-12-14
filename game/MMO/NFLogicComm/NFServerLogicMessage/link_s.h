#pragma once

#include <stdint.h>
#include <NFComm/NFShmCore/NFShmString.h>
#include <NFComm/NFShmCore/NFArray.h>
#include <NFComm/NFShmCore/NFSeqOP.h>
#include <NFComm/NFShmCore/NFShmMgr.h>
#include "link.pb.h"
#include "link_s.h"

namespace proto_ff_s {

	struct linklink_s : public NFDescStoreSeqOP {
		linklink_s();
		virtual ~linklink_s(){}
		int CreateInit();
		int ResumeInit();
		int64_t id;
		NFShmString<60> icon;
		NFShmString<60> dbArgs;
		NFShmString<60> argsm;
		int32_t functionUnlock;
		NFShmString<60> linkNpc;

		virtual void write_to_pbmsg(::proto_ff::linklink & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::linklink & msg);
		static ::proto_ff::linklink* new_pbmsg(){ return new ::proto_ff::linklink(); }
		static ::proto_ff::linklink make_pbmsg(){ return ::proto_ff::linklink(); }
	};
	typedef struct linklink_s linklink_t;

	struct Sheet_linklink_s : public NFDescStoreSeqOP {
		Sheet_linklink_s();
		virtual ~Sheet_linklink_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct linklink_s, 40> linklink_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_linklink & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_linklink & msg);
		static ::proto_ff::Sheet_linklink* new_pbmsg(){ return new ::proto_ff::Sheet_linklink(); }
		static ::proto_ff::Sheet_linklink make_pbmsg(){ return ::proto_ff::Sheet_linklink(); }
	};
	typedef struct Sheet_linklink_s Sheet_linklink_t;

}

