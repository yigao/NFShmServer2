#pragma once

#include <stdint.h>
#include <NFComm/NFShmCore/NFShmString.h>
#include <NFComm/NFShmCore/NFArray.h>
#include <NFComm/NFShmCore/NFSeqOP.h>
#include <NFComm/NFShmCore/NFShmMgr.h>
#include "Com.pb.h"
#include "Com_s.h"
#include "common_logic.pb.h"
#include "common_logic_s.h"
#include "ComDefine.pb.h"
#include "ComDefine_s.h"

namespace proto_ff_s {

	struct EmptyMessage_s : public NFDescStoreSeqOP {
		EmptyMessage_s();
		virtual ~EmptyMessage_s(){}
		int CreateInit();
		int ResumeInit();

		virtual void write_to_pbmsg(::proto_ff::EmptyMessage & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::EmptyMessage & msg);
		static ::proto_ff::EmptyMessage* new_pbmsg(){ return new ::proto_ff::EmptyMessage(); }
		static ::proto_ff::EmptyMessage make_pbmsg(){ return ::proto_ff::EmptyMessage(); }
	};
	typedef struct EmptyMessage_s EmptyMessage_t;

	struct ComPair_s : public NFDescStoreSeqOP {
		ComPair_s();
		virtual ~ComPair_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t key;
		uint32_t value;

		virtual void write_to_pbmsg(::proto_ff::ComPair & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::ComPair & msg);
		static ::proto_ff::ComPair* new_pbmsg(){ return new ::proto_ff::ComPair(); }
		static ::proto_ff::ComPair make_pbmsg(){ return ::proto_ff::ComPair(); }
	};
	typedef struct ComPair_s ComPair_t;

	struct ComPair64_s : public NFDescStoreSeqOP {
		ComPair64_s();
		virtual ~ComPair64_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t key;
		uint64_t value;

		virtual void write_to_pbmsg(::proto_ff::ComPair64 & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::ComPair64 & msg);
		static ::proto_ff::ComPair64* new_pbmsg(){ return new ::proto_ff::ComPair64(); }
		static ::proto_ff::ComPair64 make_pbmsg(){ return ::proto_ff::ComPair64(); }
	};
	typedef struct ComPair64_s ComPair64_t;

	struct ComPairBool_s : public NFDescStoreSeqOP {
		ComPairBool_s();
		virtual ~ComPairBool_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t key;
		bool value;

		virtual void write_to_pbmsg(::proto_ff::ComPairBool & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::ComPairBool & msg);
		static ::proto_ff::ComPairBool* new_pbmsg(){ return new ::proto_ff::ComPairBool(); }
		static ::proto_ff::ComPairBool make_pbmsg(){ return ::proto_ff::ComPairBool(); }
	};
	typedef struct ComPairBool_s ComPairBool_t;

	struct Vector3PB_s : public NFDescStoreSeqOP {
		Vector3PB_s();
		virtual ~Vector3PB_s(){}
		int CreateInit();
		int ResumeInit();
		float x;
		float y;
		float z;

		virtual void write_to_pbmsg(::proto_ff::Vector3PB & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Vector3PB & msg);
		static ::proto_ff::Vector3PB* new_pbmsg(){ return new ::proto_ff::Vector3PB(); }
		static ::proto_ff::Vector3PB make_pbmsg(){ return ::proto_ff::Vector3PB(); }
	};
	typedef struct Vector3PB_s Vector3PB_t;

	struct Vector2PB_s : public NFDescStoreSeqOP {
		Vector2PB_s();
		virtual ~Vector2PB_s(){}
		int CreateInit();
		int ResumeInit();
		float x;
		float y;

		virtual void write_to_pbmsg(::proto_ff::Vector2PB & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Vector2PB & msg);
		static ::proto_ff::Vector2PB* new_pbmsg(){ return new ::proto_ff::Vector2PB(); }
		static ::proto_ff::Vector2PB make_pbmsg(){ return ::proto_ff::Vector2PB(); }
	};
	typedef struct Vector2PB_s Vector2PB_t;

	struct Attr64_s : public NFDescStoreSeqOP {
		Attr64_s();
		virtual ~Attr64_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t id;
		int64_t value;

		virtual void write_to_pbmsg(::proto_ff::Attr64 & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Attr64 & msg);
		static ::proto_ff::Attr64* new_pbmsg(){ return new ::proto_ff::Attr64(); }
		static ::proto_ff::Attr64 make_pbmsg(){ return ::proto_ff::Attr64(); }
	};
	typedef struct Attr64_s Attr64_t;

	struct RoleFacadeProto_s : public NFDescStoreSeqOP {
		RoleFacadeProto_s();
		virtual ~RoleFacadeProto_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct Attr64_s, 200> growFacade;
		int32_t color;

		virtual void write_to_pbmsg(::proto_ff::RoleFacadeProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RoleFacadeProto & msg);
		static ::proto_ff::RoleFacadeProto* new_pbmsg(){ return new ::proto_ff::RoleFacadeProto(); }
		static ::proto_ff::RoleFacadeProto make_pbmsg(){ return ::proto_ff::RoleFacadeProto(); }
	};
	typedef struct RoleFacadeProto_s RoleFacadeProto_t;

	struct RoleListDBProto_s : public NFDescStoreSeqOP {
		RoleListDBProto_s();
		virtual ~RoleListDBProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cid;
		NFShmString<32> name;
		uint32_t prof;
		uint32_t level;
		uint64_t fight;
		uint64_t createtime;
		struct RoleFacadeProto_s facade;
		uint64_t sceneid;
		uint64_t mapid;
		struct Vector3PB_s pos;
		uint64_t lastsceneid;
		uint64_t lastmapid;
		struct Vector3PB_s lastpos;

