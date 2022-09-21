// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ConstDesc.proto

#ifndef PROTOBUF_ConstDesc_2eproto__INCLUDED
#define PROTOBUF_ConstDesc_2eproto__INCLUDED

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
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "yd_fieldoptions.pb.h"
#include "proto_common.pb.h"
// @@protoc_insertion_point(includes)

namespace proto_ff {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_ConstDesc_2eproto();
void protobuf_AssignDesc_ConstDesc_2eproto();
void protobuf_ShutdownFile_ConstDesc_2eproto();

class ConstDesc;
class Sheet_ConstDesc;

// ===================================================================

class ConstDesc : public ::google::protobuf::Message {
 public:
  ConstDesc();
  virtual ~ConstDesc();

  ConstDesc(const ConstDesc& from);

  inline ConstDesc& operator=(const ConstDesc& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ConstDesc& default_instance();

  void Swap(ConstDesc* other);

  // implements Message ----------------------------------------------

  ConstDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConstDesc& from);
  void MergeFrom(const ConstDesc& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int32 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional string value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // optional string type_name = 3;
  inline bool has_type_name() const;
  inline void clear_type_name();
  static const int kTypeNameFieldNumber = 3;
  inline const ::std::string& type_name() const;
  inline void set_type_name(const ::std::string& value);
  inline void set_type_name(const char* value);
  inline void set_type_name(const char* value, size_t size);
  inline ::std::string* mutable_type_name();
  inline ::std::string* release_type_name();
  inline void set_allocated_type_name(::std::string* type_name);

  // @@protoc_insertion_point(class_scope:proto_ff.ConstDesc)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_type_name();
  inline void clear_has_type_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* value_;
  ::std::string* type_name_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_ConstDesc_2eproto();
  friend void protobuf_AssignDesc_ConstDesc_2eproto();
  friend void protobuf_ShutdownFile_ConstDesc_2eproto();

  void InitAsDefaultInstance();
  static ConstDesc* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_ConstDesc : public ::google::protobuf::Message {
 public:
  Sheet_ConstDesc();
  virtual ~Sheet_ConstDesc();

  Sheet_ConstDesc(const Sheet_ConstDesc& from);

  inline Sheet_ConstDesc& operator=(const Sheet_ConstDesc& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Sheet_ConstDesc& default_instance();

  void Swap(Sheet_ConstDesc* other);

  // implements Message ----------------------------------------------

  Sheet_ConstDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_ConstDesc& from);
  void MergeFrom(const Sheet_ConstDesc& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .proto_ff.ConstDesc ConstDesc_List = 1;
  inline int constdesc_list_size() const;
  inline void clear_constdesc_list();
  static const int kConstDescListFieldNumber = 1;
  inline const ::proto_ff::ConstDesc& constdesc_list(int index) const;
  inline ::proto_ff::ConstDesc* mutable_constdesc_list(int index);
  inline ::proto_ff::ConstDesc* add_constdesc_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::ConstDesc >&
      constdesc_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::ConstDesc >*
      mutable_constdesc_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_ConstDesc)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::ConstDesc > constdesc_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ConstDesc_2eproto();
  friend void protobuf_AssignDesc_ConstDesc_2eproto();
  friend void protobuf_ShutdownFile_ConstDesc_2eproto();

  void InitAsDefaultInstance();
  static Sheet_ConstDesc* default_instance_;
};
// ===================================================================


// ===================================================================

// ConstDesc

// optional int32 id = 1;
inline bool ConstDesc::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ConstDesc::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ConstDesc::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ConstDesc::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 ConstDesc::id() const {
  return id_;
}
inline void ConstDesc::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string value = 2;
inline bool ConstDesc::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ConstDesc::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ConstDesc::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ConstDesc::clear_value() {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& ConstDesc::value() const {
  return *value_;
}
inline void ConstDesc::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ConstDesc::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ConstDesc::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConstDesc::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* ConstDesc::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ConstDesc::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::kEmptyString) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string type_name = 3;
inline bool ConstDesc::has_type_name() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ConstDesc::set_has_type_name() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ConstDesc::clear_has_type_name() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ConstDesc::clear_type_name() {
  if (type_name_ != &::google::protobuf::internal::kEmptyString) {
    type_name_->clear();
  }
  clear_has_type_name();
}
inline const ::std::string& ConstDesc::type_name() const {
  return *type_name_;
}
inline void ConstDesc::set_type_name(const ::std::string& value) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(value);
}
inline void ConstDesc::set_type_name(const char* value) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(value);
}
inline void ConstDesc::set_type_name(const char* value, size_t size) {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  type_name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ConstDesc::mutable_type_name() {
  set_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    type_name_ = new ::std::string;
  }
  return type_name_;
}
inline ::std::string* ConstDesc::release_type_name() {
  clear_has_type_name();
  if (type_name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = type_name_;
    type_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void ConstDesc::set_allocated_type_name(::std::string* type_name) {
  if (type_name_ != &::google::protobuf::internal::kEmptyString) {
    delete type_name_;
  }
  if (type_name) {
    set_has_type_name();
    type_name_ = type_name;
  } else {
    clear_has_type_name();
    type_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Sheet_ConstDesc

// repeated .proto_ff.ConstDesc ConstDesc_List = 1;
inline int Sheet_ConstDesc::constdesc_list_size() const {
  return constdesc_list_.size();
}
inline void Sheet_ConstDesc::clear_constdesc_list() {
  constdesc_list_.Clear();
}
inline const ::proto_ff::ConstDesc& Sheet_ConstDesc::constdesc_list(int index) const {
  return constdesc_list_.Get(index);
}
inline ::proto_ff::ConstDesc* Sheet_ConstDesc::mutable_constdesc_list(int index) {
  return constdesc_list_.Mutable(index);
}
inline ::proto_ff::ConstDesc* Sheet_ConstDesc::add_constdesc_list() {
  return constdesc_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::ConstDesc >&
Sheet_ConstDesc::constdesc_list() const {
  return constdesc_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::ConstDesc >*
Sheet_ConstDesc::mutable_constdesc_list() {
  return &constdesc_list_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto_ff

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_ConstDesc_2eproto__INCLUDED
