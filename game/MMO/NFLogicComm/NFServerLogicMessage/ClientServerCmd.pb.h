// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientServerCmd.proto

#ifndef PROTOBUF_ClientServerCmd_2eproto__INCLUDED
#define PROTOBUF_ClientServerCmd_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include "yd_fieldoptions.pb.h"
// @@protoc_insertion_point(includes)

namespace proto_ff {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ClientServerCmd_2eproto();
void protobuf_AssignDesc_ClientServerCmd_2eproto();
void protobuf_ShutdownFile_ClientServerCmd_2eproto();


enum ClientServerCmd {
  CLIENT_LOGIN_REQ = 1,
  CLIENT_LOGIN_RSP = 2,
  CLIENT_CREATE_ROLE_REQ = 3,
  CLIENT_CREATE_ROLE_RSP = 4,
  CLIENT_QUEUE_POS_REQ = 5,
  CLIENT_QUEUE_POS_RSP = 6,
  CLIENT_QUEUE_CANCEL_REQ = 7,
  CLIENT_QUEUE_CANCEL_RSP = 8,
  CLIENT_RECONNECT_REQ = 9,
  CLIENT_RECONNECT_RSP = 10,
  CLIENT_ENTER_GAME_REQ = 11,
  CLIENT_ENTER_GAME_RSP = 12,
  CLIENT_RET_ROLE_LIST_REQ = 13,
  CLIENT_RET_ROLE_LIST_RSP = 14,
  CLIENT_PING_REQ = 15,
  CLIENT_PING_RSP = 16,
  NOTIFY_CLIENT_CREATURE_CREATE = 101,
  NOTIFY_CLIENT_CREATURE_DESTORY = 102,
  BROAD_CHG_NAME = 103,
  NOTIFY_CLIENT_LOAD_MAP = 151,
  NOTIFY_CLIENT_TRANS_SCENE_RSP = 152,
  CLIENT_LOAD_MAP_FINISH = 153,
  CLIENT_SCENE_TRANS_REQ = 154,
  NOTIFY_SCENE_CORPSE_INFO_RSP = 155,
  NOTIFY_SCENE_DRIVE_RSP = 156,
  CLIENT_PACKAGE_INFO_REQ = 200,
  CLIENT_PACKAGE_INFO_RSP = 201,
  CLIENT_PACKAGE_SORT_REQ = 202,
  CLIENT_PACKAGE_SORT_RSP = 203,
  CLIENT_STORAGE_OPERATE_REQ = 204,
  CLIENT_STORAGE_OPERATE_RSP = 205,
  NOTIFY_PACKAGE_UPDATE = 206,
  CLIENT_TO_LOGIC_PACKAGE_USE = 207,
  LOGIC_TO_CLIENT_PACKAGE_USE = 208,
  CLIENT_PLAYER_INFO_RSP = 251,
  CREATURE_ATTR_SYN = 252,
  CREATURE_ATTR_BROAD = 253,
  CLIENT_SHOW_INFO_RSP = 254,
  NOTIFY_FACADE_CAST_RSP = 255,
  CLIENT_CHG_NAME_REQ = 256,
  CLIENT_CHG_NAME_RSP = 257,
  CREATURE_STATE_BROAD = 258,
  CLIENT_TO_LOGIC_PLAYER_SEAT_REQ = 259,
  LOGIC_TO_CLIENT_SEAT_RSP = 260,
  LOGIC_TO_CLIENT_SEAT_EXP_RSP = 261,
  CLIENT_TO_LOGIC_LOGIN_HANGUP_DATA_REQ = 262,
  LOGIC_TO_CLIENT_LOGIN_HANGUP_DATA_RSP = 263,
  CLIENT_TO_LOGIC_GET_HANGUP_REWARD_REQ = 264,
  LOGIC_TO_CLIENT_GET_HANGUP_REWARD_RSP = 265,
  CLIENT_GM_REQ = 270,
  CLIENT_GM_RSP = 271,
  NOTIFY_GROW_RSP = 281,
  CLIENT_GROW_LVUP_REQ = 282,
  CLIENT_GROW_LVUP_RSP = 283,
  CLIENT_GROW_FACADE_DRESS_REQ = 284,
  CLIENT_GROW_FACADE_DRESS_RSP = 285,
  CLIENT_GROW_FACADE_UNDRESS_REQ = 286,
  CLIENT_GROW_FACADE_UNDRESS_RSP = 287,
  CLIENT_EQUIP_DRESS_REQ = 300,
  CLIENT_EQUIP_DRESS_RSP = 301,
  CLIENT_EQUIP_UNDRESS_REQ = 302,
  CLIENT_EQUIP_UNDRESS_RSP = 303,
  NOTIFY_EQUIP_INFO_RSP = 304,
  CLIENT_TO_SERVER_MISSION_BEGIN = 350,
  CLIENT_TO_LOGIC_QUERY_MiSSIONLIST = 351,
  LOGIC_TO_CLIENT_QUERY_MiSSIONLIST = 352,
  CLIENT_TO_LOGIC_ACCEPTMISSION = 353,
  LOGIC_TO_CLIENT_ACCEPTMISSION = 354,
  CLIENT_TO_LOGIC_ABANDONMISSION = 355,
  LOGIC_TO_CLIENT_ABANDONMISSION = 356,
  CLIENT_TO_LOGIC_SUBMITMISSION = 357,
  LOGIC_TO_CLIENT_SUBMITMISSION = 358,
  CLIENT_TO_LOGIC_TALKWITHNPC = 359,
  CLIENT_TO_LOGIC_SUBMITMISSIONGOODS = 361,
  LOGIC_TO_CLIENT_SUBMITMISSIONGOODS = 362,
  CLIENT_TO_LOGIC_NPC_ACCEPTMISSION = 363,
  LOGIC_TO_CLIENT_NPC_ACCEPTMISSION = 364,
  CLIENT_TO_LOGIC_MISSION_ONEKEY_FINISH = 365,
  LOGIC_TO_CLIENT_MISSION_ONEKEY_FINISH = 366,
  CLIENT_TO_LOGIC_MISSION_ONCE_FINISH = 367,
  LOGIC_TO_CLIENT_MISSION_ONCE_FINISH = 368,
  LOGIC_TO_CLIENT_UPDATEMISSIONSTATUSNOTIFY = 370,
  LOGIC_TO_CLIENT_UPDDATE_DY_ACCEPT_NUM = 371,
  LOGIC_TO_CLIENT_RECEIVEMISSIONNOTIFY = 372,
  LOGIC_TO_CLIENT_GCDELETEMISSIONNOTIFY = 373,
  CLIENT_TO_SERVER_MISSION_END = 400,
  CLIENT_SERVER_CHAT_BEGIN = 430,
  CLIENT_TO_LOGIC_CHAT_MSG_REQ = 431,
  LOGIC_TO_CLIENT_CHAT_MSG_RSP = 432,
  CLIENT_TO_CENTER_ASK_OFFLINE_MSG_REQ = 433,
  CENTER_TO_CLIENT_ASK_OFFLINE_MSG_RSP = 434,
  CLIENT_TO_CENTER_INTRVAL_ASK_OFFLINE_MSG_REQ = 435,
  CENTER_TO_CLIENT_INTRVAL_ASK_OFFLINE_MSG_RSP = 436,
  LOGIC_TO_CLIENT_SYSTEM_CHAT_MSG_NOTIFY = 437,
  SERVER_TO_CLIENT_SHOW_MESSAGE_NOTIFY = 438,
  CLIENT_SERVER_CHAT_END = 450,
  CLIENT_TO_SERVER_FRIEND_BEGIN = 460,
  CLIENT_TO_CENTER_RELATION_DATA_REQ = 461,
  CENTER_TO_CLIENT_RELATION_DATA_RSP = 462,
  CLIENT_TO_CENTER_FRIEND_APPLY_REQ = 463,
  CENTER_TO_CLIENT_FRIEND_APPLY_RSP = 464,
  CLIENT_TO_CENTER_AGREE_APPLY_REQ = 465,
  CENTER_TO_CLIENT_AGREE_APPLY_RSP = 466,
  CENTER_TO_CLIENT_SYNC_RELATION_NOTIFY = 467,
  CENTER_TO_CLIENT_RELATION_ONLINE_NOTIFY = 468,
  CLIENT_TO_CENTER_ADD_BLACK_REQ = 469,
  CENTER_TO_CLIENT_ADD_BLACK_RSP = 470,
  CLIENT_TO_CENTER_DELETE_RELATION_REQ = 471,
  CENTER_TO_CLIENT_DELETE_RELATION_RSP = 472,
  CENTER_TO_CLIENT_SYNC_DELRELATION_NOTIFY = 473,
  CLIENT_TO_CENTER_RECOMMEND_FRIEND_REQ = 474,
  CENTER_TO_CLIENT_RECOMMEND_FRIEND_RSP = 475,
  CLIENT_TO_CENTER_ADD_SHIELD_RELATION_REQ = 476,
  CENTER_TO_CLIENT_ADD_SHIELD_RELATION_RSP = 477,
  CLIENT_TO_CENTER_GIFT_GIVING_RECORD_REQ = 490,
  CENTER_TO_CLIENT_GIFT_GIVING_RECORD_RSP = 491,
  CLIENT_TO_CENTER_GIVING_GIFT_REQ = 492,
  CENTER_TO_CLIENT_GIVING_GIFT_RSP = 493,
  CENTER_TO_CLIENT_GIVING_GIFT_NOTICE = 494,
  CLIENT_TO_CENTER_THANKS_GIVING_GIFT = 495,
  CLIENT_TO_SERVER_FRIEND_END = 500,
  CLIENT_TO_CENTER_QUERY_BEGIN = 501,
  CLIENT_TO_CENTER_CHARACTER_DETAIL_DATA = 502,
  CENTER_TO_CLIENT_CHARACTER_DETAIL_DATA = 503,
  CLIENT_TO_CENTER_CHARACTER_MINI_DATA = 504,
  CENTER_TO_CLIENT_CHARACTER_MINI_DATA = 505,
  CLIENT_TO_CENTER_CHAR_FUNC_FIGHT_DATA = 506,
  CENTER_TO_CLIENT_CHAR_FUNC_FIGHT_DATA = 507,
  CLIENT_TO_CENTER_QUERY_END = 510,
  CLIENT_SERVER_MAIL_BEGIN = 560,
  CLIENT_TO_CENTER_GETMAILITEMLIST_REQ = 561,
  SERVER_TO_CLIENT_GETMAILITEMLIST_RSP = 562,
  CLIENT_TO_CENTER_ASKMAIL_REQ = 563,
  SERVER_TO_CLIENT_ASKMAIL_RSP = 564,
  CLIENT_TO_CENTER_DELETEMAIL_REQ = 565,
  SERVER_TO_CLIENT_DELETEMAIL_RSP = 566,
  CLIENT_TO_CENTER_GETALLMAILATTACHMENT_REQ = 567,
  SERVER_TO_CLIENT_GETALLMAILATTACHMENT_RSP = 568,
  CLIENT_TO_CENTER_GETMAILATTACHMENT_REQ = 570,
  SERVER_TO_CLIENT_GETMAILATTACHMENT_RSP = 569,
  SERVER_TO_CLIENT_UNREADMAIL_NOTIFY = 571,
  SERVER_TO_CLIENT_NEWMAIL_NOTIFY = 572,
  CLIENT_SERVER_MAIL_END = 579,
  SERVER_TO_CLIENT_FUNCTIONUNLOCK_NOTIFY = 580,
  SERVER_TO_CLIENT_FUNCTIONUNLOCK_INFO = 581,
  CLIENT_TO_SERVER_FUNCTIONUNLOCK_GET_REWARD_REQ = 582,
  SERVER_TO_CLIENT_FUNCTIONUNLOCK_GET_REWARD_RSP = 583,
  CLIENT_MOVE_REQ = 601,
  MOVE_BROAD_RSP = 602,
  MOVE_TELEPORT_RSP = 603,
  PLAYER_RELIVE_NOTIFY = 651,
  PLAYER_RELIVE_REQ = 652,
  PLAYER_RELIVE_RSP = 653,
  SKILL_USE_REQ = 701,
  SKILL_TARGET_SYNC_REQ = 702,
  SKILL_USE_RESULT_BROAD = 703,
  SKILL_USE_BROAD_RSP = 704,
  SKILL_WARN_BROAD_RSP = 705,
  SKILL_CANCEL_USE_REQ = 706,
  SKILL_CANCEL_USE_BROAD_RSP = 707,
  SKILL_GROUP_UPDATE_RSP = 708,
  SKILL_INFO_REQ = 709,
  SKILL_INFO_RSP = 710,
  SKILL_INFO_UPDATE_RSP = 711,
  SKILL_GROUP_CHG_REQ = 712,
  SKILL_GROUP_CHG_RSP = 713,
  SKILL_INFO_DEL_RSP = 714,
  SKILL_WAKE_UP_REQ = 715,
  SKILL_WAKE_UP_RSP = 716,
  SKILL_CHG_POS_REQ = 717,
  SKILL_CHG_POS_RSP = 718,
  BUFF_LIST_REQ = 751,
  BUFF_LIST_RSP = 752,
  BUFF_UPDATE_RSP = 753,
  BUFF_DEL_RSP = 754,
  BUFF_EFFECT_BROAD_RSP = 755,
  NOTIFY_BOSS_SIMPLE_RSP = 850,
  BOSS_DATA_REQ = 851,
  BOSS_DATA_RSP = 852,
  NOTIFY_SCENE_BOSS_DATA_RSP = 853,
  NOTIFY_SCENE_BOSS_UPDATE_RSP = 854,
  NOTIFY_BOSS_INFO_RSP = 855,
  ENTER_BOSS_MAP_REQ = 856,
  ENTER_BOSS_MAP_RSP = 857,
  ATTENT_BOSS_REQ = 858,
  ATTENT_BOSS_RSP = 859,
  BOSS_DROP_REQ = 860,
  BOSS_DROP_RSP = 861,
  NOTIFY_BOSS_RESULT_RSP = 862,
  BOSS_KILL_REQ = 863,
  BOSS_KILL_RSP = 864,
  CLIENT_TO_LOGIC_FACADE_BEGIN = 900,
  CLIENT_TO_LOGIC_FACADE_INFO_REQ = 901,
  LOGIC_TO_CLIENT_FACADE_INFO_RSP = 902,
  CLIENT_TO_LOGIC_FACADE_LEVUP_REQ = 903,
  LOGIC_TO_CLIENT_FACADE_LEVUP_RSP = 904,
  CLIENT_TO_LOGIC_FACADE_DRESS_REQ = 905,
  LOGIC_TO_CLIENT_FACADE_DRESS_RSP = 906,
  CLIENT_TO_LOGIC_FACADE_UNDRESS_REQ = 911,
  LOGIC_TO_CLIENT_FACADE_UNDRESS_RSP = 912,
  CLIENT_TO_LOGIC_FACADE_FRAGEMNT_USE_REQ = 913,
  LOGIC_TO_CLIENT_FACADE_FRAGEMNT_USE_RSP = 914,
  CLIENT_TO_LOGIC_FACADE_SKILL_UNLOCK_NOTIFY = 915,
  CLIENT_TO_LOGIC_FACADE_SKILL_LEV_REQ = 916,
  LOGIC_TO_CLIENT_FACADE_SKILL_LEV_RSP = 917,
  CLIENT_TO_LOGIC_FACADE_FANTASY_INFO_REQ = 920,
  LOGIC_TO_CLIENT_FACADE_FANTASY_INFO_RSP = 921,
  CLIENT_TO_LOGIC_FACADE_FANTASY_ACTIVE_REQ = 922,
  LOGIC_TO_CLIENT_FACADE_FANTASY_ACTIVE_RSP = 923,
  CLIENT_TO_LOGIC_FACADE_FANTASY_LEVELUP_REQ = 924,
  LOGIC_TO_CLIENT_FACADE_FANTASY_LEVELUP_RSP = 925,
  CLIENT_TO_LOGIC_FACADE_FANTASY_DRESS_REQ = 926,
  LOGIC_TO_CLIENT_FACADE_FANTASY_DRESS_RSP = 927,
  CLIENT_TO_LOGIC_FACADE_FANTASY_UNDRESS_REQ = 928,
  LOGIC_TO_CLIENT_FACADE_FANTASY_UNDRESS_RSP = 929,
  CLIENT_TO_LOGIC_FACADE_END = 950,
  CLIENT_TO_LOGIC_MINI_ACTIVITY_BEGIN = 951,
  CLIENT_TO_LOGIC_GET_GOD_RELICS_INFO_REQ = 952,
  LOGIC_TO_CLIENT_GET_GOD_RELICS_INFO_RSP = 953,
  LOGIC_TO_CLIENT_UPDATE_GOD_RELICS_NOTIFY = 954,
  CLIENT_TO_LOGIC_GET_GOD_RELICS_TASK_REWARD_REQ = 955,
  LOGIC_TO_CLIENT_GET_GOD_RELICS_TASK_REWARD_RSP = 956,
  CLIENT_TO_LOGIC_GET_GOD_RELICS_GROUP_TASK_REWARD_REQ = 957,
  LOGIC_TO_CLIENT_GET_GOD_RELICS_GROUP_TASK_REWARD_RSP = 958,
  CLIENT_TO_LOGIC_GET_DAILY_TASK_DATA_REQ = 960,
  LOGIC_TO_CLIENT_GET_DAILY_TASK_DATA_RSP = 961,
  LOGIC_TO_CLIENT_UPDATE_DAILY_TASK_NOTIFY = 962,
  CLIENT_TO_LOGIC_GET_DAILY_TASK_REWARD_REQ = 964,
  LOGIC_TO_CLIENT_GET_DAILY_TASK_REWARD_RSP = 965,
  CLIENT_TO_LOGIC_DAILY_TASK_LEVELUP_REQ = 966,
  LOGIC_TO_CLIENT_DAILY_TASK_LEVELUP_RSP = 967,
  CLIENT_TO_LOGIC_DAILY_LIMIT_TASK_ADD_READY_REQ = 968,
  LOGIC_TO_CLIENT_DAILY_LIMIT_TASK_ADD_READY_RSP = 969,
  CLIENT_TO_LOGIC_DAILY_BACK_TASK_BACK_REQ = 970,
  LOGIC_TO_CLIENT_DAILY_BACK_TASK_BACK_RSP = 971,
  CLIENT_TO_LOGIC_DAILY_LIMIT_TASK_ADD_ALL_READY_REQ = 972,
  LOGIC_TO_CLIENT_DAILY_LIMIT_TASK_ADD_ALL_READY_RSP = 973,
  CLIENT_TO_LOGIC_DAILY_BACK_ALL_TASK_BACK_REQ = 974,
  LOGIC_TO_CLIENT_DAILY_BACK_ALL_TASK_BACK_RSP = 975,
  CLIENT_TO_LOGIC_MINI_ACTIVITY_END = 999,
  ENTER_DUP_REQ = 1000,
  ENTER_DUP_RSP = 1001,
  DUP_RESULT_REQ = 1002,
  DUP_RESULT_RSP = 1003,
  DUP_LEAVE_REQ = 1004,
  DUP_LEAVE_RSP = 1005,
  NOTIFY_DUP_END_RSP = 1006,
  NOTIFY_DUP_RSP = 1007,
  NOTIFY_DUP_RUN_RSP = 1008,
  NOTIFY_DUP_BEGIN_CD_RSP = 1009,
  RECV_TOWER_DUP_REQ = 1010,
  RECV_TOWER_DUP_RSP = 1011,
  BUY_DUP_NUM_REQ = 1012,
  BUY_DUP_NUM_RSP = 1013,
  DUP_TOWER_RECORD_REQ = 1014,
  DUP_TOWER_RECORD_RSP = 1015,
  ACT_LIST_REQ = 1201,
  ACT_LIST_RSP = 1202,
  CLIENT_TO_SERVER_TEAM_BEGIN = 1300,
  CLIENT_TO_CENTER_CREATE_TEAM = 1301,
  CLIENT_TO_CENTER_APPLY_JOIN_TEAM = 1302,
  CLIENT_TO_CENTER_REPLY_JOIN_TEAM = 1303,
  CLIENT_TO_CENTER_QUIT_TEAM = 1304,
  CLIENT_TO_CENTER_INVITE_JOIN_TEAM = 1305,
  CLIENT_TO_CENTER_REPLY_INVITE_JOIN_TEAM = 1306,
  CLIENT_TO_CENTER_KICK_TEAM_MEMBER = 1307,
  CLIENT_TO_CENTER_TEAM_APPLY_LIST = 1308,
  CLIENT_TO_CENTER_CLEAR_APPLY_LIST = 1309,
  CLIENT_TO_CENTER_TEAM_SET_TARGET = 1310,
  CLIENT_TO_CENTER_TEAM_PROMOTE_LEADER = 1311,
  CLIENT_TO_CENTER_TEAM_AUTO_MATCH = 1312,
  CLIENT_TO_SERVER_TEAM_END = 1320,
  SERVER_TO_CLIENT_TEAM_BEGIN = 1330,
  CENTER_TO_CLIENT_CREATE_TEAM = 1331,
  CENTER_TO_CLIENT_APPLY_JOIN_TEAM = 1332,
  CENTER_TO_CLIENT_REPLY_JOIN_TEAM = 1333,
  CENTER_TO_CLIENT_QUIT_TEAM = 1334,
  CENTER_TO_CLIENT_INVITE_JOIN_TEAM = 1335,
  CENTER_TO_CLIENT_REPLY_INVITE_JOIN_TEAM = 1336,
  CENTER_TO_CLIENT_KICK_TEAM_MEMBER = 1337,
  CENTER_TO_CLIENT_TEAM_APPLY_LIST = 1338,
  CENTER_TO_CLIENT_CLEAR_APPLY_LIST = 1339,
  CENTER_TO_CLIENT_TEAM_SET_TARGET = 1340,
  CENTER_TO_CLIENT_TEAM_PROMOTE_LEADER = 1341,
  CENTER_TO_CLIENT_TEAM_AUTO_MATCH = 1342,
  CENTER_TO_CLIENT_UPDATE_TEAM_APPLY = 1343,
  CENTER_TO_CLIENT_UPDATE_TEAM_MEM = 1344,
  CENTER_TO_CLIENT_UPDATE_TEAM_MEM_SIMPLE = 1345,
  CENTER_TO_CLIENT_INVITE_TEAM_NOTIFY = 1346,
  CENTER_TO_CLIENT_UPDATE_TEAM_INFO = 1347,
  CENTER_TO_CLIENT_UPDATE_TEAM_SIMPLE = 1348,
  CENTER_TO_CLIENT_TEAM_REFUSE_NOTIFY = 1349,
  SERVER_TO_CLIENT_TEAM_END = 1350,
  SOCIAL_TO_CENTER_CREATE_TEAM = 1360,
  SOCIAL_TO_CENTER_CHAR_JOIN_TEAM = 1361,
  SOCIAL_TO_CENTER_CHAR_QUIT_TEAM = 1362,
  SOCIAL_TO_CENTER_TEAM_LEADER = 1363,
  SOCIAL_TO_CENTER_TEAM_DISMISS = 1364,
  SOCIAL_TO_CENTER_TEAM_DUP_BEGIN = 1365,
  SOCIAL_TO_CENTER_TEAM_DUP_END = 1366,
  SOCIAL_TO_CENTER_TEAM_MEM_UPDATE = 1367,
  CENTER_TO_LOGIC_UPDATE_TEAM_NOTIFY = 1368,
  CENTER_TO_LOGIC_DISMISS_TEAM_NOTIFY = 1369,
  CENTER_TO_LOGIC_UPDATE_TEAM_CLONESS_NOTIFY = 1370,
  CENTER_TO_LOGIC_TEAM_INFO_NOTIFY = 1371,
  LOGIC_TO_SOCIAL_TEAM_ROBOT_HP_SYNC = 1372,
  LOGIC_TO_SOCIAL_TEAM_ENTER_NEXT_PALACE_LAYER = 1373,
  LOGIC_TO_CLIENT_DUPLICATE_CANCEL_STATE = 1375,
  DROP_PICK_REQ = 1450,
  DROP_PICK_RSP = 1451,
  DROP_HEAD_NOTIFY = 1452,
  NOTIFY_VIP_DATA_RSP = 1480,
  CLIENT_SERVER_MAX_CMD = 5000
};
bool ClientServerCmd_IsValid(int value);
const ClientServerCmd ClientServerCmd_MIN = CLIENT_LOGIN_REQ;
const ClientServerCmd ClientServerCmd_MAX = CLIENT_SERVER_MAX_CMD;
const int ClientServerCmd_ARRAYSIZE = ClientServerCmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* ClientServerCmd_descriptor();
inline const ::std::string& ClientServerCmd_Name(ClientServerCmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    ClientServerCmd_descriptor(), value);
}
inline bool ClientServerCmd_Parse(
    const ::std::string& name, ClientServerCmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ClientServerCmd>(
    ClientServerCmd_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::ClientServerCmd>() {
  return ::proto_ff::ClientServerCmd_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ClientServerCmd_2eproto__INCLUDED