		virtual void write_to_pbmsg(::proto_ff::RoleListDBProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RoleListDBProto & msg);
		static ::proto_ff::RoleListDBProto* new_pbmsg(){ return new ::proto_ff::RoleListDBProto(); }
		static ::proto_ff::RoleListDBProto make_pbmsg(){ return ::proto_ff::RoleListDBProto(); }
	};
	typedef struct RoleListDBProto_s RoleListDBProto_t;

	struct LoginRoleProto_s : public NFDescStoreSeqOP {
		LoginRoleProto_s();
		virtual ~LoginRoleProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cid;
		NFShmString<32> name;
		uint32_t prof;
		uint32_t level;
		uint64_t fight;
		uint64_t createtime;
		struct RoleFacadeProto_s facade;

		virtual void write_to_pbmsg(::proto_ff::LoginRoleProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::LoginRoleProto & msg);
		static ::proto_ff::LoginRoleProto* new_pbmsg(){ return new ::proto_ff::LoginRoleProto(); }
		static ::proto_ff::LoginRoleProto make_pbmsg(){ return ::proto_ff::LoginRoleProto(); }
	};
	typedef struct LoginRoleProto_s LoginRoleProto_t;

	struct LoginSyncProto_s : public NFDescStoreSeqOP {
		LoginSyncProto_s();
		virtual ~LoginSyncProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t guild_id;
		NFShmString<32> guild_name;
		int32_t guild_duty;
		uint64_t guild_leader;
		uint32_t team_id;
		uint64_t leader;
		int32_t mem_count;
		int32_t cloness_lev;

		virtual void write_to_pbmsg(::proto_ff::LoginSyncProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::LoginSyncProto & msg);
		static ::proto_ff::LoginSyncProto* new_pbmsg(){ return new ::proto_ff::LoginSyncProto(); }
		static ::proto_ff::LoginSyncProto make_pbmsg(){ return ::proto_ff::LoginSyncProto(); }
	};
	typedef struct LoginSyncProto_s LoginSyncProto_t;

	struct CenterRoleProto_s : public NFDescStoreSeqOP {
		CenterRoleProto_s();
		virtual ~CenterRoleProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cid;
		uint32_t uid;
		uint32_t prof;
		uint32_t level;
		uint64_t fight;
		uint64_t lastlogout;
		struct RoleFacadeProto_s facade;
		uint32_t vip_level;
		int64_t hp;
		int64_t max_hp;

		virtual void write_to_pbmsg(::proto_ff::CenterRoleProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CenterRoleProto & msg);
		static ::proto_ff::CenterRoleProto* new_pbmsg(){ return new ::proto_ff::CenterRoleProto(); }
		static ::proto_ff::CenterRoleProto make_pbmsg(){ return ::proto_ff::CenterRoleProto(); }
	};
	typedef struct CenterRoleProto_s CenterRoleProto_t;

	struct SocialRoleProto_s : public NFDescStoreSeqOP {
		SocialRoleProto_s();
		virtual ~SocialRoleProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cid;
		uint32_t uid;
		uint32_t prof;
		uint32_t level;
		uint64_t fight;
		uint64_t lastlogout;
		struct RoleFacadeProto_s facade;
		uint32_t vip_level;
		uint32_t zid;
		bool isonline;
		int64_t hp;
		int64_t max_hp;

		virtual void write_to_pbmsg(::proto_ff::SocialRoleProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::SocialRoleProto & msg);
		static ::proto_ff::SocialRoleProto* new_pbmsg(){ return new ::proto_ff::SocialRoleProto(); }
		static ::proto_ff::SocialRoleProto make_pbmsg(){ return ::proto_ff::SocialRoleProto(); }
	};
	typedef struct SocialRoleProto_s SocialRoleProto_t;

	struct Attr_s : public NFDescStoreSeqOP {
		Attr_s();
		virtual ~Attr_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t id;
		uint32_t value;

		virtual void write_to_pbmsg(::proto_ff::Attr & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::Attr & msg);
		static ::proto_ff::Attr* new_pbmsg(){ return new ::proto_ff::Attr(); }
		static ::proto_ff::Attr make_pbmsg(){ return ::proto_ff::Attr(); }
	};
	typedef struct Attr_s Attr_t;

	struct BlueStarAttr_s : public NFDescStoreSeqOP {
		BlueStarAttr_s();
		virtual ~BlueStarAttr_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t id;
		int64_t value;
		int32_t lv_part;

		virtual void write_to_pbmsg(::proto_ff::BlueStarAttr & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::BlueStarAttr & msg);
		static ::proto_ff::BlueStarAttr* new_pbmsg(){ return new ::proto_ff::BlueStarAttr(); }
		static ::proto_ff::BlueStarAttr make_pbmsg(){ return ::proto_ff::BlueStarAttr(); }
	};
	typedef struct BlueStarAttr_s BlueStarAttr_t;

	struct ItemProtoInfo_s : public NFDescStoreSeqOP {
		ItemProtoInfo_s();
		virtual ~ItemProtoInfo_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t index;
		uint64_t item_id;
		int64_t item_num;
		int32_t bind;
		int32_t level;
		NFArray<struct Attr_s, 200> base;
		NFArray<struct Attr_s, 200> refine;
		NFArray<struct BlueStarAttr_s, 200> blue;
		NFArray<struct Attr_s, 200> god;
		NFArray<struct Attr_s, 200> special;
		uint64_t expireTime;

