// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chooseGift.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "chooseGift.pb.h"

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

const ::google::protobuf::Descriptor* chooseGiftchooseGiftrechargeDesc_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  chooseGiftchooseGiftrechargeDesc_reflection_ = NULL;
const ::google::protobuf::Descriptor* chooseGiftchooseGift_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  chooseGiftchooseGift_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_chooseGiftchooseGift_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_chooseGiftchooseGift_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_chooseGift_2eproto() {
  protobuf_AddDesc_chooseGift_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "chooseGift.proto");
  GOOGLE_CHECK(file != NULL);
  chooseGiftchooseGiftrechargeDesc_descriptor_ = file->message_type(0);
  static const int chooseGiftchooseGiftrechargeDesc_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGiftrechargeDesc, box_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGiftrechargeDesc, id_),
  };
  chooseGiftchooseGiftrechargeDesc_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      chooseGiftchooseGiftrechargeDesc_descriptor_,
      chooseGiftchooseGiftrechargeDesc::default_instance_,
      chooseGiftchooseGiftrechargeDesc_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGiftrechargeDesc, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGiftrechargeDesc, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(chooseGiftchooseGiftrechargeDesc));
  chooseGiftchooseGift_descriptor_ = file->message_type(1);
  static const int chooseGiftchooseGift_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, box_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, switchtime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, recharge_),
  };
  chooseGiftchooseGift_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      chooseGiftchooseGift_descriptor_,
      chooseGiftchooseGift::default_instance_,
      chooseGiftchooseGift_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(chooseGiftchooseGift, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(chooseGiftchooseGift));
  Sheet_chooseGiftchooseGift_descriptor_ = file->message_type(2);
  static const int Sheet_chooseGiftchooseGift_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_chooseGiftchooseGift, choosegiftchoosegift_list_),
  };
  Sheet_chooseGiftchooseGift_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_chooseGiftchooseGift_descriptor_,
      Sheet_chooseGiftchooseGift::default_instance_,
      Sheet_chooseGiftchooseGift_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_chooseGiftchooseGift, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_chooseGiftchooseGift, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_chooseGiftchooseGift));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_chooseGift_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    chooseGiftchooseGiftrechargeDesc_descriptor_, &chooseGiftchooseGiftrechargeDesc::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    chooseGiftchooseGift_descriptor_, &chooseGiftchooseGift::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_chooseGiftchooseGift_descriptor_, &Sheet_chooseGiftchooseGift::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_chooseGift_2eproto() {
  delete chooseGiftchooseGiftrechargeDesc::default_instance_;
  delete chooseGiftchooseGiftrechargeDesc_reflection_;
  delete chooseGiftchooseGift::default_instance_;
  delete chooseGiftchooseGift_reflection_;
  delete Sheet_chooseGiftchooseGift::default_instance_;
  delete Sheet_chooseGiftchooseGift_reflection_;
}

