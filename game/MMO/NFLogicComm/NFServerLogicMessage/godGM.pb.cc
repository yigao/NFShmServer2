// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: godGM.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "godGM.pb.h"

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

const ::google::protobuf::Descriptor* godGMgodGM_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  godGMgodGM_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_godGMgodGM_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_godGMgodGM_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_godGM_2eproto() {
  protobuf_AddDesc_godGM_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "godGM.proto");
  GOOGLE_CHECK(file != NULL);
  godGMgodGM_descriptor_ = file->message_type(0);
  static const int godGMgodGM_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, freerechargeid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, rechargeid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, freebox_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, rechargebox_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, freeprivilege_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, payprivilege_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, costid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, costnum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, getid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, getnum_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, exchargetimes_),
  };
  godGMgodGM_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      godGMgodGM_descriptor_,
      godGMgodGM::default_instance_,
      godGMgodGM_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(godGMgodGM, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(godGMgodGM));
  Sheet_godGMgodGM_descriptor_ = file->message_type(1);
  static const int Sheet_godGMgodGM_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_godGMgodGM, godgmgodgm_list_),
  };
  Sheet_godGMgodGM_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_godGMgodGM_descriptor_,
      Sheet_godGMgodGM::default_instance_,
      Sheet_godGMgodGM_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_godGMgodGM, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_godGMgodGM, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_godGMgodGM));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_godGM_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    godGMgodGM_descriptor_, &godGMgodGM::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_godGMgodGM_descriptor_, &Sheet_godGMgodGM::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_godGM_2eproto() {
  delete godGMgodGM::default_instance_;
  delete godGMgodGM_reflection_;
  delete Sheet_godGMgodGM::default_instance_;
  delete Sheet_godGMgodGM_reflection_;
}

void protobuf_AddDesc_godGM_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013godGM.proto\022\010proto_ff\032\025yd_fieldoptions"
    ".proto\"\250\004\n\ngodGMgodGM\022\022\n\002id\030\001 \001(\005B\006\302\377\024\002i"
    "d\022*\n\004Time\030\002 \001(\005B\034\302\377\024\030\344\270\264\346\227\266\347\245\236\346\235\203\346\214\201\347\273\255\346"
    "\227\266\351\227\264\0221\n\016freeRechargeId\030\003 \001(\005B\031\302\377\024\025\346\260\270\344\271"
    "\205\347\245\236\346\235\203\350\256\241\350\264\271\347\202\271\022-\n\nrechargeId\030\004 \001(\005B\031\302\377"
    "\024\025\346\260\270\344\271\205\347\245\236\346\235\203\350\256\241\350\264\271\347\202\271\022#\n\007freeBox\030\005 \001(\003"
    "B\022\302\377\024\016\345\205\215\350\264\271\347\244\274\345\214\205id\022\'\n\013rechargeBox\030\006 \001("
    "\003B\022\302\377\024\016\346\260\270\344\271\205\347\244\274\345\214\205id\0221\n\rfreePrivilege\030\007"
    " \001(\tB\032\302\377\024\022\344\270\264\346\227\266\347\245\236\346\235\203\347\211\271\346\235\203\220\301\024 \0220\n\014payP"
    "rivilege\030\010 \001(\tB\032\302\377\024\022\346\260\270\344\271\205\347\245\236\346\235\203\347\211\271\346\235\203\220\301"
    "\024#\022\"\n\006costId\030\t \001(\003B\022\302\377\024\016\345\205\221\346\215\242\346\266\210\350\200\227id\022\'"
    "\n\007costNum\030\n \001(\005B\026\302\377\024\022\345\205\221\346\215\242\346\266\210\350\200\227\346\225\260\351\207\217\022"
    "!\n\005getId\030\013 \001(\003B\022\302\377\024\016\345\205\221\346\215\242\350\216\267\345\276\227id\022&\n\006ge"
    "tNum\030\014 \001(\005B\026\302\377\024\022\345\205\221\346\215\242\350\216\267\345\276\227\346\225\260\351\207\217\022-\n\rex"
    "chargeTimes\030\r \001(\005B\026\302\377\024\022\346\257\217\346\227\245\345\205\221\346\215\242\346\254\241\346\225"
    "\260\"G\n\020Sheet_godGMgodGM\0223\n\017godGMgodGM_List"
    "\030\001 \003(\0132\024.proto_ff.godGMgodGMB\004\210\301\024i", 674);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "godGM.proto", &protobuf_RegisterTypes);
  godGMgodGM::default_instance_ = new godGMgodGM();
  Sheet_godGMgodGM::default_instance_ = new Sheet_godGMgodGM();
  godGMgodGM::default_instance_->InitAsDefaultInstance();
  Sheet_godGMgodGM::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_godGM_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_godGM_2eproto {
  StaticDescriptorInitializer_godGM_2eproto() {
    protobuf_AddDesc_godGM_2eproto();
  }
} static_descriptor_initializer_godGM_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int godGMgodGM::kIdFieldNumber;
const int godGMgodGM::kTimeFieldNumber;
const int godGMgodGM::kFreeRechargeIdFieldNumber;
const int godGMgodGM::kRechargeIdFieldNumber;
const int godGMgodGM::kFreeBoxFieldNumber;
const int godGMgodGM::kRechargeBoxFieldNumber;
const int godGMgodGM::kFreePrivilegeFieldNumber;
const int godGMgodGM::kPayPrivilegeFieldNumber;
const int godGMgodGM::kCostIdFieldNumber;
const int godGMgodGM::kCostNumFieldNumber;
const int godGMgodGM::kGetIdFieldNumber;
const int godGMgodGM::kGetNumFieldNumber;
const int godGMgodGM::kExchargeTimesFieldNumber;
#endif  // !_MSC_VER