		virtual void write_to_pbmsg(::proto_ff::ItemProtoInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::ItemProtoInfo & msg);
		static ::proto_ff::ItemProtoInfo* new_pbmsg(){ return new ::proto_ff::ItemProtoInfo(); }
		static ::proto_ff::ItemProtoInfo make_pbmsg(){ return ::proto_ff::ItemProtoInfo(); }
	};
	typedef struct ItemProtoInfo_s ItemProtoInfo_t;

	struct EquipSlotInfo_s : public NFDescStoreSeqOP {
		EquipSlotInfo_s();
		virtual ~EquipSlotInfo_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t slot_pos;
		int64_t total_score;

		virtual void write_to_pbmsg(::proto_ff::EquipSlotInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::EquipSlotInfo & msg);
		static ::proto_ff::EquipSlotInfo* new_pbmsg(){ return new ::proto_ff::EquipSlotInfo(); }
		static ::proto_ff::EquipSlotInfo make_pbmsg(){ return ::proto_ff::EquipSlotInfo(); }
	};
	typedef struct EquipSlotInfo_s EquipSlotInfo_t;

	struct EquipInfo_s : public NFDescStoreSeqOP {
		EquipInfo_s();
		virtual ~EquipInfo_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t pos;
		struct ItemProtoInfo_s equip;
		struct EquipSlotInfo_s slot;

		virtual void write_to_pbmsg(::proto_ff::EquipInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::EquipInfo & msg);
		static ::proto_ff::EquipInfo* new_pbmsg(){ return new ::proto_ff::EquipInfo(); }
		static ::proto_ff::EquipInfo make_pbmsg(){ return ::proto_ff::EquipInfo(); }
	};
	typedef struct EquipInfo_s EquipInfo_t;

	struct ItemSimpleProto_s : public NFDescStoreSeqOP {
		ItemSimpleProto_s();
		virtual ~ItemSimpleProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t itemid;
		int64_t num;
		int32_t bind;

		virtual void write_to_pbmsg(::proto_ff::ItemSimpleProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::ItemSimpleProto & msg);
		static ::proto_ff::ItemSimpleProto* new_pbmsg(){ return new ::proto_ff::ItemSimpleProto(); }
		static ::proto_ff::ItemSimpleProto make_pbmsg(){ return ::proto_ff::ItemSimpleProto(); }
	};
	typedef struct ItemSimpleProto_s ItemSimpleProto_t;

	struct MultItemSimpleProto_s : public NFDescStoreSeqOP {
		MultItemSimpleProto_s();
		virtual ~MultItemSimpleProto_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct ItemSimpleProto_s, 10> info;

		virtual void write_to_pbmsg(::proto_ff::MultItemSimpleProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MultItemSimpleProto & msg);
		static ::proto_ff::MultItemSimpleProto* new_pbmsg(){ return new ::proto_ff::MultItemSimpleProto(); }
		static ::proto_ff::MultItemSimpleProto make_pbmsg(){ return ::proto_ff::MultItemSimpleProto(); }
	};
	typedef struct MultItemSimpleProto_s MultItemSimpleProto_t;

	struct MailParamProto_s : public NFDescStoreSeqOP {
		MailParamProto_s();
		virtual ~MailParamProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cfgid;
		NFArray<NFSizeBuffer<32>, 10> str_param;
		NFArray<uint64_t, 10> int_param;

		virtual void write_to_pbmsg(::proto_ff::MailParamProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MailParamProto & msg);
		static ::proto_ff::MailParamProto* new_pbmsg(){ return new ::proto_ff::MailParamProto(); }
		static ::proto_ff::MailParamProto make_pbmsg(){ return ::proto_ff::MailParamProto(); }
	};
	typedef struct MailParamProto_s MailParamProto_t;

	struct MailStrProto_s : public NFDescStoreSeqOP {
		MailStrProto_s();
		virtual ~MailStrProto_s(){}
		int CreateInit();
		int ResumeInit();
		struct MailParamProto_s param;

		virtual void write_to_pbmsg(::proto_ff::MailStrProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MailStrProto & msg);
		static ::proto_ff::MailStrProto* new_pbmsg(){ return new ::proto_ff::MailStrProto(); }
		static ::proto_ff::MailStrProto make_pbmsg(){ return ::proto_ff::MailStrProto(); }
	};
	typedef struct MailStrProto_s MailStrProto_t;

	struct MailAttachmentList_s : public NFDescStoreSeqOP {
		MailAttachmentList_s();
		virtual ~MailAttachmentList_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct ItemProtoInfo_s, 10> itemInfo;

		virtual void write_to_pbmsg(::proto_ff::MailAttachmentList & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MailAttachmentList & msg);
		static ::proto_ff::MailAttachmentList* new_pbmsg(){ return new ::proto_ff::MailAttachmentList(); }
		static ::proto_ff::MailAttachmentList make_pbmsg(){ return ::proto_ff::MailAttachmentList(); }
	};
	typedef struct MailAttachmentList_s MailAttachmentList_t;

	struct MailHead_s : public NFDescStoreSeqOP {
		MailHead_s();
		virtual ~MailHead_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t mailId;
		uint32_t type;
		uint64_t sendPlayerId;
		uint64_t destPlayerId;
		struct MailStrProto_s topic;
		uint64_t createTime;
		uint32_t status;
		int32_t fetch;
		int32_t has_attach;
		uint64_t begin_time;
		uint64_t end_time;

		virtual void write_to_pbmsg(::proto_ff::MailHead & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MailHead & msg);
		static ::proto_ff::MailHead* new_pbmsg(){ return new ::proto_ff::MailHead(); }
		static ::proto_ff::MailHead make_pbmsg(){ return ::proto_ff::MailHead(); }
	};
	typedef struct MailHead_s MailHead_t;