void protobuf_AddDesc_chooseGift_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020chooseGift.proto\022\010proto_ff\032\025yd_fieldop"
    "tions.proto\"V\n chooseGiftchooseGiftrecha"
    "rgeDesc\022\027\n\003Box\030\001 \001(\003B\n\302\377\024\006\345\245\226\345\212\261\022\031\n\002Id\030\002"
    " \001(\005B\r\302\377\024\t\350\256\241\350\264\271\347\202\271\"\275\001\n\024chooseGiftchoose"
    "Gift\022\022\n\002id\030\001 \001(\005B\006\302\377\024\002id\022\035\n\003box\030\002 \001(\003B\020\302"
    "\377\024\014\347\244\274\345\214\205\345\245\226\345\212\261\022$\n\nswitchTime\030\003 \001(\005B\020\302\377\024"
    "\014\345\210\207\346\215\242\346\227\266\351\227\264\022L\n\010recharge\030\004 \003(\0132*.proto_"
    "ff.chooseGiftchooseGiftrechargeDescB\016\302\377\024"
    "\006\345\205\205\345\200\274\210\301\024\002\"e\n\032Sheet_chooseGiftchooseGif"
    "t\022G\n\031chooseGiftchooseGift_List\030\001 \003(\0132\036.p"
    "roto_ff.chooseGiftchooseGiftB\004\210\301\024\024", 434);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "chooseGift.proto", &protobuf_RegisterTypes);
  chooseGiftchooseGiftrechargeDesc::default_instance_ = new chooseGiftchooseGiftrechargeDesc();
  chooseGiftchooseGift::default_instance_ = new chooseGiftchooseGift();
  Sheet_chooseGiftchooseGift::default_instance_ = new Sheet_chooseGiftchooseGift();
  chooseGiftchooseGiftrechargeDesc::default_instance_->InitAsDefaultInstance();
  chooseGiftchooseGift::default_instance_->InitAsDefaultInstance();
  Sheet_chooseGiftchooseGift::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_chooseGift_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_chooseGift_2eproto {
  StaticDescriptorInitializer_chooseGift_2eproto() {
    protobuf_AddDesc_chooseGift_2eproto();
  }
} static_descriptor_initializer_chooseGift_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int chooseGiftchooseGiftrechargeDesc::kBoxFieldNumber;
const int chooseGiftchooseGiftrechargeDesc::kIdFieldNumber;
#endif  // !_MSC_VER

chooseGiftchooseGiftrechargeDesc::chooseGiftchooseGiftrechargeDesc()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void chooseGiftchooseGiftrechargeDesc::InitAsDefaultInstance() {
}

chooseGiftchooseGiftrechargeDesc::chooseGiftchooseGiftrechargeDesc(const chooseGiftchooseGiftrechargeDesc& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void chooseGiftchooseGiftrechargeDesc::SharedCtor() {
  _cached_size_ = 0;
  box_ = GOOGLE_LONGLONG(0);
  id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

chooseGiftchooseGiftrechargeDesc::~chooseGiftchooseGiftrechargeDesc() {
  SharedDtor();
}

void chooseGiftchooseGiftrechargeDesc::SharedDtor() {
  if (this != default_instance_) {
  }
}

void chooseGiftchooseGiftrechargeDesc::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* chooseGiftchooseGiftrechargeDesc::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return chooseGiftchooseGiftrechargeDesc_descriptor_;
}

const chooseGiftchooseGiftrechargeDesc& chooseGiftchooseGiftrechargeDesc::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chooseGift_2eproto();
  return *default_instance_;
}

chooseGiftchooseGiftrechargeDesc* chooseGiftchooseGiftrechargeDesc::default_instance_ = NULL;

chooseGiftchooseGiftrechargeDesc* chooseGiftchooseGiftrechargeDesc::New() const {
  return new chooseGiftchooseGiftrechargeDesc;
}

void chooseGiftchooseGiftrechargeDesc::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    box_ = GOOGLE_LONGLONG(0);
    id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool chooseGiftchooseGiftrechargeDesc::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 Box = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &box_)));
          set_has_box();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_Id;
        break;
      }

      // optional int32 Id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_Id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
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

void chooseGiftchooseGiftrechargeDesc::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 Box = 1;
  if (has_box()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->box(), output);
  }

  // optional int32 Id = 2;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* chooseGiftchooseGiftrechargeDesc::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 Box = 1;
  if (has_box()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->box(), target);
  }

  // optional int32 Id = 2;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int chooseGiftchooseGiftrechargeDesc::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 Box = 1;
    if (has_box()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->box());
    }

    // optional int32 Id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
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

