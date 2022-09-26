// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: privilege.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "privilege.pb.h"

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

const ::google::protobuf::Descriptor* privilegeprivilege_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  privilegeprivilege_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_privilegeprivilege_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_privilegeprivilege_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_privilege_2eproto() {
  protobuf_AddDesc_privilege_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "privilege.proto");
  GOOGLE_CHECK(file != NULL);
  privilegeprivilege_descriptor_ = file->message_type(0);
  static const int privilegeprivilege_offsets_[10] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, showtype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, param_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, severparam_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, openreward_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, dailyreward_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, resourcelimit_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, skillid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, privilege_id_),
  };
  privilegeprivilege_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      privilegeprivilege_descriptor_,
      privilegeprivilege::default_instance_,
      privilegeprivilege_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(privilegeprivilege, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(privilegeprivilege));
  Sheet_privilegeprivilege_descriptor_ = file->message_type(1);
  static const int Sheet_privilegeprivilege_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_privilegeprivilege, privilegeprivilege_list_),
  };
  Sheet_privilegeprivilege_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_privilegeprivilege_descriptor_,
      Sheet_privilegeprivilege::default_instance_,
      Sheet_privilegeprivilege_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_privilegeprivilege, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_privilegeprivilege, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_privilegeprivilege));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_privilege_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    privilegeprivilege_descriptor_, &privilegeprivilege::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_privilegeprivilege_descriptor_, &Sheet_privilegeprivilege::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_privilege_2eproto() {
  delete privilegeprivilege::default_instance_;
  delete privilegeprivilege_reflection_;
  delete Sheet_privilegeprivilege::default_instance_;
  delete Sheet_privilegeprivilege_reflection_;
}

void protobuf_AddDesc_privilege_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017privilege.proto\022\010proto_ff\032\025yd_fieldopt"
    "ions.proto\"\207\003\n\022privilegeprivilege\022\022\n\002id\030"
    "\001 \001(\003B\006\302\377\024\002ID\022\"\n\010showType\030\002 \001(\005B\020\302\377\024\014\346\230\276"
    "\347\244\272\347\261\273\345\236\213\022\036\n\004type\030\003 \001(\005B\020\302\377\024\014\345\274\200\346\224\276\347\261\273\345\236"
    "\213\022\037\n\005param\030\004 \001(\005B\020\302\377\024\014\345\274\200\346\224\276\345\217\202\346\225\260\0221\n\nse"
    "verParam\030\005 \001(\tB\035\302\377\024\025\346\234\215\345\212\241\345\231\250\345\274\200\346\224\276\345\217\202\346\225"
    "\260\220\301\024<\022$\n\nopenReward\030\006 \001(\003B\020\302\377\024\014\345\274\200\345\220\257\345\245\226"
    "\345\212\261\022%\n\013dailyReward\030\007 \001(\003B\020\302\377\024\014\346\257\217\346\227\245\345\245\226\345"
    "\212\261\022-\n\rresourceLimit\030\010 \001(\005B\026\302\377\024\022\347\206\224\347\202\274\344\270\212"
    "\351\231\220\345\212\240\346\210\220\022!\n\007skillid\030\t \001(\003B\020\302\377\024\014\347\211\271\346\235\203\346\212"
    "\200\350\203\275\022&\n\014privilege_id\030\n \001(\tB\020\302\377\024\010\347\211\271\346\235\203id"
    "\220\301\024P\"_\n\030Sheet_privilegeprivilege\022C\n\027priv"
    "ilegeprivilege_List\030\001 \003(\0132\034.proto_ff.pri"
    "vilegeprivilegeB\004\210\301\024\024", 541);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "privilege.proto", &protobuf_RegisterTypes);
  privilegeprivilege::default_instance_ = new privilegeprivilege();
  Sheet_privilegeprivilege::default_instance_ = new Sheet_privilegeprivilege();
  privilegeprivilege::default_instance_->InitAsDefaultInstance();
  Sheet_privilegeprivilege::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_privilege_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_privilege_2eproto {
  StaticDescriptorInitializer_privilege_2eproto() {
    protobuf_AddDesc_privilege_2eproto();
  }
} static_descriptor_initializer_privilege_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int privilegeprivilege::kIdFieldNumber;
const int privilegeprivilege::kShowTypeFieldNumber;
const int privilegeprivilege::kTypeFieldNumber;
const int privilegeprivilege::kParamFieldNumber;
const int privilegeprivilege::kSeverParamFieldNumber;
const int privilegeprivilege::kOpenRewardFieldNumber;
const int privilegeprivilege::kDailyRewardFieldNumber;
const int privilegeprivilege::kResourceLimitFieldNumber;
const int privilegeprivilege::kSkillidFieldNumber;
const int privilegeprivilege::kPrivilegeIdFieldNumber;
#endif  // !_MSC_VER

privilegeprivilege::privilegeprivilege()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void privilegeprivilege::InitAsDefaultInstance() {
}

