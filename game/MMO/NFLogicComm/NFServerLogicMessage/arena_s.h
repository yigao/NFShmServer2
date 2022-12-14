#pragma once

#include <stdint.h>
#include <NFComm/NFShmCore/NFShmString.h>
#include <NFComm/NFShmCore/NFArray.h>
#include <NFComm/NFShmCore/NFSeqOP.h>
#include <NFComm/NFShmCore/NFShmMgr.h>
#include "arena.pb.h"
#include "arena_s.h"

namespace proto_ff_s {

	struct arenarobotattrDesc_s : public NFDescStoreSeqOP {
		arenarobotattrDesc_s();
		virtual ~arenarobotattrDesc_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t type;
		int32_t val;

		virtual void write_to_pbmsg(::proto_ff::arenarobotattrDesc & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenarobotattrDesc & msg);
		static ::proto_ff::arenarobotattrDesc* new_pbmsg(){ return new ::proto_ff::arenarobotattrDesc(); }
		static ::proto_ff::arenarobotattrDesc make_pbmsg(){ return ::proto_ff::arenarobotattrDesc(); }
	};
	typedef struct arenarobotattrDesc_s arenarobotattrDesc_t;

	struct arenarobot_s : public NFDescStoreSeqOP {
		arenarobot_s();
		virtual ~arenarobot_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t arenaId;
		NFShmString<60> robotname;
		int32_t aiId;
		int32_t rankId;
		int32_t robotProfession;
		int32_t robotLv;
		int32_t sword;
		int32_t occupationID;
		NFArray<struct arenarobotattrDesc_s, 70> attr;

		virtual void write_to_pbmsg(::proto_ff::arenarobot & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenarobot & msg);
		static ::proto_ff::arenarobot* new_pbmsg(){ return new ::proto_ff::arenarobot(); }
		static ::proto_ff::arenarobot make_pbmsg(){ return ::proto_ff::arenarobot(); }
	};
	typedef struct arenarobot_s arenarobot_t;