	struct MailInfo_s : public NFDescStoreSeqOP {
		MailInfo_s();
		virtual ~MailInfo_s(){}
		int CreateInit();
		int ResumeInit();
		struct MailHead_s mailHead;
		struct MailStrProto_s content;
		uint64_t gold;
		uint64_t diamond;
		uint64_t bindDiamond;
		uint64_t magiccrystal;
		uint64_t prestige;
		struct MailAttachmentList_s attachmentList;
		int32_t source;
		int64_t sourceVal;

		virtual void write_to_pbmsg(::proto_ff::MailInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::MailInfo & msg);
		static ::proto_ff::MailInfo* new_pbmsg(){ return new ::proto_ff::MailInfo(); }
		static ::proto_ff::MailInfo make_pbmsg(){ return ::proto_ff::MailInfo(); }
	};
	typedef struct MailInfo_s MailInfo_t;

	struct WebMailItemProto_s : public NFDescStoreSeqOP {
		WebMailItemProto_s();
		virtual ~WebMailItemProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t id;
		uint64_t num;

		virtual void write_to_pbmsg(::proto_ff::WebMailItemProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::WebMailItemProto & msg);
		static ::proto_ff::WebMailItemProto* new_pbmsg(){ return new ::proto_ff::WebMailItemProto(); }
		static ::proto_ff::WebMailItemProto make_pbmsg(){ return ::proto_ff::WebMailItemProto(); }
	};
	typedef struct WebMailItemProto_s WebMailItemProto_t;

	struct WebMailDataProto_s : public NFDescStoreSeqOP {
		WebMailDataProto_s();
		virtual ~WebMailDataProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t mailId;
		uint64_t createTime;
		struct MailStrProto_s topic;
		int32_t fetch;
		struct MailStrProto_s content;
		uint64_t gold;
		uint64_t diamond;
		uint64_t bindDiamond;
		uint64_t arenaScore;
		uint64_t magiccrystal;
		uint64_t prestige;
		NFArray<struct WebMailItemProto_s, 10> itemList;

		virtual void write_to_pbmsg(::proto_ff::WebMailDataProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::WebMailDataProto & msg);
		static ::proto_ff::WebMailDataProto* new_pbmsg(){ return new ::proto_ff::WebMailDataProto(); }
		static ::proto_ff::WebMailDataProto make_pbmsg(){ return ::proto_ff::WebMailDataProto(); }
	};
	typedef struct WebMailDataProto_s WebMailDataProto_t;

	struct UseItemArgProto_s : public NFDescStoreSeqOP {
		UseItemArgProto_s();
		virtual ~UseItemArgProto_s(){}
		int CreateInit();
		int ResumeInit();
		int64_t int_param;
		NFArray<uint64_t, 10> item_lst;

		virtual void write_to_pbmsg(::proto_ff::UseItemArgProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::UseItemArgProto & msg);
		static ::proto_ff::UseItemArgProto* new_pbmsg(){ return new ::proto_ff::UseItemArgProto(); }
		static ::proto_ff::UseItemArgProto make_pbmsg(){ return ::proto_ff::UseItemArgProto(); }
	};
	typedef struct UseItemArgProto_s UseItemArgProto_t;

	struct NotifyRoleFacadeCastRsp_s : public NFDescStoreSeqOP {
		NotifyRoleFacadeCastRsp_s();
		virtual ~NotifyRoleFacadeCastRsp_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t roleid;
		struct RoleFacadeProto_s facade;

		virtual void write_to_pbmsg(::proto_ff::NotifyRoleFacadeCastRsp & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::NotifyRoleFacadeCastRsp & msg);
		static ::proto_ff::NotifyRoleFacadeCastRsp* new_pbmsg(){ return new ::proto_ff::NotifyRoleFacadeCastRsp(); }
		static ::proto_ff::NotifyRoleFacadeCastRsp make_pbmsg(){ return ::proto_ff::NotifyRoleFacadeCastRsp(); }
	};
	typedef struct NotifyRoleFacadeCastRsp_s NotifyRoleFacadeCastRsp_t;

	struct FunctionUnlockInfoData_s : public NFDescStoreSeqOP {
		FunctionUnlockInfoData_s();
		virtual ~FunctionUnlockInfoData_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t unlockId;
		bool get_reward;

		virtual void write_to_pbmsg(::proto_ff::FunctionUnlockInfoData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FunctionUnlockInfoData & msg);
		static ::proto_ff::FunctionUnlockInfoData* new_pbmsg(){ return new ::proto_ff::FunctionUnlockInfoData(); }
		static ::proto_ff::FunctionUnlockInfoData make_pbmsg(){ return ::proto_ff::FunctionUnlockInfoData(); }
	};
	typedef struct FunctionUnlockInfoData_s FunctionUnlockInfoData_t;

	struct FunctionUnlockInfo_s : public NFDescStoreSeqOP {
		FunctionUnlockInfo_s();
		virtual ~FunctionUnlockInfo_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct FunctionUnlockInfoData_s, 100> data;

		virtual void write_to_pbmsg(::proto_ff::FunctionUnlockInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FunctionUnlockInfo & msg);
		static ::proto_ff::FunctionUnlockInfo* new_pbmsg(){ return new ::proto_ff::FunctionUnlockInfo(); }
		static ::proto_ff::FunctionUnlockInfo make_pbmsg(){ return ::proto_ff::FunctionUnlockInfo(); }
	};
	typedef struct FunctionUnlockInfo_s FunctionUnlockInfo_t;

