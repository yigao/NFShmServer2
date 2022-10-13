// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ServerInternalCmd.proto

#ifndef PROTOBUF_ServerInternalCmd_2eproto__INCLUDED
#define PROTOBUF_ServerInternalCmd_2eproto__INCLUDED

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
#include "common_logic.pb.h"
// @@protoc_insertion_point(includes)

namespace proto_ff {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ServerInternalCmd_2eproto();
void protobuf_AssignDesc_ServerInternalCmd_2eproto();
void protobuf_ShutdownFile_ServerInternalCmd_2eproto();


enum ServerInternalCmd {
  SERVER_INTERNAL_BEGIN = 300,
  WORLD_NOTIFY_PROXY_CHANGE_LOGIC = 301
};
bool ServerInternalCmd_IsValid(int value);
const ServerInternalCmd ServerInternalCmd_MIN = SERVER_INTERNAL_BEGIN;
const ServerInternalCmd ServerInternalCmd_MAX = WORLD_NOTIFY_PROXY_CHANGE_LOGIC;
const int ServerInternalCmd_ARRAYSIZE = ServerInternalCmd_MAX + 1;

const ::google::protobuf::EnumDescriptor* ServerInternalCmd_descriptor();
inline const ::std::string& ServerInternalCmd_Name(ServerInternalCmd value) {
  return ::google::protobuf::internal::NameOfEnum(
    ServerInternalCmd_descriptor(), value);
}
inline bool ServerInternalCmd_Parse(
    const ::std::string& name, ServerInternalCmd* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ServerInternalCmd>(
    ServerInternalCmd_descriptor(), name, value);
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
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::ServerInternalCmd>() {
  return ::proto_ff::ServerInternalCmd_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ServerInternalCmd_2eproto__INCLUDED