godGMgodGM::godGMgodGM()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void godGMgodGM::InitAsDefaultInstance() {
}

godGMgodGM::godGMgodGM(const godGMgodGM& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void godGMgodGM::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  time_ = 0;
  freerechargeid_ = 0;
  rechargeid_ = 0;
  freebox_ = GOOGLE_LONGLONG(0);
  rechargebox_ = GOOGLE_LONGLONG(0);
  freeprivilege_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  payprivilege_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  costid_ = GOOGLE_LONGLONG(0);
  costnum_ = 0;
  getid_ = GOOGLE_LONGLONG(0);
  getnum_ = 0;
  exchargetimes_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

godGMgodGM::~godGMgodGM() {
  SharedDtor();
}

void godGMgodGM::SharedDtor() {
  if (freeprivilege_ != &::google::protobuf::internal::kEmptyString) {
    delete freeprivilege_;
  }
  if (payprivilege_ != &::google::protobuf::internal::kEmptyString) {
    delete payprivilege_;
  }
  if (this != default_instance_) {
  }
}

void godGMgodGM::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* godGMgodGM::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return godGMgodGM_descriptor_;
}

const godGMgodGM& godGMgodGM::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_godGM_2eproto();
  return *default_instance_;
}

godGMgodGM* godGMgodGM::default_instance_ = NULL;

godGMgodGM* godGMgodGM::New() const {
  return new godGMgodGM;
}

void godGMgodGM::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    time_ = 0;
    freerechargeid_ = 0;
    rechargeid_ = 0;
    freebox_ = GOOGLE_LONGLONG(0);
    rechargebox_ = GOOGLE_LONGLONG(0);
    if (has_freeprivilege()) {
      if (freeprivilege_ != &::google::protobuf::internal::kEmptyString) {
        freeprivilege_->clear();
      }
    }
    if (has_payprivilege()) {
      if (payprivilege_ != &::google::protobuf::internal::kEmptyString) {
        payprivilege_->clear();
      }
    }
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    costid_ = GOOGLE_LONGLONG(0);
    costnum_ = 0;
    getid_ = GOOGLE_LONGLONG(0);
    getnum_ = 0;
    exchargetimes_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool godGMgodGM::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Time;
        break;
      }

      // optional int32 Time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));
          set_has_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_freeRechargeId;
        break;
      }

      // optional int32 freeRechargeId = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_freeRechargeId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &freerechargeid_)));
          set_has_freerechargeid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_rechargeId;
        break;
      }

      // optional int32 rechargeId = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rechargeId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rechargeid_)));
          set_has_rechargeid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_freeBox;
        break;
      }

      // optional int64 freeBox = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_freeBox:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &freebox_)));
          set_has_freebox();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_rechargeBox;
        break;
      }

      // optional int64 rechargeBox = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_rechargeBox:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &rechargebox_)));
          set_has_rechargebox();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_freePrivilege;
        break;
      }

      // optional string freePrivilege = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_freePrivilege:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_freeprivilege()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->freeprivilege().data(), this->freeprivilege().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(66)) goto parse_payPrivilege;
        break;
      }

      // optional string payPrivilege = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_payPrivilege:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_payprivilege()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->payprivilege().data(), this->payprivilege().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(72)) goto parse_costId;
        break;
      }

      // optional int64 costId = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_costId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &costid_)));
          set_has_costid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(80)) goto parse_costNum;
        break;
      }

      // optional int32 costNum = 10;
      case 10: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_costNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &costnum_)));
          set_has_costnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(88)) goto parse_getId;
        break;
      }

      // optional int64 getId = 11;
      case 11: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_getId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &getid_)));
          set_has_getid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(96)) goto parse_getNum;
        break;
      }

      // optional int32 getNum = 12;
      case 12: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_getNum:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &getnum_)));
          set_has_getnum();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(104)) goto parse_exchargeTimes;
        break;
      }

      // optional int32 exchargeTimes = 13;
      case 13: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_exchargeTimes:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &exchargetimes_)));
          set_has_exchargetimes();
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