	struct RolePlayerMiniInfo_s : public NFDescStoreSeqOP {
		RolePlayerMiniInfo_s();
		virtual ~RolePlayerMiniInfo_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t playerId;
		NFShmString<32> playerName;
		uint32_t zid;
		uint32_t level;
		uint32_t closeness;
		uint32_t recentType;
		uint64_t recentTime;
		uint32_t prof;
		uint32_t teamId;
		uint32_t unionId;
		uint64_t fightPower;
		uint32_t killMeTimes;
		uint64_t offlineTime;
		NFShmString<32> connect;
		bool online;
		uint32_t vipLevel;
		struct RoleFacadeProto_s facade;
		uint32_t marry;

		virtual void write_to_pbmsg(::proto_ff::RolePlayerMiniInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RolePlayerMiniInfo & msg);
		static ::proto_ff::RolePlayerMiniInfo* new_pbmsg(){ return new ::proto_ff::RolePlayerMiniInfo(); }
		static ::proto_ff::RolePlayerMiniInfo make_pbmsg(){ return ::proto_ff::RolePlayerMiniInfo(); }
	};
	typedef struct RolePlayerMiniInfo_s RolePlayerMiniInfo_t;

	struct FriendInfo_s : public NFDescStoreSeqOP {
		FriendInfo_s();
		virtual ~FriendInfo_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t id;
		uint32_t closeness;
		uint32_t todayCloseness;
		uint64_t updateTime;

		virtual void write_to_pbmsg(::proto_ff::FriendInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FriendInfo & msg);
		static ::proto_ff::FriendInfo* new_pbmsg(){ return new ::proto_ff::FriendInfo(); }
		static ::proto_ff::FriendInfo make_pbmsg(){ return ::proto_ff::FriendInfo(); }
	};
	typedef struct FriendInfo_s FriendInfo_t;

	struct FriendApplyInfo_s : public NFDescStoreSeqOP {
		FriendApplyInfo_s();
		virtual ~FriendApplyInfo_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t id;
		NFShmString<32> connect;

		virtual void write_to_pbmsg(::proto_ff::FriendApplyInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FriendApplyInfo & msg);
		static ::proto_ff::FriendApplyInfo* new_pbmsg(){ return new ::proto_ff::FriendApplyInfo(); }
		static ::proto_ff::FriendApplyInfo make_pbmsg(){ return ::proto_ff::FriendApplyInfo(); }
	};
	typedef struct FriendApplyInfo_s FriendApplyInfo_t;

	struct RelationHateInfo_s : public NFDescStoreSeqOP {
		RelationHateInfo_s();
		virtual ~RelationHateInfo_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t id;
		uint32_t killMeTimes;

		virtual void write_to_pbmsg(::proto_ff::RelationHateInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RelationHateInfo & msg);
		static ::proto_ff::RelationHateInfo* new_pbmsg(){ return new ::proto_ff::RelationHateInfo(); }
		static ::proto_ff::RelationHateInfo make_pbmsg(){ return ::proto_ff::RelationHateInfo(); }
	};
	typedef struct RelationHateInfo_s RelationHateInfo_t;

	struct RelationGiftRecord_s : public NFDescStoreSeqOP {
		RelationGiftRecord_s();
		virtual ~RelationGiftRecord_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t friendId;
		uint64_t itemId;
		uint32_t isThanks;

		virtual void write_to_pbmsg(::proto_ff::RelationGiftRecord & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RelationGiftRecord & msg);
		static ::proto_ff::RelationGiftRecord* new_pbmsg(){ return new ::proto_ff::RelationGiftRecord(); }
		static ::proto_ff::RelationGiftRecord make_pbmsg(){ return ::proto_ff::RelationGiftRecord(); }
	};
	typedef struct RelationGiftRecord_s RelationGiftRecord_t;

	struct RelationDBInfo_s : public NFDescStoreSeqOP {
		RelationDBInfo_s();
		virtual ~RelationDBInfo_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct FriendInfo_s, 10> friendList;
		NFArray<uint64_t, 10> blackList;
		NFArray<struct RelationHateInfo_s, 10> hateList;
		NFArray<struct FriendApplyInfo_s, 10> applyList;
		uint32_t friends_add;
		NFArray<struct RelationGiftRecord_s, 10> giftRecords;

		virtual void write_to_pbmsg(::proto_ff::RelationDBInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::RelationDBInfo & msg);
		static ::proto_ff::RelationDBInfo* new_pbmsg(){ return new ::proto_ff::RelationDBInfo(); }
		static ::proto_ff::RelationDBInfo make_pbmsg(){ return ::proto_ff::RelationDBInfo(); }
	};
	typedef struct RelationDBInfo_s RelationDBInfo_t;

	struct DigPerfor_s : public NFDescStoreSeqOP {
		DigPerfor_s();
		virtual ~DigPerfor_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t type;
		int64_t value;

		virtual void write_to_pbmsg(::proto_ff::DigPerfor & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DigPerfor & msg);
		static ::proto_ff::DigPerfor* new_pbmsg(){ return new ::proto_ff::DigPerfor(); }
		static ::proto_ff::DigPerfor make_pbmsg(){ return ::proto_ff::DigPerfor(); }
	};
	typedef struct DigPerfor_s DigPerfor_t;

	struct BuffProto_s : public NFDescStoreSeqOP {
		BuffProto_s();
		virtual ~BuffProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t buff_index;
		uint64_t buff_id;
		uint64_t recver_cid;
		int32_t left_msec;
		uint64_t skill_id;
		int32_t skill_lev;
		int32_t is_effect;

		virtual void write_to_pbmsg(::proto_ff::BuffProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::BuffProto & msg);
		static ::proto_ff::BuffProto* new_pbmsg(){ return new ::proto_ff::BuffProto(); }
		static ::proto_ff::BuffProto make_pbmsg(){ return ::proto_ff::BuffProto(); }
	};
	typedef struct BuffProto_s BuffProto_t;

