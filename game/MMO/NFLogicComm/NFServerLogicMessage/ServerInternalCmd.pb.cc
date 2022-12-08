// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerInternalCmd.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ServerInternalCmd.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace proto_ff {

namespace {

const ::google::protobuf::EnumDescriptor* ServerInternalCmd_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_ServerInternalCmd_2eproto() {
  protobuf_AddDesc_ServerInternalCmd_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ServerInternalCmd.proto");
  GOOGLE_CHECK(file != NULL);
  ServerInternalCmd_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ServerInternalCmd_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_ServerInternalCmd_2eproto() {
}

void protobuf_AddDesc_ServerInternalCmd_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::proto_ff::protobuf_AddDesc_common_5flogic_2eproto();
  ::proto_ff::protobuf_AddDesc_Com_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027ServerInternalCmd.proto\022\010proto_ff\032\025yd_"
    "fieldoptions.proto\032\022common_logic.proto\032\t"
    "Com.proto*\301!\n\021ServerInternalCmd\022\014\n\010SYS_P"
    "ING\020\001\022\024\n\020SYS_CLOSE_SERVER\020\002\022\037\n\033SYS_REDIR"
    "ECT_CLIENT_BY_GATE\020\n\022!\n\035SYS_REDIRECT_CLI"
    "ENT_BY_CENTER\020\013\022!\n\035SYS_REDIRECT_SOCIAL_B"
    "Y_CENTER\020\014\022 \n\034SYS_REDIRECT_LOGIC_BY_CENT"
    "ER\020\r\022#\n\037SYS_REDIRECT_LOGIC_ID_BY_CENTER\020"
    "\016\022\037\n\033SYS_REDIRECT_SERVER_BY_GATE\020\017\022\031\n\025LO"
    "GIC_REGISTER_CENTER\020\020\022\035\n\031LOGIC_REGISTER_"
    "CENTER_RSP\020\021\022\027\n\023LOGIC_REGISTER_GATE\020\022\022\033\n"
    "\027LOGIC_REGISTER_GATE_RSP\020\023\022\030\n\024CENTER_REG"
    "ISTER_GATE\020\024\022\034\n\030CENTER_REGISTER_GATE_RSP"
    "\020\025\022\026\n\022CENTER_REGISTER_DB\020\026\022\032\n\026SOCIAL_REG"
    "ISTER_CENTER\020\027\022\036\n\032SOCIAL_REGISTER_CENTER"
    "_RSP\020\030\022\034\n\030SOCIAL_QUERY_CENTER_INFO\020\031\022 \n\034"
    "SOCIAL_QUERY_CENTER_INFO_RSP\020\032\022\026\n\022NOTIFY"
    "_LOGIC_STATE\020\033\022\021\n\rINNER_LOG_REQ\020\037\022\034\n\030NOT"
    "IFY_LOGIC_DATA_UPDATE\020 \022\025\n\020DB_ROLE_LIST_"
    "REQ\020\255\002\022\025\n\020DB_ROLE_LIST_RSP\020\256\002\022\027\n\022DB_CREA"
    "TE_ROLE_REQ\020\257\002\022\027\n\022DB_CREATE_ROLE_RSP\020\260\002\022"
    "\025\n\020DB_ROLE_INFO_REQ\020\261\002\022\025\n\020DB_ROLE_INFO_R"
    "SP\020\262\002\022\034\n\027DB_ROLE_INFO_UPDATE_REQ\020\263\002\022 \n\033N"
    "OTIFY_LOGIC_ENTER_GAME_REQ\020\264\002\022 \n\033NOTIFY_"
    "LOGIC_ENTER_GAME_RSP\020\265\002\022 \n\033NOTIFY_LOGIC_"
    "LEAVE_GAME_REQ\020\266\002\022 \n\033NOTIFY_LOGIC_LEAVE_"
    "GAME_RSP\020\267\002\022\033\n\026NOTIFY_CENTER_KICK_REQ\020\270\002"
    "\022\033\n\026NOTIFY_GATE_ENTER_GAME\020\271\002\022\035\n\030NOTIFY_"
    "GATE_CHANGE_LOGIC\020\272\002\022\033\n\026NOTIFY_GATE_LEAV"
    "E_GAME\020\273\002\022\037\n\032NOTIFY_GATE_RECONNECT_GAME\020"
    "\274\002\022\035\n\030NOTIFY_CENTER_DISCONNECT\020\275\002\022\034\n\027NOT"
    "IFY_LOGIC_DISCONNECT\020\276\002\022\033\n\026NOTIFY_LOGIC_"
    "RECONNECT\020\277\002\022\034\n\027DB_ROLE_SIMPLE_LIST_REQ\020"
    "\300\002\022\034\n\027DB_ROLE_SIMPLE_LIST_RSP\020\301\002\022\031\n\024SOCI"
    "AL_ROLE_INFO_REQ\020\302\002\022\031\n\024SOCIAL_ROLE_INFO_"
    "RSP\020\303\002\022\033\n\026SOCIAL_ROLE_INFO_EVENT\020\304\002\022\033\n\026S"
    "YN_ATTR_TO_CENTER_RSP\020\305\002\022\031\n\024DB_ROLE_CHG_"
    "NAME_REQ\020\306\002\022\031\n\024DB_ROLE_CHG_NAME_RSP\020\307\002\022\""
    "\n\035CENTER_CREATE_SCENE_REQ_LOGIC\020\221\003\022\"\n\035CE"
    "NTER_CREATE_SCENE_RSP_LOGIC\020\222\003\022#\n\036SOCIAL"
    "_TO_CENTER_ADD_NEW_SCENE\020\223\003\022\037\n\032SOCIAL_TO"
    "_CENTER_DEL_SCENE\020\224\003\022&\n!LOGIC_NOTIFY_DES"
    "TORY_SCENE_CENTER\020\225\003\022*\n%LOGIC_CREATURE_T"
    "RANS_SCENE_REQ_CENTER\020\226\003\0221\n,CENTER_CREAT"
    "URE_TRANS_SCENE_RSP_LOGIC_RESULT\020\227\003\0222\n-C"
    "ENTER_CREATURE_TRANS_SCENE_RSP_LOGIC_SUC"
    "CESS\020\230\003\022 \n\033DB_CREATURE_TRANS_SCENE_REQ\020\231"
    "\003\022 \n\033DB_CREATURE_TRANS_SCENE_RSP\020\232\003\022\034\n\027N"
    "OTIFY_ROLE_ENTER_SCENE\020\233\003\022\035\n\030NOTIFY_ROLE"
    "_CHANGE_LOGIC\020\234\003\022 \n\033DBPROXY_PROTOCOL_MAI"
    "L_BEGIN\020\302\003\022-\n(DBPROXY_PROTOCOL_CHARACTER"
    "_MAIL_DATA_REQ\020\303\003\022-\n(DBPROXY_PROTOCOL_CH"
    "ARACTER_MAIL_DATA_RSP\020\304\003\022%\n DBPROXY_PROT"
    "OCOL_MAX_MAIL_ID_REQ\020\305\003\022%\n DBPROXY_PROTO"
    "COL_MAX_MAIL_ID_RSP\020\306\003\022/\n*DBPROXY_PROTOC"
    "OL_CHARACTER_DELETE_MAIL_REQ\020\307\003\022,\n\'DBPRO"
    "XY_PROTOCOL_ALL_ZONE_MAIL_SAVE_REQ\020\310\003\022,\n"
    "\'DBPROXY_PROTOCOL_ALL_ZONE_MAIL_SAVE_RSP"
    "\020\311\003\022)\n$DBPROXY_PROTOCOL_ZONE_MAIL_TRANS_"
    "REQ\020\312\003\022)\n$DBPROXY_PROTOCOL_ZONE_MAIL_TRA"
    "NS_RSP\020\313\003\022#\n\036DBPROXY_PROTOCOL_MAIL_SAVE_"
    "REQ\020\314\003\022#\n\036DBPROXY_PROTOCOL_MAIL_SAVE_RSP"
    "\020\315\003\022\'\n\"DBPROXY_PROTOCOL_WEB_MAIL_DATA_RE"
    "Q\020\316\003\022\'\n\"DBPROXY_PROTOCOL_WEB_MAIL_DATA_R"
    "SP\020\317\003\022)\n$CENTER_SERVER_PROTOCOL_SEND_MAI"
    "L_REQ\020\320\003\022)\n$CENTER_SERVER_PROTOCOL_SEND_"
    "MAIL_RSP\020\321\003\0228\n3CENTER_SERVER_PROTOCOL_GE"
    "T_MAIL_ATTACHMENT_TO_LOGIC\020\322\003\022.\n)CENTER_"
    "SERVER_PROTOCOL_UPDATE_MAIL_NOTIFY\020\323\003\022<\n"
    "7CENTER_SERVER_PROTOCOL_GET_ALL_MAIL_ATT"
    "ACHMENT_TO_LOGIC\020\324\003\022,\n\'CENTER_SERVER_PRO"
    "TOCOL_SEND_SYSTEM_MAIL\020\325\003\022.\n)CENTER_SERV"
    "ER_PROTOCOL_SEND_MAIL_TO_LOGIC\020\326\003\022\036\n\031DBP"
    "ROXY_PROTOCOL_MAIL_END\020\337\003\022\037\n\032SERVER_INTE"
    "RNAL_CHAT_BEGIN\020\340\003\022$\n\037CENTER_SERVER_PROT"
    "OCOL_CHAT_REQ\020\341\003\022.\n)CENTER_SERVER_PROTOC"
    "OL_GWSYSCHATMSGNOTIFY\020\342\003\022 \n\033SERVER_TO_SE"
    "RVER_CROSS_CHAT\020\343\003\022#\n\036CENTER_TO_LOGCI_VI"
    "R_FORBID_RSP\020\344\003\022\035\n\030SERVER_INTERNAL_CHAT_"
    "END\020\351\003\022\031\n\024NOTIFY_SERVER_GM_RSP\020\364\003\022!\n\034SER"
    "VER_INTERNAL_FRIEND_BEGIN\020\247\004\022\035\n\030LOGIC_TO"
    "_CENTER_ADD_HATE\020\250\004\022!\n\034LOGIC_TO_CENTER_K"
    "ILL_SOMEONE\020\251\004\022\037\n\032CENTER_TO_LOGIC_ADD_FR"
    "IEND\020\252\004\022 \n\033LOGIC_TO_CENTER_GIVING_GIFT\020\253"
    "\004\022&\n!CENTER_TO_LOGIC_GIVING_GIFT_ERROR\020\254"
    "\004\022)\n$DBPROXY_PROTOCOL_ALL_FRIEND_DATA_RE"
    "Q\020\260\004\022*\n%DBPROXY_PROTOCOL_SAVE_FRIEND_DAT"
    "A_REQ\020\261\004\022)\n$DBPROXY_PROTOCOL_ALL_FRIEND_"
    "DATA_RSP\020\262\004\022*\n%DBPROXY_PROTOCOL_SAVE_FRI"
    "END_DATA_RSP\020\263\004\022/\n*DBPROXY_PROTOCOL_DELE"
    "TE_FRIEND_DATA_NOTIFY\020\264\004\022%\n DBPROXY_PROT"
    "OCOL_FRIEND_DATA_REQ\020\265\004\022%\n DBPROXY_PROTO"
    "COL_FRIEND_DATA_RSP\020\266\004\022\037\n\032SERVER_INTERNA"
    "L_FRIEND_END\020\272\004\022\026\n\021L2C_ENTER_DUP_REQ\020\330\004\022"
    "\027\n\022L2C_CREATE_DUP_RSP\020\331\004\022\035\n\030L2C_DUP_STAT"
    "E_CHG_NOTIFY\020\332\004\022#\n\036C2L_PULL_ROLE_ENTER_D"
    "UP_NOTIFY\020\333\004\022\037\n\032L2C_DUP_ROLE_ACTION_NOTI"
    "FY\020\334\004\022\026\n\021S2C_ENTER_DUP_REQ\020\335\004\022\026\n\021C2S_ENT"
    "ER_DUP_RSP\020\336\004\022\036\n\031L2C_TOWER_RECV_RECORD_R"
    "EQ\020\337\004\022\026\n\021DB_GET_GLOBAL_REQ\020\212\005\022\026\n\021DB_GET_"
    "GLOBAL_RSP\020\213\005\022\026\n\021DB_SET_GLOBAL_REQ\020\214\005\022\030\n"
    "\023L2C_UPDATE_BOSS_REQ\020\224\005\022\027\n\022L2C_SYN_ATTEN"
    "T_REQ\020\225\005\022\026\n\021L2C_KILL_BOSS_REQ\020\226\005\022\030\n\023DB_A"
    "CT_GET_DATA_REQ\020\274\005\022\030\n\023DB_ACT_GET_DATA_RS"
    "P\020\275\005\022\031\n\024DB_ACT_SAVE_DATA_REQ\020\276\005\022\031\n\024ACT_L"
    "S_INIT_DATA_REQ\020\277\005\022\031\n\024ACT_LS_INIT_DATA_R"
    "SP\020\300\005\022\031\n\024ACT_CS_INIT_DATA_REQ\020\301\005\022\031\n\024ACT_"
    "CS_INIT_DATA_RSP\020\302\005\022\032\n\025ACT_LS_PRE_FINISH"
    "_REQ\020\303\005\022\031\n\024ACT_CL_INIT_DATA_REQ\020\304\005\022\031\n\024SE"
    "RVER_INTER_MAX_CMD\020\210\'", 4381);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ServerInternalCmd.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ServerInternalCmd_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ServerInternalCmd_2eproto {
  StaticDescriptorInitializer_ServerInternalCmd_2eproto() {
    protobuf_AddDesc_ServerInternalCmd_2eproto();
  }
} static_descriptor_initializer_ServerInternalCmd_2eproto_;
const ::google::protobuf::EnumDescriptor* ServerInternalCmd_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerInternalCmd_descriptor_;
}
bool ServerInternalCmd_IsValid(int value) {
  switch(value) {
    case 1:
    case 2:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 31:
    case 32:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 317:
    case 318:
    case 319:
    case 320:
    case 321:
    case 322:
    case 323:
    case 324:
    case 325:
    case 326:
    case 327:
    case 401:
    case 402:
    case 403:
    case 404:
    case 405:
    case 406:
    case 407:
    case 408:
    case 409:
    case 410:
    case 411:
    case 412:
    case 450:
    case 451:
    case 452:
    case 453:
    case 454:
    case 455:
    case 456:
    case 457:
    case 458:
    case 459:
    case 460:
    case 461:
    case 462:
    case 463:
    case 464:
    case 465:
    case 466:
    case 467:
    case 468:
    case 469:
    case 470:
    case 479:
    case 480:
    case 481:
    case 482:
    case 483:
    case 484:
    case 489:
    case 500:
    case 551:
    case 552:
    case 553:
    case 554:
    case 555:
    case 556:
    case 560:
    case 561:
    case 562:
    case 563:
    case 564:
    case 565:
    case 566:
    case 570:
    case 600:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 606:
    case 607:
    case 650:
    case 651:
    case 652:
    case 660:
    case 661:
    case 662:
    case 700:
    case 701:
    case 702:
    case 703:
    case 704:
    case 705:
    case 706:
    case 707:
    case 708:
    case 5000:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