void godGMgodGM::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 Time = 2;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->time(), output);
  }

  // optional int32 freeRechargeId = 3;
  if (has_freerechargeid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->freerechargeid(), output);
  }

  // optional int32 rechargeId = 4;
  if (has_rechargeid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->rechargeid(), output);
  }

  // optional int64 freeBox = 5;
  if (has_freebox()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->freebox(), output);
  }

  // optional int64 rechargeBox = 6;
  if (has_rechargebox()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->rechargebox(), output);
  }

  // optional string freePrivilege = 7;
  if (has_freeprivilege()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->freeprivilege().data(), this->freeprivilege().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->freeprivilege(), output);
  }

  // optional string payPrivilege = 8;
  if (has_payprivilege()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->payprivilege().data(), this->payprivilege().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      8, this->payprivilege(), output);
  }

  // optional int64 costId = 9;
  if (has_costid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(9, this->costid(), output);
  }

  // optional int32 costNum = 10;
  if (has_costnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(10, this->costnum(), output);
  }

  // optional int64 getId = 11;
  if (has_getid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(11, this->getid(), output);
  }

  // optional int32 getNum = 12;
  if (has_getnum()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(12, this->getnum(), output);
  }

  // optional int32 exchargeTimes = 13;
  if (has_exchargetimes()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(13, this->exchargetimes(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* godGMgodGM::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 Time = 2;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->time(), target);
  }

  // optional int32 freeRechargeId = 3;
  if (has_freerechargeid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->freerechargeid(), target);
  }

  // optional int32 rechargeId = 4;
  if (has_rechargeid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->rechargeid(), target);
  }

  // optional int64 freeBox = 5;
  if (has_freebox()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(5, this->freebox(), target);
  }

  // optional int64 rechargeBox = 6;
  if (has_rechargebox()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(6, this->rechargebox(), target);
  }

  // optional string freePrivilege = 7;
  if (has_freeprivilege()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->freeprivilege().data(), this->freeprivilege().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->freeprivilege(), target);
  }

  // optional string payPrivilege = 8;
  if (has_payprivilege()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->payprivilege().data(), this->payprivilege().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        8, this->payprivilege(), target);
  }

  // optional int64 costId = 9;
  if (has_costid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(9, this->costid(), target);
  }

  // optional int32 costNum = 10;
  if (has_costnum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(10, this->costnum(), target);
  }

  // optional int64 getId = 11;
  if (has_getid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(11, this->getid(), target);
  }

  // optional int32 getNum = 12;
  if (has_getnum()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(12, this->getnum(), target);
  }

  // optional int32 exchargeTimes = 13;
  if (has_exchargetimes()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(13, this->exchargetimes(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int godGMgodGM::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 Time = 2;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->time());
    }

    // optional int32 freeRechargeId = 3;
    if (has_freerechargeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->freerechargeid());
    }

    // optional int32 rechargeId = 4;
    if (has_rechargeid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rechargeid());
    }

    // optional int64 freeBox = 5;
    if (has_freebox()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->freebox());
    }

    // optional int64 rechargeBox = 6;
    if (has_rechargebox()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->rechargebox());
    }

    // optional string freePrivilege = 7;
    if (has_freeprivilege()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->freeprivilege());
    }

    // optional string payPrivilege = 8;
    if (has_payprivilege()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->payprivilege());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional int64 costId = 9;
    if (has_costid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->costid());
    }

    // optional int32 costNum = 10;
    if (has_costnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->costnum());
    }

    // optional int64 getId = 11;
    if (has_getid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->getid());
    }

    // optional int32 getNum = 12;
    if (has_getnum()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->getnum());
    }

    // optional int32 exchargeTimes = 13;
    if (has_exchargetimes()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->exchargetimes());
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