	struct BuffListProto_s : public NFDescStoreSeqOP {
		BuffListProto_s();
		virtual ~BuffListProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t cid;
		NFArray<struct BuffProto_s, 10> info;

		virtual void write_to_pbmsg(::proto_ff::BuffListProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::BuffListProto & msg);
		static ::proto_ff::BuffListProto* new_pbmsg(){ return new ::proto_ff::BuffListProto(); }
		static ::proto_ff::BuffListProto make_pbmsg(){ return ::proto_ff::BuffListProto(); }
	};
	typedef struct BuffListProto_s BuffListProto_t;

	struct SkillPosProto_s : public NFDescStoreSeqOP {
		SkillPosProto_s();
		virtual ~SkillPosProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t skill_id;
		uint32_t pos;
		int32_t cd;

		virtual void write_to_pbmsg(::proto_ff::SkillPosProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::SkillPosProto & msg);
		static ::proto_ff::SkillPosProto* new_pbmsg(){ return new ::proto_ff::SkillPosProto(); }
		static ::proto_ff::SkillPosProto make_pbmsg(){ return ::proto_ff::SkillPosProto(); }
	};
	typedef struct SkillPosProto_s SkillPosProto_t;

	struct SkillGroupProto_s : public NFDescStoreSeqOP {
		SkillGroupProto_s();
		virtual ~SkillGroupProto_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t group;
		int32_t cd;
		NFArray<struct SkillPosProto_s, 10> lst;

		virtual void write_to_pbmsg(::proto_ff::SkillGroupProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::SkillGroupProto & msg);
		static ::proto_ff::SkillGroupProto* new_pbmsg(){ return new ::proto_ff::SkillGroupProto(); }
		static ::proto_ff::SkillGroupProto make_pbmsg(){ return ::proto_ff::SkillGroupProto(); }
	};
	typedef struct SkillGroupProto_s SkillGroupProto_t;

	struct SkillGroupListProto_s : public NFDescStoreSeqOP {
		SkillGroupListProto_s();
		virtual ~SkillGroupListProto_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct SkillGroupProto_s, 10> info;

		virtual void write_to_pbmsg(::proto_ff::SkillGroupListProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::SkillGroupListProto & msg);
		static ::proto_ff::SkillGroupListProto* new_pbmsg(){ return new ::proto_ff::SkillGroupListProto(); }
		static ::proto_ff::SkillGroupListProto make_pbmsg(){ return ::proto_ff::SkillGroupListProto(); }
	};
	typedef struct SkillGroupListProto_s SkillGroupListProto_t;

	struct FacadeFantasyData_s : public NFDescStoreSeqOP {
		FacadeFantasyData_s();
		virtual ~FacadeFantasyData_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t fantasy_id;
		uint32_t fantasy_lev;

		virtual void write_to_pbmsg(::proto_ff::FacadeFantasyData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FacadeFantasyData & msg);
		static ::proto_ff::FacadeFantasyData* new_pbmsg(){ return new ::proto_ff::FacadeFantasyData(); }
		static ::proto_ff::FacadeFantasyData make_pbmsg(){ return ::proto_ff::FacadeFantasyData(); }
	};
	typedef struct FacadeFantasyData_s FacadeFantasyData_t;

	struct FacadeFragmentData_s : public NFDescStoreSeqOP {
		FacadeFragmentData_s();
		virtual ~FacadeFragmentData_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t fragment_id;
		uint32_t use_times;

		virtual void write_to_pbmsg(::proto_ff::FacadeFragmentData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FacadeFragmentData & msg);
		static ::proto_ff::FacadeFragmentData* new_pbmsg(){ return new ::proto_ff::FacadeFragmentData(); }
		static ::proto_ff::FacadeFragmentData make_pbmsg(){ return ::proto_ff::FacadeFragmentData(); }
	};
	typedef struct FacadeFragmentData_s FacadeFragmentData_t;

	struct FacadeSkillData_s : public NFDescStoreSeqOP {
		FacadeSkillData_s();
		virtual ~FacadeSkillData_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t skill_id;
		uint32_t skill_lev;

		virtual void write_to_pbmsg(::proto_ff::FacadeSkillData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::FacadeSkillData & msg);
		static ::proto_ff::FacadeSkillData* new_pbmsg(){ return new ::proto_ff::FacadeSkillData(); }
		static ::proto_ff::FacadeSkillData make_pbmsg(){ return ::proto_ff::FacadeSkillData(); }
	};
	typedef struct FacadeSkillData_s FacadeSkillData_t;

	struct StatisticDataProto_s : public NFDescStoreSeqOP {
		StatisticDataProto_s();
		virtual ~StatisticDataProto_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t level;
		uint32_t total_login_day;
		uint32_t total_rmb;
		uint32_t today_rmb;
		uint32_t total_activityCount;

		virtual void write_to_pbmsg(::proto_ff::StatisticDataProto & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::StatisticDataProto & msg);
		static ::proto_ff::StatisticDataProto* new_pbmsg(){ return new ::proto_ff::StatisticDataProto(); }
		static ::proto_ff::StatisticDataProto make_pbmsg(){ return ::proto_ff::StatisticDataProto(); }
	};
	typedef struct StatisticDataProto_s StatisticDataProto_t;

	struct GodRelicsTaskEntry_s : public NFDescStoreSeqOP {
		GodRelicsTaskEntry_s();
		virtual ~GodRelicsTaskEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t task_cfg_id;
		int32_t cur_num;
		int32_t task_state;