void chooseGiftchooseGiftrechargeDesc::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const chooseGiftchooseGiftrechargeDesc* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const chooseGiftchooseGiftrechargeDesc*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void chooseGiftchooseGiftrechargeDesc::MergeFrom(const chooseGiftchooseGiftrechargeDesc& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_box()) {
      set_box(from.box());
    }
    if (from.has_id()) {
      set_id(from.id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void chooseGiftchooseGiftrechargeDesc::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void chooseGiftchooseGiftrechargeDesc::CopyFrom(const chooseGiftchooseGiftrechargeDesc& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool chooseGiftchooseGiftrechargeDesc::IsInitialized() const {

  return true;
}

void chooseGiftchooseGiftrechargeDesc::Swap(chooseGiftchooseGiftrechargeDesc* other) {
  if (other != this) {
    std::swap(box_, other->box_);
    std::swap(id_, other->id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata chooseGiftchooseGiftrechargeDesc::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = chooseGiftchooseGiftrechargeDesc_descriptor_;
  metadata.reflection = chooseGiftchooseGiftrechargeDesc_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int chooseGiftchooseGift::kIdFieldNumber;
const int chooseGiftchooseGift::kBoxFieldNumber;
const int chooseGiftchooseGift::kSwitchTimeFieldNumber;
const int chooseGiftchooseGift::kRechargeFieldNumber;
#endif  // !_MSC_VER

chooseGiftchooseGift::chooseGiftchooseGift()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void chooseGiftchooseGift::InitAsDefaultInstance() {
}

chooseGiftchooseGift::chooseGiftchooseGift(const chooseGiftchooseGift& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void chooseGiftchooseGift::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  box_ = GOOGLE_LONGLONG(0);
  switchtime_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

chooseGiftchooseGift::~chooseGiftchooseGift() {
  SharedDtor();
}

void chooseGiftchooseGift::SharedDtor() {
  if (this != default_instance_) {
  }
}

void chooseGiftchooseGift::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* chooseGiftchooseGift::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return chooseGiftchooseGift_descriptor_;
}

const chooseGiftchooseGift& chooseGiftchooseGift::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chooseGift_2eproto();
  return *default_instance_;
}

chooseGiftchooseGift* chooseGiftchooseGift::default_instance_ = NULL;

chooseGiftchooseGift* chooseGiftchooseGift::New() const {
  return new chooseGiftchooseGift;
}

void chooseGiftchooseGift::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    box_ = GOOGLE_LONGLONG(0);
    switchtime_ = 0;
  }
  recharge_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool chooseGiftchooseGift::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_box;
        break;
      }

      // optional int64 box = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_box:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &box_)));
          set_has_box();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_switchTime;
        break;
      }

      // optional int32 switchTime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_switchTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &switchtime_)));
          set_has_switchtime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_recharge;
        break;
      }

      // repeated .proto_ff.chooseGiftchooseGiftrechargeDesc recharge = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_recharge:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_recharge()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_recharge;
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

void chooseGiftchooseGift::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int64 box = 2;
  if (has_box()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->box(), output);
  }

  // optional int32 switchTime = 3;
  if (has_switchtime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->switchtime(), output);
  }

  // repeated .proto_ff.chooseGiftchooseGiftrechargeDesc recharge = 4;
  for (int i = 0; i < this->recharge_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->recharge(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* chooseGiftchooseGift::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int64 box = 2;
  if (has_box()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->box(), target);
  }

  // optional int32 switchTime = 3;
  if (has_switchtime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->switchtime(), target);
  }

  // repeated .proto_ff.chooseGiftchooseGiftrechargeDesc recharge = 4;
  for (int i = 0; i < this->recharge_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->recharge(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int chooseGiftchooseGift::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int64 box = 2;
    if (has_box()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->box());
    }

    // optional int32 switchTime = 3;
    if (has_switchtime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->switchtime());
    }

  }
  // repeated .proto_ff.chooseGiftchooseGiftrechargeDesc recharge = 4;
  total_size += 1 * this->recharge_size();
  for (int i = 0; i < this->recharge_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->recharge(i));
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

