// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ComDefine.proto

#ifndef PROTOBUF_ComDefine_2eproto__INCLUDED
#define PROTOBUF_ComDefine_2eproto__INCLUDED

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
void  protobuf_AddDesc_ComDefine_2eproto();
void protobuf_AssignDesc_ComDefine_2eproto();
void protobuf_ShutdownFile_ComDefine_2eproto();


enum LOGOUT_FLAG {
  LOGOUT_FLAG_NULL = 0,
  LOGOUT_FLAG_NORMAL = 1,
  LOGOUT_FLAG_REPLACE = 2,
  LOGOUT_FLAG_SWITCH_SERVER = 3,
  LOGOUT_FLAG_BREAK_TIMEOUT = 4,
  LOGOUT_FLAG_OPERATE_KICK = 5,
  LOGOUT_FLAG_CHEAR_KICK = 6,
  LOGOUT_FLAG_KICK = 7,
  LOGOUT_FLAG_CRASH = 8,
  LOGOUT_FLAG_RECONNECT = 9
};
bool LOGOUT_FLAG_IsValid(int value);
const LOGOUT_FLAG LOGOUT_FLAG_MIN = LOGOUT_FLAG_NULL;
const LOGOUT_FLAG LOGOUT_FLAG_MAX = LOGOUT_FLAG_RECONNECT;
const int LOGOUT_FLAG_ARRAYSIZE = LOGOUT_FLAG_MAX + 1;

const ::google::protobuf::EnumDescriptor* LOGOUT_FLAG_descriptor();
inline const ::std::string& LOGOUT_FLAG_Name(LOGOUT_FLAG value) {
  return ::google::protobuf::internal::NameOfEnum(
    LOGOUT_FLAG_descriptor(), value);
}
inline bool LOGOUT_FLAG_Parse(
    const ::std::string& name, LOGOUT_FLAG* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LOGOUT_FLAG>(
    LOGOUT_FLAG_descriptor(), name, value);
}
enum LOGOUT_TYPE {
  LOGOUT_TYPE_NONE = 0,
  LOGOUT_TYPE_LOGOUT = 1,
  LOGOUT_TYPE_KICK_OUT = 2,
  LOGOUT_TYPE_DIS_TIME_OUT = 3,
  LOGOUT_TYPE_CHANGE_LOGIC = 4,
  LOGOUT_TYPE_RETURN_ROLE_LIST = 5
};
bool LOGOUT_TYPE_IsValid(int value);
const LOGOUT_TYPE LOGOUT_TYPE_MIN = LOGOUT_TYPE_NONE;
const LOGOUT_TYPE LOGOUT_TYPE_MAX = LOGOUT_TYPE_RETURN_ROLE_LIST;
const int LOGOUT_TYPE_ARRAYSIZE = LOGOUT_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* LOGOUT_TYPE_descriptor();
inline const ::std::string& LOGOUT_TYPE_Name(LOGOUT_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    LOGOUT_TYPE_descriptor(), value);
}
inline bool LOGOUT_TYPE_Parse(
    const ::std::string& name, LOGOUT_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<LOGOUT_TYPE>(
    LOGOUT_TYPE_descriptor(), name, value);
}
enum ERetCode {
  RET_SUCCESS = 0,
  RET_FAIL = 1
};
bool ERetCode_IsValid(int value);
const ERetCode ERetCode_MIN = RET_SUCCESS;
const ERetCode ERetCode_MAX = RET_FAIL;
const int ERetCode_ARRAYSIZE = ERetCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* ERetCode_descriptor();
inline const ::std::string& ERetCode_Name(ERetCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    ERetCode_descriptor(), value);
}
inline bool ERetCode_Parse(
    const ::std::string& name, ERetCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<ERetCode>(
    ERetCode_descriptor(), name, value);
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
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::LOGOUT_FLAG>() {
  return ::proto_ff::LOGOUT_FLAG_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::LOGOUT_TYPE>() {
  return ::proto_ff::LOGOUT_TYPE_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::proto_ff::ERetCode>() {
  return ::proto_ff::ERetCode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ComDefine_2eproto__INCLUDED