		virtual void write_to_pbmsg(::proto_ff::GodRelicsTaskEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::GodRelicsTaskEntry & msg);
		static ::proto_ff::GodRelicsTaskEntry* new_pbmsg(){ return new ::proto_ff::GodRelicsTaskEntry(); }
		static ::proto_ff::GodRelicsTaskEntry make_pbmsg(){ return ::proto_ff::GodRelicsTaskEntry(); }
	};
	typedef struct GodRelicsTaskEntry_s GodRelicsTaskEntry_t;

	struct GodRelicsTaskGroupEntry_s : public NFDescStoreSeqOP {
		GodRelicsTaskGroupEntry_s();
		virtual ~GodRelicsTaskGroupEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t group_cfg_id;
		NFArray<struct GodRelicsTaskEntry_s, 10> entrys;
		int32_t normal_reward_state;
		uint64_t create_time;

		virtual void write_to_pbmsg(::proto_ff::GodRelicsTaskGroupEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::GodRelicsTaskGroupEntry & msg);
		static ::proto_ff::GodRelicsTaskGroupEntry* new_pbmsg(){ return new ::proto_ff::GodRelicsTaskGroupEntry(); }
		static ::proto_ff::GodRelicsTaskGroupEntry make_pbmsg(){ return ::proto_ff::GodRelicsTaskGroupEntry(); }
	};
	typedef struct GodRelicsTaskGroupEntry_s GodRelicsTaskGroupEntry_t;

