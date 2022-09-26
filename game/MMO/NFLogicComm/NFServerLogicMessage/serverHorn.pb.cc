// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: serverHorn.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "serverHorn.pb.h"

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

const ::google::protobuf::Descriptor* serverHornserverHorn_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  serverHornserverHorn_reflection_ = NULL;
const ::google::protobuf::Descriptor* Sheet_serverHornserverHorn_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Sheet_serverHornserverHorn_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_serverHorn_2eproto() {
  protobuf_AddDesc_serverHorn_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "serverHorn.proto");
  GOOGLE_CHECK(file != NULL);
  serverHornserverHorn_descriptor_ = file->message_type(0);
  static const int serverHornserverHorn_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, time_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, mintime_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, itemid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, currencytype_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, currencycost_),
  };
  serverHornserverHorn_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      serverHornserverHorn_descriptor_,
      serverHornserverHorn::default_instance_,
      serverHornserverHorn_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(serverHornserverHorn, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(serverHornserverHorn));
  Sheet_serverHornserverHorn_descriptor_ = file->message_type(1);
  static const int Sheet_serverHornserverHorn_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_serverHornserverHorn, serverhornserverhorn_list_),
  };
  Sheet_serverHornserverHorn_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Sheet_serverHornserverHorn_descriptor_,
      Sheet_serverHornserverHorn::default_instance_,
      Sheet_serverHornserverHorn_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_serverHornserverHorn, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Sheet_serverHornserverHorn, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Sheet_serverHornserverHorn));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_serverHorn_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    serverHornserverHorn_descriptor_, &serverHornserverHorn::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Sheet_serverHornserverHorn_descriptor_, &Sheet_serverHornserverHorn::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_serverHorn_2eproto() {
  delete serverHornserverHorn::default_instance_;
  delete serverHornserverHorn_reflection_;
  delete Sheet_serverHornserverHorn::default_instance_;
  delete Sheet_serverHornserverHorn_reflection_;
}

void protobuf_AddDesc_serverHorn_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::yd_fieldoptions::protobuf_AddDesc_yd_5ffieldoptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020serverHorn.proto\022\010proto_ff\032\025yd_fieldop"
    "tions.proto\"\371\001\n\024serverHornserverHorn\022\030\n\002"
    "id\030\001 \001(\003B\014\302\377\024\010\345\226\207\345\217\255ID\022\037\n\004time\030\002 \001(\005B\021\302\377"
    "\024\r\346\214\201\347\273\255\346\227\266\351\227\264S\022(\n\007minTime\030\003 \001(\005B\027\302\377\024\023\346\234"
    "\200\347\237\255\346\214\201\347\273\255\346\227\266\351\227\264S\022 \n\006itemid\030\004 \001(\003B\020\302\377\024\014\346"
    "\266\210\350\200\227\351\201\223\345\205\267\022,\n\014currencyType\030\005 \001(\005B\026\302\377\024\022\346"
    "\233\277\344\273\243\350\264\247\345\270\201\347\261\273\345\236\213\022,\n\014currencyCost\030\006 \001(\005B"
    "\026\302\377\024\022\346\233\277\344\273\243\350\264\247\345\270\201\344\273\267\346\240\274\"e\n\032Sheet_serverH"
    "ornserverHorn\022G\n\031serverHornserverHorn_Li"
    "st\030\001 \003(\0132\036.proto_ff.serverHornserverHorn"
    "B\004\210\301\024k", 406);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "serverHorn.proto", &protobuf_RegisterTypes);
  serverHornserverHorn::default_instance_ = new serverHornserverHorn();
  Sheet_serverHornserverHorn::default_instance_ = new Sheet_serverHornserverHorn();
  serverHornserverHorn::default_instance_->InitAsDefaultInstance();
  Sheet_serverHornserverHorn::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_serverHorn_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_serverHorn_2eproto {
  StaticDescriptorInitializer_serverHorn_2eproto() {
    protobuf_AddDesc_serverHorn_2eproto();
  }
} static_descriptor_initializer_serverHorn_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int serverHornserverHorn::kIdFieldNumber;
const int serverHornserverHorn::kTimeFieldNumber;
const int serverHornserverHorn::kMinTimeFieldNumber;
const int serverHornserverHorn::kItemidFieldNumber;
const int serverHornserverHorn::kCurrencyTypeFieldNumber;
const int serverHornserverHorn::kCurrencyCostFieldNumber;
#endif  // !_MSC_VER