	struct Sheet_arenarobot_s : public NFDescStoreSeqOP {
		Sheet_arenarobot_s();
		virtual ~Sheet_arenarobot_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct arenarobot_s, 6000> arenarobot_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_arenarobot & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_arenarobot & msg);
		static ::proto_ff::Sheet_arenarobot* new_pbmsg(){ return new ::proto_ff::Sheet_arenarobot(); }
		static ::proto_ff::Sheet_arenarobot make_pbmsg(){ return ::proto_ff::Sheet_arenarobot(); }
	};
	typedef struct Sheet_arenarobot_s Sheet_arenarobot_t;

	struct arenaarenAwardRewardDesc_s : public NFDescStoreSeqOP {
		arenaarenAwardRewardDesc_s();
		virtual ~arenaarenAwardRewardDesc_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t ID;
		int32_t Value;

		virtual void write_to_pbmsg(::proto_ff::arenaarenAwardRewardDesc & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenaarenAwardRewardDesc & msg);
		static ::proto_ff::arenaarenAwardRewardDesc* new_pbmsg(){ return new ::proto_ff::arenaarenAwardRewardDesc(); }
		static ::proto_ff::arenaarenAwardRewardDesc make_pbmsg(){ return ::proto_ff::arenaarenAwardRewardDesc(); }
	};
	typedef struct arenaarenAwardRewardDesc_s arenaarenAwardRewardDesc_t;

	struct arenaarenAward_s : public NFDescStoreSeqOP {
		arenaarenAward_s();
		virtual ~arenaarenAward_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t id;
		int32_t lvDown;
		int32_t lvUp;
		NFArray<struct arenaarenAwardRewardDesc_s, 5> Reward;

		virtual void write_to_pbmsg(::proto_ff::arenaarenAward & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenaarenAward & msg);
		static ::proto_ff::arenaarenAward* new_pbmsg(){ return new ::proto_ff::arenaarenAward(); }
		static ::proto_ff::arenaarenAward make_pbmsg(){ return ::proto_ff::arenaarenAward(); }
	};
	typedef struct arenaarenAward_s arenaarenAward_t;

	struct Sheet_arenaarenAward_s : public NFDescStoreSeqOP {
		Sheet_arenaarenAward_s();
		virtual ~Sheet_arenaarenAward_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct arenaarenAward_s, 2000> arenaarenAward_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_arenaarenAward & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_arenaarenAward & msg);
		static ::proto_ff::Sheet_arenaarenAward* new_pbmsg(){ return new ::proto_ff::Sheet_arenaarenAward(); }
		static ::proto_ff::Sheet_arenaarenAward make_pbmsg(){ return ::proto_ff::Sheet_arenaarenAward(); }
	};
	typedef struct Sheet_arenaarenAward_s Sheet_arenaarenAward_t;

	struct arenarankawardRewardDesc_s : public NFDescStoreSeqOP {
		arenarankawardRewardDesc_s();
		virtual ~arenarankawardRewardDesc_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t ID;
		int32_t Value;

		virtual void write_to_pbmsg(::proto_ff::arenarankawardRewardDesc & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenarankawardRewardDesc & msg);
		static ::proto_ff::arenarankawardRewardDesc* new_pbmsg(){ return new ::proto_ff::arenarankawardRewardDesc(); }
		static ::proto_ff::arenarankawardRewardDesc make_pbmsg(){ return ::proto_ff::arenarankawardRewardDesc(); }
	};
	typedef struct arenarankawardRewardDesc_s arenarankawardRewardDesc_t;

	struct arenarankaward_s : public NFDescStoreSeqOP {
		arenarankaward_s();
		virtual ~arenarankaward_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t PrizeId;
		int32_t arenaDown;
		int32_t arenaUp;
		NFArray<struct arenarankawardRewardDesc_s, 5> Reward;

		virtual void write_to_pbmsg(::proto_ff::arenarankaward & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenarankaward & msg);
		static ::proto_ff::arenarankaward* new_pbmsg(){ return new ::proto_ff::arenarankaward(); }
		static ::proto_ff::arenarankaward make_pbmsg(){ return ::proto_ff::arenarankaward(); }
	};
	typedef struct arenarankaward_s arenarankaward_t;

	struct Sheet_arenarankaward_s : public NFDescStoreSeqOP {
		Sheet_arenarankaward_s();
		virtual ~Sheet_arenarankaward_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct arenarankaward_s, 20> arenarankaward_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_arenarankaward & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_arenarankaward & msg);
		static ::proto_ff::Sheet_arenarankaward* new_pbmsg(){ return new ::proto_ff::Sheet_arenarankaward(); }
		static ::proto_ff::Sheet_arenarankaward make_pbmsg(){ return ::proto_ff::Sheet_arenarankaward(); }
	};
	typedef struct Sheet_arenarankaward_s Sheet_arenarankaward_t;

	struct arenafirstrankRewardDesc_s : public NFDescStoreSeqOP {
		arenafirstrankRewardDesc_s();
		virtual ~arenafirstrankRewardDesc_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t ID;
		int32_t Value;

		virtual void write_to_pbmsg(::proto_ff::arenafirstrankRewardDesc & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenafirstrankRewardDesc & msg);
		static ::proto_ff::arenafirstrankRewardDesc* new_pbmsg(){ return new ::proto_ff::arenafirstrankRewardDesc(); }
		static ::proto_ff::arenafirstrankRewardDesc make_pbmsg(){ return ::proto_ff::arenafirstrankRewardDesc(); }
	};
	typedef struct arenafirstrankRewardDesc_s arenafirstrankRewardDesc_t;

	struct arenafirstrank_s : public NFDescStoreSeqOP {
		arenafirstrank_s();
		virtual ~arenafirstrank_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t id;
		int32_t rankDown;
		int32_t rankUp;
		NFArray<struct arenafirstrankRewardDesc_s, 5> Reward;

		virtual void write_to_pbmsg(::proto_ff::arenafirstrank & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenafirstrank & msg);
		static ::proto_ff::arenafirstrank* new_pbmsg(){ return new ::proto_ff::arenafirstrank(); }
		static ::proto_ff::arenafirstrank make_pbmsg(){ return ::proto_ff::arenafirstrank(); }
	};
	typedef struct arenafirstrank_s arenafirstrank_t;

	struct Sheet_arenafirstrank_s : public NFDescStoreSeqOP {
		Sheet_arenafirstrank_s();
		virtual ~Sheet_arenafirstrank_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct arenafirstrank_s, 20> arenafirstrank_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_arenafirstrank & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_arenafirstrank & msg);
		static ::proto_ff::Sheet_arenafirstrank* new_pbmsg(){ return new ::proto_ff::Sheet_arenafirstrank(); }
		static ::proto_ff::Sheet_arenafirstrank make_pbmsg(){ return ::proto_ff::Sheet_arenafirstrank(); }
	};
	typedef struct Sheet_arenafirstrank_s Sheet_arenafirstrank_t;

	struct arenabuychallenge_s : public NFDescStoreSeqOP {
		arenabuychallenge_s();
		virtual ~arenabuychallenge_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t count;
		int32_t costType;
		int32_t cost;

		virtual void write_to_pbmsg(::proto_ff::arenabuychallenge & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::arenabuychallenge & msg);
		static ::proto_ff::arenabuychallenge* new_pbmsg(){ return new ::proto_ff::arenabuychallenge(); }
		static ::proto_ff::arenabuychallenge make_pbmsg(){ return ::proto_ff::arenabuychallenge(); }
	};
	typedef struct arenabuychallenge_s arenabuychallenge_t;

	struct Sheet_arenabuychallenge_s : public NFDescStoreSeqOP {
		Sheet_arenabuychallenge_s();
		virtual ~Sheet_arenabuychallenge_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct arenabuychallenge_s, 20> arenabuychallenge_List;

		virtual void write_to_pbmsg(::proto_ff::Sheet_arenabuychallenge & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Sheet_arenabuychallenge & msg);
		static ::proto_ff::Sheet_arenabuychallenge* new_pbmsg(){ return new ::proto_ff::Sheet_arenabuychallenge(); }
		static ::proto_ff::Sheet_arenabuychallenge make_pbmsg(){ return ::proto_ff::Sheet_arenabuychallenge(); }
	};
	typedef struct Sheet_arenabuychallenge_s Sheet_arenabuychallenge_t;

}