	struct DailyTaskEntry_s : public NFDescStoreSeqOP {
		DailyTaskEntry_s();
		virtual ~DailyTaskEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t task_cfg_id;
		int32_t cur_num;
		int32_t task_state;
		uint64_t last_time;
		int32_t buy_num;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskEntry & msg);
		static ::proto_ff::DailyTaskEntry* new_pbmsg(){ return new ::proto_ff::DailyTaskEntry(); }
		static ::proto_ff::DailyTaskEntry make_pbmsg(){ return ::proto_ff::DailyTaskEntry(); }
	};
	typedef struct DailyTaskEntry_s DailyTaskEntry_t;

	struct DailyTaskLimitEntry_s : public NFDescStoreSeqOP {
		DailyTaskLimitEntry_s();
		virtual ~DailyTaskLimitEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t task_cfg_id;
		int32_t cur_num;
		int32_t task_state;
		uint64_t last_time;
		int32_t buy_num;
		bool ready_add;
		bool is_open;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskLimitEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskLimitEntry & msg);
		static ::proto_ff::DailyTaskLimitEntry* new_pbmsg(){ return new ::proto_ff::DailyTaskLimitEntry(); }
		static ::proto_ff::DailyTaskLimitEntry make_pbmsg(){ return ::proto_ff::DailyTaskLimitEntry(); }
	};
	typedef struct DailyTaskLimitEntry_s DailyTaskLimitEntry_t;

	struct DailyTaskBackDayEntry_s : public NFDescStoreSeqOP {
		DailyTaskBackDayEntry_s();
		virtual ~DailyTaskBackDayEntry_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t left_num;
		int32_t external_left_num;
		int64_t last_time;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskBackDayEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskBackDayEntry & msg);
		static ::proto_ff::DailyTaskBackDayEntry* new_pbmsg(){ return new ::proto_ff::DailyTaskBackDayEntry(); }
		static ::proto_ff::DailyTaskBackDayEntry make_pbmsg(){ return ::proto_ff::DailyTaskBackDayEntry(); }
	};
	typedef struct DailyTaskBackDayEntry_s DailyTaskBackDayEntry_t;

	struct DailyTaskBackEntry_s : public NFDescStoreSeqOP {
		DailyTaskBackEntry_s();
		virtual ~DailyTaskBackEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t task_cfg_id;
		int32_t task_state;
		NFArray<struct DailyTaskBackDayEntry_s, 10> day_data;
		int32_t left_num;
		int32_t external_left_num;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskBackEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskBackEntry & msg);
		static ::proto_ff::DailyTaskBackEntry* new_pbmsg(){ return new ::proto_ff::DailyTaskBackEntry(); }
		static ::proto_ff::DailyTaskBackEntry make_pbmsg(){ return ::proto_ff::DailyTaskBackEntry(); }
	};
	typedef struct DailyTaskBackEntry_s DailyTaskBackEntry_t;

	struct DailyTaskRewardEntry_s : public NFDescStoreSeqOP {
		DailyTaskRewardEntry_s();
		virtual ~DailyTaskRewardEntry_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t reward_id;
		int32_t state;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskRewardEntry & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskRewardEntry & msg);
		static ::proto_ff::DailyTaskRewardEntry* new_pbmsg(){ return new ::proto_ff::DailyTaskRewardEntry(); }
		static ::proto_ff::DailyTaskRewardEntry make_pbmsg(){ return ::proto_ff::DailyTaskRewardEntry(); }
	};
	typedef struct DailyTaskRewardEntry_s DailyTaskRewardEntry_t;

	struct DailyTaskAllData_s : public NFDescStoreSeqOP {
		DailyTaskAllData_s();
		virtual ~DailyTaskAllData_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct DailyTaskEntry_s, 10> task_data;
		NFArray<struct DailyTaskLimitEntry_s, 10> task_limit_data;
		NFArray<struct DailyTaskBackEntry_s, 10> back_data;
		NFArray<struct DailyTaskRewardEntry_s, 10> reward_data;
		uint32_t daily_score;
		uint32_t daily_level;
		uint64_t create_time;
		uint64_t daily_exp;

		virtual void write_to_pbmsg(::proto_ff::DailyTaskAllData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::DailyTaskAllData & msg);
		static ::proto_ff::DailyTaskAllData* new_pbmsg(){ return new ::proto_ff::DailyTaskAllData(); }
		static ::proto_ff::DailyTaskAllData make_pbmsg(){ return ::proto_ff::DailyTaskAllData(); }
	};
	typedef struct DailyTaskAllData_s DailyTaskAllData_t;

	struct CharacterDBRecentSubmitMission_s : public NFDescStoreSeqOP {
		CharacterDBRecentSubmitMission_s();
		virtual ~CharacterDBRecentSubmitMission_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t mission_type;
		uint64_t mission_id;

		virtual void write_to_pbmsg(::proto_ff::CharacterDBRecentSubmitMission & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CharacterDBRecentSubmitMission & msg);
		static ::proto_ff::CharacterDBRecentSubmitMission* new_pbmsg(){ return new ::proto_ff::CharacterDBRecentSubmitMission(); }
		static ::proto_ff::CharacterDBRecentSubmitMission make_pbmsg(){ return ::proto_ff::CharacterDBRecentSubmitMission(); }
	};
	typedef struct CharacterDBRecentSubmitMission_s CharacterDBRecentSubmitMission_t;

	struct CharacterDBMissionItemInfo_s : public NFDescStoreSeqOP {
		CharacterDBMissionItemInfo_s();
		virtual ~CharacterDBMissionItemInfo_s(){}
		int CreateInit();
		int ResumeInit();
		uint32_t type;
		uint64_t id;
		uint32_t currentValue;
		uint32_t finalValue;
		bool completedFlag;
		uint64_t parma1;
		uint64_t parma2;
		uint64_t parma3;

		virtual void write_to_pbmsg(::proto_ff::CharacterDBMissionItemInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CharacterDBMissionItemInfo & msg);
		static ::proto_ff::CharacterDBMissionItemInfo* new_pbmsg(){ return new ::proto_ff::CharacterDBMissionItemInfo(); }
		static ::proto_ff::CharacterDBMissionItemInfo make_pbmsg(){ return ::proto_ff::CharacterDBMissionItemInfo(); }
	};
	typedef struct CharacterDBMissionItemInfo_s CharacterDBMissionItemInfo_t;

	struct CharacterDBMissionTrack_s : public NFDescStoreSeqOP {
		CharacterDBMissionTrack_s();
		virtual ~CharacterDBMissionTrack_s(){}
		int CreateInit();
		int ResumeInit();
		uint64_t missionId;
		uint64_t dynamicid;
		uint32_t status;
		uint64_t acceptMissionTime;
		NFArray<struct CharacterDBMissionItemInfo_s, 10> itemInfo;
		uint64_t textid;

		virtual void write_to_pbmsg(::proto_ff::CharacterDBMissionTrack & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CharacterDBMissionTrack & msg);
		static ::proto_ff::CharacterDBMissionTrack* new_pbmsg(){ return new ::proto_ff::CharacterDBMissionTrack(); }
		static ::proto_ff::CharacterDBMissionTrack make_pbmsg(){ return ::proto_ff::CharacterDBMissionTrack(); }
	};
	typedef struct CharacterDBMissionTrack_s CharacterDBMissionTrack_t;

	struct CharacterDBDyMissionInfo_s : public NFDescStoreSeqOP {
		CharacterDBDyMissionInfo_s();
		virtual ~CharacterDBDyMissionInfo_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t mission_type;
		uint64_t lastfresh;
		int32_t accept_num;

		virtual void write_to_pbmsg(::proto_ff::CharacterDBDyMissionInfo & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CharacterDBDyMissionInfo & msg);
		static ::proto_ff::CharacterDBDyMissionInfo* new_pbmsg(){ return new ::proto_ff::CharacterDBDyMissionInfo(); }
		static ::proto_ff::CharacterDBDyMissionInfo make_pbmsg(){ return ::proto_ff::CharacterDBDyMissionInfo(); }
	};
	typedef struct CharacterDBDyMissionInfo_s CharacterDBDyMissionInfo_t;

	struct CharacterDBTaskData_s : public NFDescStoreSeqOP {
		CharacterDBTaskData_s();
		virtual ~CharacterDBTaskData_s(){}
		int CreateInit();
		int ResumeInit();
		NFArray<struct CharacterDBMissionTrack_s, 10> missionTrack;
		NFArray<struct CharacterDBDyMissionInfo_s, 10> dyinfo;
		NFArray<uint64_t, 10> already_submit;
		NFArray<struct CharacterDBRecentSubmitMission_s, 10> recent_submit;

		virtual void write_to_pbmsg(::proto_ff::CharacterDBTaskData & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::CharacterDBTaskData & msg);
		static ::proto_ff::CharacterDBTaskData* new_pbmsg(){ return new ::proto_ff::CharacterDBTaskData(); }
		static ::proto_ff::CharacterDBTaskData make_pbmsg(){ return ::proto_ff::CharacterDBTaskData(); }
	};
	typedef struct CharacterDBTaskData_s CharacterDBTaskData_t;

	struct NotifyVipDataRsp_s : public NFDescStoreSeqOP {
		NotifyVipDataRsp_s();
		virtual ~NotifyVipDataRsp_s(){}
		int CreateInit();
		int ResumeInit();
		int32_t exp;
		NFArray<int32_t, 10> ids;

		virtual void write_to_pbmsg(::proto_ff::NotifyVipDataRsp & msg) const;
		virtual void read_from_pbmsg(const ::proto_ff::NotifyVipDataRsp & msg);
		static ::proto_ff::NotifyVipDataRsp* new_pbmsg(){ return new ::proto_ff::NotifyVipDataRsp(); }
		static ::proto_ff::NotifyVipDataRsp make_pbmsg(){ return ::proto_ff::NotifyVipDataRsp(); }
	};
	typedef struct NotifyVipDataRsp_s NotifyVipDataRsp_t;

}

