// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ui.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ui.pb.h"

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

const ::google::protobuf::Descriptor* uieffect_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  uieffect_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_uieffect_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_uieffect_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ui_2eproto() {
  protobuf_AddDesc_ui_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ui.proto");
  GOOGLE_CHECK(file != NULL);
  uieffect_descriptor_ = file->message_type(0);
  static const int uieffect_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(uieffect, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(uieffect, time_),
  };
  uieffect_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      uieffect_descriptor_,
      uieffect::default_instance_,
      uieffect_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(uieffect, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(uieffect, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(uieffect));
  Sheet_uieffect_descriptor_ = file->message_type(1);
  static const int Sheet_uieffect_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_uieffect, uieffect_list_),
  };
  Sheet_uieffect_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_uieffect_descriptor_,
      Sheet_uieffect::default_instance_,
      Sheet_uieffect_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_uieffect, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_uieffect, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_uieffect));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ui_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    uieffect_descriptor_, &uieffect::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_uieffect_descriptor_, &Sheet_uieffect::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ui_2eproto() {
  delete uieffect::default_instance_;
  delete uieffect_reflection_;
  delete Sheet_uieffect::default_instance_;
  delete Sheet_uieffect_reflection_;
}

void protobuf_AddDesc_ui_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\010ui.proto\022\010proto_ff\032\025yd_fieldoptions.pr"
    "oto\"D\n\010uieffect\022\030\n\002id\030\001 \001(\003B\014\302\377\024\010\347\211\271\346\225\210I"
    "D\022\036\n\004time\030\002 \001(\005B\020\302\377\024\014\346\222\255\346\224\276\346\227\266\351\227\264\"B\n\016She"
    "et_uieffect\0220\n\ruieffect_List\030\001 \003(\0132\022.pro"
    "to_ff.uieffectB\005\210\301\024\310\001", 181);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ui.proto", &protobuf_RegisterTypes);
  uieffect::default_instance_ = new uieffect();
  Sheet_uieffect::default_instance_ = new Sheet_uieffect();
  uieffect::default_instance_->InitAsDefaultInstance();
  Sheet_uieffect::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ui_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ui_2eproto {
  StaticDescriptorInitializer_ui_2eproto() {
    protobuf_AddDesc_ui_2eproto();
  }
} static_descriptor_initializer_ui_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int uieffect::kIdFieldNumber;
const int uieffect::kTimeFieldNumber;
#endif  // !_MSC_VER

uieffect::uieffect()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void uieffect::InitAsDefaultInstance() {
}

uieffect::uieffect(const uieffect& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void uieffect::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  time_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

uieffect::~uieffect() {
  SharedDtor();
}

void uieffect::SharedDtor() {
  if (this != default_instance_) {
  }
}

void uieffect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* uieffect::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return uieffect_descriptor_;
}

const uieffect& uieffect::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ui_2eproto();
  return *default_instance_;
}

uieffect* uieffect::default_instance_ = NULL;

uieffect* uieffect::New() const {
  return new uieffect;
}

void uieffect::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_LONGLONG(0);
    time_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool uieffect::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_time;
        break;
      }

      // optional int32 time = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &time_)));
          set_has_time();
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

void uieffect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional int32 time = 2;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->time(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* uieffect::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // optional int32 time = 2;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->time(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int uieffect::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional int32 time = 2;
    if (has_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->time());
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

void uieffect::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const uieffect* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const uieffect*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void uieffect::MergeFrom(const uieffect& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void uieffect::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void uieffect::CopyFrom(const uieffect& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool uieffect::IsInitialized() const {

  return true;
}

void uieffect::Swap(uieffect* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata uieffect::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = uieffect_descriptor_;
  metadata.reflection = uieffect_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_uieffect::kUieffectListFieldNumber;
#endif  // !_MSC_VER

Sheet_uieffect::Sheet_uieffect()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_uieffect::InitAsDefaultInstance() {
}

Sheet_uieffect::Sheet_uieffect(const Sheet_uieffect& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_uieffect::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_uieffect::~Sheet_uieffect() {
  SharedDtor();
}

void Sheet_uieffect::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_uieffect::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_uieffect::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_uieffect_descriptor_;
}

const Sheet_uieffect& Sheet_uieffect::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ui_2eproto();
  return *default_instance_;
}

Sheet_uieffect* Sheet_uieffect::default_instance_ = NULL;

Sheet_uieffect* Sheet_uieffect::New() const {
  return new Sheet_uieffect;
}

void Sheet_uieffect::Clear() {
  uieffect_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_uieffect::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.uieffect uieffect_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_uieffect_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_uieffect_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_uieffect_List;
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

void Sheet_uieffect::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.uieffect uieffect_List = 1;
  for (int i = 0; i < this->uieffect_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->uieffect_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_uieffect::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.uieffect uieffect_List = 1;
  for (int i = 0; i < this->uieffect_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->uieffect_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_uieffect::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.uieffect uieffect_List = 1;
  total_size += 1 * this->uieffect_list_size();
  for (int i = 0; i < this->uieffect_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->uieffect_list(i));
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

void Sheet_uieffect::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_uieffect* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_uieffect*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_uieffect::MergeFrom(const Sheet_uieffect& from) {
  GOOGLE_CHECK_NE(&from, this);
  uieffect_list_.MergeFrom(from.uieffect_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_uieffect::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_uieffect::CopyFrom(const Sheet_uieffect& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_uieffect::IsInitialized() const {

  return true;
}

void Sheet_uieffect::Swap(Sheet_uieffect* other) {
  if (other != this) {
    uieffect_list_.Swap(&other->uieffect_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_uieffect::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_uieffect_descriptor_;
  metadata.reflection = Sheet_uieffect_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