void chooseGiftchooseGift::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const chooseGiftchooseGift* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const chooseGiftchooseGift*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void chooseGiftchooseGift::MergeFrom(const chooseGiftchooseGift& from) {
  GOOGLE_CHECK_NE(&from, this);
  recharge_.MergeFrom(from.recharge_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_box()) {
      set_box(from.box());
    }
    if (from.has_switchtime()) {
      set_switchtime(from.switchtime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void chooseGiftchooseGift::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void chooseGiftchooseGift::CopyFrom(const chooseGiftchooseGift& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool chooseGiftchooseGift::IsInitialized() const {

  return true;
}

void chooseGiftchooseGift::Swap(chooseGiftchooseGift* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(box_, other->box_);
    std::swap(switchtime_, other->switchtime_);
    recharge_.Swap(&other->recharge_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata chooseGiftchooseGift::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = chooseGiftchooseGift_descriptor_;
  metadata.reflection = chooseGiftchooseGift_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_chooseGiftchooseGift::kChooseGiftchooseGiftListFieldNumber;
#endif  // !_MSC_VER

Sheet_chooseGiftchooseGift::Sheet_chooseGiftchooseGift()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_chooseGiftchooseGift::InitAsDefaultInstance() {
}

Sheet_chooseGiftchooseGift::Sheet_chooseGiftchooseGift(const Sheet_chooseGiftchooseGift& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_chooseGiftchooseGift::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_chooseGiftchooseGift::~Sheet_chooseGiftchooseGift() {
  SharedDtor();
}

void Sheet_chooseGiftchooseGift::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_chooseGiftchooseGift::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_chooseGiftchooseGift::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_chooseGiftchooseGift_descriptor_;
}

const Sheet_chooseGiftchooseGift& Sheet_chooseGiftchooseGift::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_chooseGift_2eproto();
  return *default_instance_;
}

Sheet_chooseGiftchooseGift* Sheet_chooseGiftchooseGift::default_instance_ = NULL;

Sheet_chooseGiftchooseGift* Sheet_chooseGiftchooseGift::New() const {
  return new Sheet_chooseGiftchooseGift;
}

void Sheet_chooseGiftchooseGift::Clear() {
  choosegiftchoosegift_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_chooseGiftchooseGift::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.chooseGiftchooseGift chooseGiftchooseGift_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_chooseGiftchooseGift_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_choosegiftchoosegift_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_chooseGiftchooseGift_List;
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

void Sheet_chooseGiftchooseGift::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.chooseGiftchooseGift chooseGiftchooseGift_List = 1;
  for (int i = 0; i < this->choosegiftchoosegift_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->choosegiftchoosegift_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_chooseGiftchooseGift::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.chooseGiftchooseGift chooseGiftchooseGift_List = 1;
  for (int i = 0; i < this->choosegiftchoosegift_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->choosegiftchoosegift_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_chooseGiftchooseGift::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.chooseGiftchooseGift chooseGiftchooseGift_List = 1;
  total_size += 1 * this->choosegiftchoosegift_list_size();
  for (int i = 0; i < this->choosegiftchoosegift_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->choosegiftchoosegift_list(i));
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

void Sheet_chooseGiftchooseGift::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_chooseGiftchooseGift* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_chooseGiftchooseGift*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_chooseGiftchooseGift::MergeFrom(const Sheet_chooseGiftchooseGift& from) {
  GOOGLE_CHECK_NE(&from, this);
  choosegiftchoosegift_list_.MergeFrom(from.choosegiftchoosegift_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_chooseGiftchooseGift::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_chooseGiftchooseGift::CopyFrom(const Sheet_chooseGiftchooseGift& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_chooseGiftchooseGift::IsInitialized() const {

  return true;
}

void Sheet_chooseGiftchooseGift::Swap(Sheet_chooseGiftchooseGift* other) {
  if (other != this) {
    choosegiftchoosegift_list_.Swap(&other->choosegiftchoosegift_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_chooseGiftchooseGift::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_chooseGiftchooseGift_descriptor_;
  metadata.reflection = Sheet_chooseGiftchooseGift_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
