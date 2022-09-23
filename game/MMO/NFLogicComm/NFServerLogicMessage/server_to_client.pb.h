// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: server_to_client.proto

#ifndef PROTOBUF_server_5fto_5fclient_2eproto__INCLUDED
#define PROTOBUF_server_5fto_5fclient_2eproto__INCLUDED

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
void  protobuf_AddDesc_server_5fto_5fclient_2eproto();
void protobuf_AssignDesc_server_5fto_5fclient_2eproto();
void protobuf_ShutdownFile_server_5fto_5fclient_2eproto();


enum ServerToClientCmd {
  SERVER_TO_CLIENT_LOGIN_BEGIN = 1,
  SERVER_TO_CLIENT_PING = 2,
  LOGIN_TO_CLIENT_ACCOUNT_LOGIN = 3,
  LOGIN_TO_CLIENT_SELECT_ZONE = 4,
  ZONE_TO_CLIENT_GATEINFO_RSP = 5,
  LOGIN_TO_CLIENT_PING = 6,
  SERVER_TO_CLIENT_QUEUE_RESULT = 7,
  SERVER_TO_CLIENT_LOGIN_END = 20
};
bool ServerToClientCmd_IsValid(int value);
const ServerToClientCmd ServerToClientCmd_MIN = SERVER_TO_CLIENT_LOGIN_BEGIN;
const ServerToClientCmd ServerToClientCmd_MAX = SERVER_TO_CLIENT_LOGIN_END;
const int ServerToClientCmd_ARRAYSIZE = ServerToClientCmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* ServerToClientCmd_descriptor();
inline const ::std::string& ServerToClientCmd_Name(ServerToClientCmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    ServerToClientCmd_descriptor(), value);
}
inline bool ServerToClientCmd_Parse(
    const ::std::string& name, ServerToClientCmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ServerToClientCmd>(
    ServerToClientCmd_descriptor(), name, value);
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
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::ServerToClientCmd>() {
  return ::proto_ff::ServerToClientCmd_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_server_5fto_5fclient_2eproto__INCLUDED
