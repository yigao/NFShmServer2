// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: proto_svr_logic_msg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "proto_svr_logic_msg.pb.h"

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

const ::google::protobuf::EnumDescriptor* Proto_SvrLogicMsgID_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_proto_5fsvr_5flogic_5fmsg_2eproto() {
  protobuf_AddDesc_proto_5fsvr_5flogic_5fmsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "proto_svr_logic_msg.proto");
  GOOGLE_CHECK(file != NULL);
  Proto_SvrLogicMsgID_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_proto_5fsvr_5flogic_5fmsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_proto_5fsvr_5flogic_5fmsg_2eproto() {
}

void protobuf_AddDesc_proto_5fsvr_5flogic_5fmsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::proto_ff::protobuf_AddDesc_proto_5fcommon_2eproto();
  ::proto_ff::protobuf_AddDesc_proto_5fsvr_5fcommon_2eproto();
  ::proto_ff::protobuf_AddDesc_proto_5fsvr_5flogic_5fcommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\031proto_svr_logic_msg.proto\022\010proto_ff\032\025y"
    "d_fieldoptions.proto\032\022proto_common.proto"
    "\032\026proto_svr_common.proto\032\034proto_svr_logi"
    "c_common.proto*&\n\023Proto_SvrLogicMsgID\022\017\n"
    "\013NF_TEST_REQ\020(", 174);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "proto_svr_logic_msg.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_proto_5fsvr_5flogic_5fmsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_proto_5fsvr_5flogic_5fmsg_2eproto {
  StaticDescriptorInitializer_proto_5fsvr_5flogic_5fmsg_2eproto() {
    protobuf_AddDesc_proto_5fsvr_5flogic_5fmsg_2eproto();
  }
} static_descriptor_initializer_proto_5fsvr_5flogic_5fmsg_2eproto_;
const ::google::protobuf::EnumDescriptor* Proto_SvrLogicMsgID_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Proto_SvrLogicMsgID_descriptor_;
}
bool Proto_SvrLogicMsgID_IsValid(int value) {
  switch(value) {
    case 40:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
