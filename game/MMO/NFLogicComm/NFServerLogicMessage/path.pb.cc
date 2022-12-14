// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: path.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "path.pb.h"

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

const ::google::protobuf::Descriptor* pathpath_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  pathpath_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_pathpath_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_pathpath_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_path_2eproto() {
  protobuf_AddDesc_path_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "path.proto");
  GOOGLE_CHECK(file != NULL);
  pathpath_descriptor_ = file->message_type(0);
  static const int pathpath_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pathpath, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pathpath, belongtosceneid_),
  };
  pathpath_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      pathpath_descriptor_,
      pathpath::default_instance_,
      pathpath_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pathpath, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(pathpath, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(pathpath));
  Sheet_pathpath_descriptor_ = file->message_type(1);
  static const int Sheet_pathpath_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_pathpath, pathpath_list_),
  };
  Sheet_pathpath_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_pathpath_descriptor_,
      Sheet_pathpath::default_instance_,
      Sheet_pathpath_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_pathpath, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_pathpath, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_pathpath));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_path_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    pathpath_descriptor_, &pathpath::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_pathpath_descriptor_, &Sheet_pathpath::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_path_2eproto() {
  delete pathpath::default_instance_;
  delete pathpath_reflection_;
  delete Sheet_pathpath::default_instance_;
  delete Sheet_pathpath_reflection_;
}

void protobuf_AddDesc_path_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\npath.proto\022\010proto_ff\032\025yd_fieldoptions."
    "proto\"O\n\010pathpath\022\030\n\002id\030\001 \001(\003B\014\302\377\024\010\350\267\257\345\276"
    "\204ID\022)\n\017belongToSceneID\030\002 \001(\003B\020\302\377\024\014\346\211\200\345\261\236"
    "\345\234\272\346\231\257\"A\n\016Sheet_pathpath\022/\n\rpathpath_Lis"
    "t\030\001 \003(\0132\022.proto_ff.pathpathB\004\210\301\024\024", 193);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "path.proto", &protobuf_RegisterTypes);
  pathpath::default_instance_ = new pathpath();
  Sheet_pathpath::default_instance_ = new Sheet_pathpath();
  pathpath::default_instance_->InitAsDefaultInstance();
  Sheet_pathpath::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_path_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_path_2eproto {
  StaticDescriptorInitializer_path_2eproto() {
    protobuf_AddDesc_path_2eproto();
  }
} static_descriptor_initializer_path_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int pathpath::kIdFieldNumber;
const int pathpath::kBelongToSceneIDFieldNumber;
#endif  // !_MSC_VER

pathpath::pathpath()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void pathpath::InitAsDefaultInstance() {
}

pathpath::pathpath(const pathpath& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void pathpath::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  belongtosceneid_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

pathpath::~pathpath() {
  SharedDtor();
}

void pathpath::SharedDtor() {
  if (this != default_instance_) {
  }
}

void pathpath::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* pathpath::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return pathpath_descriptor_;
}

const pathpath& pathpath::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_path_2eproto();
  return *default_instance_;
}

pathpath* pathpath::default_instance_ = NULL;

pathpath* pathpath::New() const {
  return new pathpath;
}

void pathpath::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_LONGLONG(0);
    belongtosceneid_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool pathpath::MergePartialFromCodedStream(
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
        if (input->ExpectTag(16)) goto parse_belongToSceneID;
        break;
      }

      // optional int64 belongToSceneID = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_belongToSceneID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &belongtosceneid_)));
          set_has_belongtosceneid();
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

void pathpath::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional int64 belongToSceneID = 2;
  if (has_belongtosceneid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->belongtosceneid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* pathpath::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // optional int64 belongToSceneID = 2;
  if (has_belongtosceneid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->belongtosceneid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int pathpath::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->id());
    }

    // optional int64 belongToSceneID = 2;
    if (has_belongtosceneid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->belongtosceneid());
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

void pathpath::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const pathpath* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const pathpath*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void pathpath::MergeFrom(const pathpath& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_belongtosceneid()) {
      set_belongtosceneid(from.belongtosceneid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void pathpath::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void pathpath::CopyFrom(const pathpath& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool pathpath::IsInitialized() const {

  return true;
}

void pathpath::Swap(pathpath* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(belongtosceneid_, other->belongtosceneid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata pathpath::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = pathpath_descriptor_;
  metadata.reflection = pathpath_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_pathpath::kPathpathListFieldNumber;
#endif  // !_MSC_VER

Sheet_pathpath::Sheet_pathpath()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_pathpath::InitAsDefaultInstance() {
}

Sheet_pathpath::Sheet_pathpath(const Sheet_pathpath& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_pathpath::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_pathpath::~Sheet_pathpath() {
  SharedDtor();
}

void Sheet_pathpath::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_pathpath::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_pathpath::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_pathpath_descriptor_;
}

const Sheet_pathpath& Sheet_pathpath::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_path_2eproto();
  return *default_instance_;
}

Sheet_pathpath* Sheet_pathpath::default_instance_ = NULL;

Sheet_pathpath* Sheet_pathpath::New() const {
  return new Sheet_pathpath;
}

void Sheet_pathpath::Clear() {
  pathpath_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_pathpath::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.pathpath pathpath_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_pathpath_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_pathpath_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_pathpath_List;
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

void Sheet_pathpath::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.pathpath pathpath_List = 1;
  for (int i = 0; i < this->pathpath_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->pathpath_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_pathpath::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.pathpath pathpath_List = 1;
  for (int i = 0; i < this->pathpath_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->pathpath_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_pathpath::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.pathpath pathpath_List = 1;
  total_size += 1 * this->pathpath_list_size();
  for (int i = 0; i < this->pathpath_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->pathpath_list(i));
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

void Sheet_pathpath::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_pathpath* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_pathpath*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_pathpath::MergeFrom(const Sheet_pathpath& from) {
  GOOGLE_CHECK_NE(&from, this);
  pathpath_list_.MergeFrom(from.pathpath_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_pathpath::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_pathpath::CopyFrom(const Sheet_pathpath& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_pathpath::IsInitialized() const {

  return true;
}

void Sheet_pathpath::Swap(Sheet_pathpath* other) {
  if (other != this) {
    pathpath_list_.Swap(&other->pathpath_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_pathpath::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_pathpath_descriptor_;
  metadata.reflection = Sheet_pathpath_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