serverHornserverHorn::serverHornserverHorn()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void serverHornserverHorn::InitAsDefaultInstance() {
}

serverHornserverHorn::serverHornserverHorn(const serverHornserverHorn& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void serverHornserverHorn::SharedCtor() {
  _cached_size_ = 0;
  id_ = GOOGLE_LONGLONG(0);
  time_ = 0;
  mintime_ = 0;
  itemid_ = GOOGLE_LONGLONG(0);
  currencytype_ = 0;
  currencycost_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

serverHornserverHorn::~serverHornserverHorn() {
  SharedDtor();
}

void serverHornserverHorn::SharedDtor() {
  if (this != default_instance_) {
  }
}

void serverHornserverHorn::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* serverHornserverHorn::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return serverHornserverHorn_descriptor_;
}

const serverHornserverHorn& serverHornserverHorn::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_serverHorn_2eproto();
  return *default_instance_;
}

serverHornserverHorn* serverHornserverHorn::default_instance_ = NULL;

serverHornserverHorn* serverHornserverHorn::New() const {
  return new serverHornserverHorn;
}

void serverHornserverHorn::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = GOOGLE_LONGLONG(0);
    time_ = 0;
    mintime_ = 0;
    itemid_ = GOOGLE_LONGLONG(0);
    currencytype_ = 0;
    currencycost_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool serverHornserverHorn::MergePartialFromCodedStream(
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
        if (input->ExpectTag(24)) goto parse_minTime;
        break;
      }

      // optional int32 minTime = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_minTime:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &mintime_)));
          set_has_mintime();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_itemid;
        break;
      }

      // optional int64 itemid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_itemid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &itemid_)));
          set_has_itemid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_currencyType;
        break;
      }

      // optional int32 currencyType = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currencyType:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &currencytype_)));
          set_has_currencytype();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_currencyCost;
        break;
      }

      // optional int32 currencyCost = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_currencyCost:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &currencycost_)));
          set_has_currencycost();
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

void serverHornserverHorn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->id(), output);
  }

  // optional int32 time = 2;
  if (has_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->time(), output);
  }

  // optional int32 minTime = 3;
  if (has_mintime()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->mintime(), output);
  }

  // optional int64 itemid = 4;
  if (has_itemid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->itemid(), output);
  }

  // optional int32 currencyType = 5;
  if (has_currencytype()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->currencytype(), output);
  }

  // optional int32 currencyCost = 6;
  if (has_currencycost()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->currencycost(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* serverHornserverHorn::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->id(), target);
  }

  // optional int32 time = 2;
  if (has_time()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->time(), target);
  }

  // optional int32 minTime = 3;
  if (has_mintime()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->mintime(), target);
  }

  // optional int64 itemid = 4;
  if (has_itemid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->itemid(), target);
  }

  // optional int32 currencyType = 5;
  if (has_currencytype()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->currencytype(), target);
  }

  // optional int32 currencyCost = 6;
  if (has_currencycost()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->currencycost(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int serverHornserverHorn::ByteSize() const {
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

    // optional int32 minTime = 3;
    if (has_mintime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->mintime());
    }

    // optional int64 itemid = 4;
    if (has_itemid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->itemid());
    }

    // optional int32 currencyType = 5;
    if (has_currencytype()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->currencytype());
    }

    // optional int32 currencyCost = 6;
    if (has_currencycost()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->currencycost());
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

