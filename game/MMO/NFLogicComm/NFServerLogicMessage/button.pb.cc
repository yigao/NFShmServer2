// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: button.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "button.pb.h"

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

const ::google::protobuf::Descriptor* buttonbutton_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  buttonbutton_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_buttonbutton_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_buttonbutton_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_button_2eproto() {
  protobuf_AddDesc_button_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "button.proto");
  GOOGLE_CHECK(file != NULL);
  buttonbutton_descriptor_ = file->message_type(0);
  static const int buttonbutton_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(buttonbutton, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(buttonbutton, time_),
  };
  buttonbutton_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      buttonbutton_descriptor_,
      buttonbutton::default_instance_,
      buttonbutton_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(buttonbutton, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(buttonbutton, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(buttonbutton));
  Sheet_buttonbutton_descriptor_ = file->message_type(1);
  static const int Sheet_buttonbutton_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_buttonbutton, buttonbutton_list_),
  };
  Sheet_buttonbutton_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_buttonbutton_descriptor_,
      Sheet_buttonbutton::default_instance_,
      Sheet_buttonbutton_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_buttonbutton, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_buttonbutton, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_buttonbutton));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_button_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    buttonbutton_descriptor_, &buttonbutton::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_buttonbutton_descriptor_, &Sheet_buttonbutton::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_button_2eproto() {
  delete buttonbutton::default_instance_;
  delete buttonbutton_reflection_;
  delete Sheet_buttonbutton::default_instance_;
  delete Sheet_buttonbutton_reflection_;
}

void protobuf_AddDesc_button_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014button.proto\022\010proto_ff\032\025yd_fieldoption"
    "s.proto\"H\n\014buttonbutton\022\030\n\002id\030\001 \001(\003B\014\302\377\024"
    "\010\346\214\211\351\222\256id\022\036\n\004time\030\002 \001(\005B\020\302\377\024\014\350\257\273\346\235\241\346\227\266\351\227"
    "\264\"N\n\022Sheet_buttonbutton\0228\n\021buttonbutton_"
    "List\030\001 \003(\0132\026.proto_ff.buttonbuttonB\005\210\301\024\220"
    "\001", 201);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "button.proto", &protobuf_RegisterTypes);
  buttonbutton::default_instance_ = new buttonbutton();
  Sheet_buttonbutton::default_instance_ = new Sheet_buttonbutton();
  buttonbutton::default_instance_->InitAsDefaultInstance();
  Sheet_buttonbutton::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_button_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_button_2eproto {
  StaticDescriptorInitializer_button_2eproto() {
    protobuf_AddDesc_button_2eproto();
  }
} static_descriptor_initializer_button_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int buttonbutton::kIdFieldNumber;
const int buttonbutton::kTimeFieldNumber;
#endif  // !_MSC_VER

buttonbutton::buttonbutton()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void buttonbutton::InitAsDefaultInstance() {
}

buttonbutton::buttonbutton(const buttonbutton& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void buttonbutton::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  time_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

buttonbutton::~buttonbutton() {
  SharedDtor();
}

void buttonbutton::SharedDtor() {
  if (this != default_instance_) {
  }
}

void buttonbutton::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* buttonbutton::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return buttonbutton_descriptor_;
}

const buttonbutton& buttonbutton::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_button_2eproto();
  return *default_instance_;
}

buttonbutton* buttonbutton::default_instance_ = NULL;

buttonbutton* buttonbutton::New() const {
  return new buttonbutton;
}

void buttonbutton::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_LONGLONG(0);
    time_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool buttonbutton::MergePartialFromCodedStream(
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

void buttonbutton::SerializeWithCachedSizes(
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

::google::protobuf::uint8* buttonbutton::SerializeWithCachedSizesToArray(
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

int buttonbutton::ByteSize() const {
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

void buttonbutton::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const buttonbutton* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const buttonbutton*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void buttonbutton::MergeFrom(const buttonbutton& from) {
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

void buttonbutton::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void buttonbutton::CopyFrom(const buttonbutton& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool buttonbutton::IsInitialized() const {

  return true;
}

void buttonbutton::Swap(buttonbutton* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(time_, other->time_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata buttonbutton::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = buttonbutton_descriptor_;
  metadata.reflection = buttonbutton_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_buttonbutton::kButtonbuttonListFieldNumber;
#endif  // !_MSC_VER

Sheet_buttonbutton::Sheet_buttonbutton()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_buttonbutton::InitAsDefaultInstance() {
}

Sheet_buttonbutton::Sheet_buttonbutton(const Sheet_buttonbutton& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_buttonbutton::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_buttonbutton::~Sheet_buttonbutton() {
  SharedDtor();
}

void Sheet_buttonbutton::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_buttonbutton::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_buttonbutton::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_buttonbutton_descriptor_;
}

const Sheet_buttonbutton& Sheet_buttonbutton::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_button_2eproto();
  return *default_instance_;
}

Sheet_buttonbutton* Sheet_buttonbutton::default_instance_ = NULL;

Sheet_buttonbutton* Sheet_buttonbutton::New() const {
  return new Sheet_buttonbutton;
}

void Sheet_buttonbutton::Clear() {
  buttonbutton_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_buttonbutton::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.buttonbutton buttonbutton_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_buttonbutton_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_buttonbutton_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_buttonbutton_List;
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

void Sheet_buttonbutton::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.buttonbutton buttonbutton_List = 1;
  for (int i = 0; i < this->buttonbutton_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->buttonbutton_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_buttonbutton::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.buttonbutton buttonbutton_List = 1;
  for (int i = 0; i < this->buttonbutton_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->buttonbutton_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_buttonbutton::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.buttonbutton buttonbutton_List = 1;
  total_size += 1 * this->buttonbutton_list_size();
  for (int i = 0; i < this->buttonbutton_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->buttonbutton_list(i));
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

void Sheet_buttonbutton::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_buttonbutton* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_buttonbutton*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_buttonbutton::MergeFrom(const Sheet_buttonbutton& from) {
  GOOGLE_CHECK_NE(&from, this);
  buttonbutton_list_.MergeFrom(from.buttonbutton_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_buttonbutton::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_buttonbutton::CopyFrom(const Sheet_buttonbutton& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_buttonbutton::IsInitialized() const {

  return true;
}

void Sheet_buttonbutton::Swap(Sheet_buttonbutton* other) {
  if (other != this) {
    buttonbutton_list_.Swap(&other->buttonbutton_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_buttonbutton::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_buttonbutton_descriptor_;
  metadata.reflection = Sheet_buttonbutton_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)