privilegeprivilege::privilegeprivilege(const privilegeprivilege& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void privilegeprivilege::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  showtype_ = 0;
  type_ = 0;
  param_ = 0;
  severparam_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  openreward_ = GOOGLE_LONGLONG(0);
  dailyreward_ = GOOGLE_LONGLONG(0);
  resourcelimit_ = 0;
  skillid_ = GOOGLE_LONGLONG(0);
  privilege_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

privilegeprivilege::~privilegeprivilege() {
  SharedDtor();
}

void privilegeprivilege::SharedDtor() {
  if (severparam_ != &::google::protobuf::internal::kEmptyString) {
    delete severparam_;
  }
  if (privilege_id_ != &::google::protobuf::internal::kEmptyString) {
    delete privilege_id_;
  }
  if (this != default_instance_) {
  }
}

void privilegeprivilege::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* privilegeprivilege::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return privilegeprivilege_descriptor_;
}

const privilegeprivilege& privilegeprivilege::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_privilege_2eproto();
  return *default_instance_;
}

privilegeprivilege* privilegeprivilege::default_instance_ = NULL;

privilegeprivilege* privilegeprivilege::New() const {
  return new privilegeprivilege;
}

void privilegeprivilege::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_LONGLONG(0);
    showtype_ = 0;
    type_ = 0;
    param_ = 0;
    if (has_severparam()) {
      if (severparam_ != &::google::protobuf::internal::kEmptyString) {
        severparam_->clear();
      }
    }
    openreward_ = GOOGLE_LONGLONG(0);
    dailyreward_ = GOOGLE_LONGLONG(0);
    resourcelimit_ = 0;
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    skillid_ = GOOGLE_LONGLONG(0);
    if (has_privilege_id()) {
      if (privilege_id_ != &::google::protobuf::internal::kEmptyString) {
        privilege_id_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool privilegeprivilege::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_showType;
        break;
      }

      // optional int32 showType = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_showType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &showtype_)));
          set_has_showtype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_type;
        break;
      }

      // optional int32 type = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_type:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_param;
        break;
      }

      // optional int32 param = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_param:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &param_)));
          set_has_param();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_severParam;
        break;
      }

      // optional string severParam = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_severParam:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_severparam()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->severparam().data(), this->severparam().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_openReward;
        break;
      }

      // optional int64 openReward = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_openReward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &openreward_)));
          set_has_openreward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_dailyReward;
        break;
      }

      // optional int64 dailyReward = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_dailyReward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &dailyreward_)));
          set_has_dailyreward();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_resourceLimit;
        break;
      }

      // optional int32 resourceLimit = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_resourceLimit:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &resourcelimit_)));
          set_has_resourcelimit();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_skillid;
        break;
      }

      // optional int64 skillid = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_skillid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &skillid_)));
          set_has_skillid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(82)) goto parse_privilege_id;
        break;
      }

      // optional string privilege_id = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_privilege_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_privilege_id()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->privilege_id().data(), this->privilege_id().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void privilegeprivilege::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional int32 showType = 2;
  if (has_showtype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->showtype(), output);
  }

  // optional int32 type = 3;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->type(), output);
  }

  // optional int32 param = 4;
  if (has_param()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->param(), output);
  }

  // optional string severParam = 5;
  if (has_severparam()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->severparam().data(), this->severparam().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->severparam(), output);
  }

  // optional int64 openReward = 6;
  if (has_openreward()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->openreward(), output);
  }

  // optional int64 dailyReward = 7;
  if (has_dailyreward()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->dailyreward(), output);
  }

  // optional int32 resourceLimit = 8;
  if (has_resourcelimit()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->resourcelimit(), output);
  }

  // optional int64 skillid = 9;
  if (has_skillid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(9, this->skillid(), output);
  }

  // optional string privilege_id = 10;
  if (has_privilege_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->privilege_id().data(), this->privilege_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->privilege_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* privilegeprivilege::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // optional int32 showType = 2;
  if (has_showtype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->showtype(), target);
  }

  // optional int32 type = 3;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->type(), target);
  }

  // optional int32 param = 4;
  if (has_param()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->param(), target);
  }

  // optional string severParam = 5;
  if (has_severparam()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->severparam().data(), this->severparam().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->severparam(), target);
  }

  // optional int64 openReward = 6;
  if (has_openreward()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->openreward(), target);
  }

  // optional int64 dailyReward = 7;
  if (has_dailyreward()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(7, this->dailyreward(), target);
  }

  // optional int32 resourceLimit = 8;
  if (has_resourcelimit()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->resourcelimit(), target);
  }

  // optional int64 skillid = 9;
  if (has_skillid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(9, this->skillid(), target);
  }

  // optional string privilege_id = 10;
  if (has_privilege_id()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->privilege_id().data(), this->privilege_id().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->privilege_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int privilegeprivilege::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional int32 showType = 2;
    if (has_showtype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->showtype());
    }

    // optional int32 type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

    // optional int32 param = 4;
    if (has_param()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->param());
    }

    // optional string severParam = 5;
    if (has_severparam()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->severparam());
    }

    // optional int64 openReward = 6;
    if (has_openreward()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->openreward());
    }

    // optional int64 dailyReward = 7;
    if (has_dailyreward()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->dailyreward());
    }

    // optional int32 resourceLimit = 8;
    if (has_resourcelimit()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->resourcelimit());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int64 skillid = 9;
    if (has_skillid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->skillid());
    }

    // optional string privilege_id = 10;
    if (has_privilege_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->privilege_id());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void privilegeprivilege::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const privilegeprivilege* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const privilegeprivilege*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void privilegeprivilege::MergeFrom(const privilegeprivilege& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_showtype()) {
      set_showtype(from.showtype());
    }
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_param()) {
      set_param(from.param());
    }
    if (from.has_severparam()) {
      set_severparam(from.severparam());
    }
    if (from.has_openreward()) {
      set_openreward(from.openreward());
    }
    if (from.has_dailyreward()) {
      set_dailyreward(from.dailyreward());
    }
    if (from.has_resourcelimit()) {
      set_resourcelimit(from.resourcelimit());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_skillid()) {
      set_skillid(from.skillid());
    }
    if (from.has_privilege_id()) {
      set_privilege_id(from.privilege_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void privilegeprivilege::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void privilegeprivilege::CopyFrom(const privilegeprivilege& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool privilegeprivilege::IsInitialized() const {

  return true;
}

void privilegeprivilege::Swap(privilegeprivilege* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(showtype_, other->showtype_);
    std::swap(type_, other->type_);
    std::swap(param_, other->param_);
    std::swap(severparam_, other->severparam_);
    std::swap(openreward_, other->openreward_);
    std::swap(dailyreward_, other->dailyreward_);
    std::swap(resourcelimit_, other->resourcelimit_);
    std::swap(skillid_, other->skillid_);
    std::swap(privilege_id_, other->privilege_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata privilegeprivilege::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = privilegeprivilege_descriptor_;
  metadata.reflection = privilegeprivilege_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_privilegeprivilege::kPrivilegeprivilegeListFieldNumber;
#endif  // !_MSC_VER

Sheet_privilegeprivilege::Sheet_privilegeprivilege()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_privilegeprivilege::InitAsDefaultInstance() {
}

Sheet_privilegeprivilege::Sheet_privilegeprivilege(const Sheet_privilegeprivilege& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_privilegeprivilege::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_privilegeprivilege::~Sheet_privilegeprivilege() {
  SharedDtor();
}

void Sheet_privilegeprivilege::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_privilegeprivilege::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_privilegeprivilege::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_privilegeprivilege_descriptor_;
}

const Sheet_privilegeprivilege& Sheet_privilegeprivilege::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_privilege_2eproto();
  return *default_instance_;
}

Sheet_privilegeprivilege* Sheet_privilegeprivilege::default_instance_ = NULL;

Sheet_privilegeprivilege* Sheet_privilegeprivilege::New() const {
  return new Sheet_privilegeprivilege;
}

void Sheet_privilegeprivilege::Clear() {
  privilegeprivilege_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_privilegeprivilege::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.privilegeprivilege privilegeprivilege_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_privilegeprivilege_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_privilegeprivilege_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_privilegeprivilege_List;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Sheet_privilegeprivilege::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.privilegeprivilege privilegeprivilege_List = 1;
  for (int i = 0; i < this->privilegeprivilege_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->privilegeprivilege_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_privilegeprivilege::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.privilegeprivilege privilegeprivilege_List = 1;
  for (int i = 0; i < this->privilegeprivilege_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->privilegeprivilege_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_privilegeprivilege::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.privilegeprivilege privilegeprivilege_List = 1;
  total_size += 1 * this->privilegeprivilege_list_size();
  for (int i = 0; i < this->privilegeprivilege_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->privilegeprivilege_list(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Sheet_privilegeprivilege::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_privilegeprivilege* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_privilegeprivilege*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_privilegeprivilege::MergeFrom(const Sheet_privilegeprivilege& from) {
  GOOGLE_CHECK_NE(&from, this);
  privilegeprivilege_list_.MergeFrom(from.privilegeprivilege_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_privilegeprivilege::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_privilegeprivilege::CopyFrom(const Sheet_privilegeprivilege& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_privilegeprivilege::IsInitialized() const {

  return true;
}

void Sheet_privilegeprivilege::Swap(Sheet_privilegeprivilege* other) {
  if (other != this) {
    privilegeprivilege_list_.Swap(&other->privilegeprivilege_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_privilegeprivilege::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_privilegeprivilege_descriptor_;
  metadata.reflection = Sheet_privilegeprivilege_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