void serverHornserverHorn::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const serverHornserverHorn* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const serverHornserverHorn*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void serverHornserverHorn::MergeFrom(const serverHornserverHorn& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_time()) {
      set_time(from.time());
    }
    if (from.has_mintime()) {
      set_mintime(from.mintime());
    }
    if (from.has_itemid()) {
      set_itemid(from.itemid());
    }
    if (from.has_currencytype()) {
      set_currencytype(from.currencytype());
    }
    if (from.has_currencycost()) {
      set_currencycost(from.currencycost());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void serverHornserverHorn::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void serverHornserverHorn::CopyFrom(const serverHornserverHorn& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool serverHornserverHorn::IsInitialized() const {

  return true;
}

void serverHornserverHorn::Swap(serverHornserverHorn* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(time_, other->time_);
    std::swap(mintime_, other->mintime_);
    std::swap(itemid_, other->itemid_);
    std::swap(currencytype_, other->currencytype_);
    std::swap(currencycost_, other->currencycost_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata serverHornserverHorn::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = serverHornserverHorn_descriptor_;
  metadata.reflection = serverHornserverHorn_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Sheet_serverHornserverHorn::kServerHornserverHornListFieldNumber;
#endif  // !_MSC_VER

Sheet_serverHornserverHorn::Sheet_serverHornserverHorn()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Sheet_serverHornserverHorn::InitAsDefaultInstance() {
}

Sheet_serverHornserverHorn::Sheet_serverHornserverHorn(const Sheet_serverHornserverHorn& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Sheet_serverHornserverHorn::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Sheet_serverHornserverHorn::~Sheet_serverHornserverHorn() {
  SharedDtor();
}

void Sheet_serverHornserverHorn::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Sheet_serverHornserverHorn::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Sheet_serverHornserverHorn::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Sheet_serverHornserverHorn_descriptor_;
}

const Sheet_serverHornserverHorn& Sheet_serverHornserverHorn::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_serverHorn_2eproto();
  return *default_instance_;
}

Sheet_serverHornserverHorn* Sheet_serverHornserverHorn::default_instance_ = NULL;

Sheet_serverHornserverHorn* Sheet_serverHornserverHorn::New() const {
  return new Sheet_serverHornserverHorn;
}

void Sheet_serverHornserverHorn::Clear() {
  serverhornserverhorn_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Sheet_serverHornserverHorn::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .proto_ff.serverHornserverHorn serverHornserverHorn_List = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_serverHornserverHorn_List:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_serverhornserverhorn_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_serverHornserverHorn_List;
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

void Sheet_serverHornserverHorn::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .proto_ff.serverHornserverHorn serverHornserverHorn_List = 1;
  for (int i = 0; i < this->serverhornserverhorn_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->serverhornserverhorn_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Sheet_serverHornserverHorn::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .proto_ff.serverHornserverHorn serverHornserverHorn_List = 1;
  for (int i = 0; i < this->serverhornserverhorn_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->serverhornserverhorn_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Sheet_serverHornserverHorn::ByteSize() const {
  int total_size = 0;

  // repeated .proto_ff.serverHornserverHorn serverHornserverHorn_List = 1;
  total_size += 1 * this->serverhornserverhorn_list_size();
  for (int i = 0; i < this->serverhornserverhorn_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->serverhornserverhorn_list(i));
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

void Sheet_serverHornserverHorn::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Sheet_serverHornserverHorn* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Sheet_serverHornserverHorn*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Sheet_serverHornserverHorn::MergeFrom(const Sheet_serverHornserverHorn& from) {
  GOOGLE_CHECK_NE(&from, this);
  serverhornserverhorn_list_.MergeFrom(from.serverhornserverhorn_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Sheet_serverHornserverHorn::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Sheet_serverHornserverHorn::CopyFrom(const Sheet_serverHornserverHorn& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Sheet_serverHornserverHorn::IsInitialized() const {

  return true;
}

void Sheet_serverHornserverHorn::Swap(Sheet_serverHornserverHorn* other) {
  if (other != this) {
    serverhornserverhorn_list_.Swap(&other->serverhornserverhorn_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Sheet_serverHornserverHorn::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Sheet_serverHornserverHorn_descriptor_;
  metadata.reflection = Sheet_serverHornserverHorn_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

// @@protoc_insertion_point(global_scope)