void godGMgodGM::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const godGMgodGM* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const godGMgodGM*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void godGMgodGM::MergeFrom(const godGMgodGM& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_freerechargeid()) {
      set_freerechargeid(from.freerechargeid());
    }
    if (from.has_rechargeid()) {
      set_rechargeid(from.rechargeid());
    }
    if (from.has_freebox()) {
      set_freebox(from.freebox());
    }
    if (from.has_rechargebox()) {
      set_rechargebox(from.rechargebox());
    }
    if (from.has_freeprivilege()) {
      set_freeprivilege(from.freeprivilege());
    }
    if (from.has_payprivilege()) {
      set_payprivilege(from.payprivilege());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_costid()) {
      set_costid(from.costid());
    }
    if (from.has_costnum()) {
      set_costnum(from.costnum());
    }
    if (from.has_getid()) {
      set_getid(from.getid());
    }
    if (from.has_getnum()) {
      set_getnum(from.getnum());
    }
    if (from.has_exchargetimes()) {
      set_exchargetimes(from.exchargetimes());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void godGMgodGM::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void godGMgodGM::CopyFrom(const godGMgodGM& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool godGMgodGM::IsInitialized() const {

  return true;
}

void godGMgodGM::Swap(godGMgodGM* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(time_, other->time_);
    std::swap(freerechargeid_, other->freerechargeid_);
    std::swap(rechargeid_, other->rechargeid_);
    std::swap(freebox_, other->freebox_);
    std::swap(rechargebox_, other->rechargebox_);
    std::swap(freeprivilege_, other->freeprivilege_);
    std::swap(payprivilege_, other->payprivilege_);
    std::swap(costid_, other->costid_);
    std::swap(costnum_, other->costnum_);
    std::swap(getid_, other->getid_);
    std::swap(getnum_, other->getnum_);
    std::swap(exchargetimes_, other->exchargetimes_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata godGMgodGM::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = godGMgodGM_descriptor_;
  metadata.reflection = godGMgodGM_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_godGMgodGM::kGodGMgodGMListFieldNumber;
#endif  // !_MSC_VER

Sheet_godGMgodGM::Sheet_godGMgodGM()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_godGMgodGM::InitAsDefaultInstance() {
}

Sheet_godGMgodGM::Sheet_godGMgodGM(const Sheet_godGMgodGM& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_godGMgodGM::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_godGMgodGM::~Sheet_godGMgodGM() {
  SharedDtor();
}

void Sheet_godGMgodGM::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_godGMgodGM::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_godGMgodGM::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_godGMgodGM_descriptor_;
}

const Sheet_godGMgodGM& Sheet_godGMgodGM::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_godGM_2eproto();
  return *default_instance_;
}

Sheet_godGMgodGM* Sheet_godGMgodGM::default_instance_ = NULL;

Sheet_godGMgodGM* Sheet_godGMgodGM::New() const {
  return new Sheet_godGMgodGM;
}

void Sheet_godGMgodGM::Clear() {
  godgmgodgm_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_godGMgodGM::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.godGMgodGM godGMgodGM_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_godGMgodGM_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_godgmgodgm_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_godGMgodGM_List;
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

void Sheet_godGMgodGM::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.godGMgodGM godGMgodGM_List = 1;
  for (int i = 0; i < this->godgmgodgm_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->godgmgodgm_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_godGMgodGM::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.godGMgodGM godGMgodGM_List = 1;
  for (int i = 0; i < this->godgmgodgm_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->godgmgodgm_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_godGMgodGM::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.godGMgodGM godGMgodGM_List = 1;
  total_size += 1 * this->godgmgodgm_list_size();
  for (int i = 0; i < this->godgmgodgm_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->godgmgodgm_list(i));
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

void Sheet_godGMgodGM::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_godGMgodGM* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_godGMgodGM*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_godGMgodGM::MergeFrom(const Sheet_godGMgodGM& from) {
  GOOGLE_CHECK_NE(&from, this);
  godgmgodgm_list_.MergeFrom(from.godgmgodgm_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_godGMgodGM::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_godGMgodGM::CopyFrom(const Sheet_godGMgodGM& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_godGMgodGM::IsInitialized() const {

  return true;
}

void Sheet_godGMgodGM::Swap(Sheet_godGMgodGM* other) {
  if (other != this) {
    godgmgodgm_list_.Swap(&other->godgmgodgm_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_godGMgodGM::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_godGMgodGM_descriptor_;
  metadata.reflection = Sheet_godGMgodGM_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)