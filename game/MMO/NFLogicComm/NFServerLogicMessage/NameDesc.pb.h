// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NameDesc.proto

#ifndef PROTOBUF_NameDesc_2eproto__INCLUDED
#define PROTOBUF_NameDesc_2eproto__INCLUDED

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
void  protobuf_AddDesc_NameDesc_2eproto();
void protobuf_AssignDesc_NameDesc_2eproto();
void protobuf_ShutdownFile_NameDesc_2eproto();

class NameDesc;
class Sheet_NameDesc;

// ===================================================================

class NameDesc : public ::google::protobuf::Message {
 public:
  NameDesc();
  virtual ~NameDesc();

  NameDesc(const NameDesc& from);

  inline NameDesc& operator=(const NameDesc& from) {
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
  static const NameDesc& default_instance();

  void Swap(NameDesc* other);

  // implements Message ----------------------------------------------

  NameDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NameDesc& from);
  void MergeFrom(const NameDesc& from);
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

  // optional uint64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::uint64 id() const;
  inline void set_id(::google::protobuf::uint64 value);

  // optional string name = 2;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 2;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // @@protoc_insertion_point(class_scope:proto_ff.NameDesc)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint64 id_;
  ::std::string* name_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_NameDesc_2eproto();
  friend void protobuf_AssignDesc_NameDesc_2eproto();
  friend void protobuf_ShutdownFile_NameDesc_2eproto();

  void InitAsDefaultInstance();
  static NameDesc* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_NameDesc : public ::google::protobuf::Message {
 public:
  Sheet_NameDesc();
  virtual ~Sheet_NameDesc();

  Sheet_NameDesc(const Sheet_NameDesc& from);

  inline Sheet_NameDesc& operator=(const Sheet_NameDesc& from) {
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
  static const Sheet_NameDesc& default_instance();

  void Swap(Sheet_NameDesc* other);

  // implements Message ----------------------------------------------

  Sheet_NameDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_NameDesc& from);
  void MergeFrom(const Sheet_NameDesc& from);
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

  // repeated .proto_ff.NameDesc NameDesc_List = 1;
  inline int namedesc_list_size() const;
  inline void clear_namedesc_list();
  static const int kNameDescListFieldNumber = 1;
  inline const ::proto_ff::NameDesc& namedesc_list(int index) const;
  inline ::proto_ff::NameDesc* mutable_namedesc_list(int index);
  inline ::proto_ff::NameDesc* add_namedesc_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::NameDesc >&
      namedesc_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::NameDesc >*
      mutable_namedesc_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_NameDesc)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::NameDesc > namedesc_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_NameDesc_2eproto();
  friend void protobuf_AssignDesc_NameDesc_2eproto();
  friend void protobuf_ShutdownFile_NameDesc_2eproto();

  void InitAsDefaultInstance();
  static Sheet_NameDesc* default_instance_;
};
// ===================================================================


// ===================================================================

// NameDesc

// optional uint64 id = 1;
inline bool NameDesc::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NameDesc::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NameDesc::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NameDesc::clear_id() {
  id_ = GOOGLE_ULONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::uint64 NameDesc::id() const {
  return id_;
}
inline void NameDesc::set_id(::google::protobuf::uint64 value) {
  set_has_id();
  id_ = value;
}

// optional string name = 2;
inline bool NameDesc::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void NameDesc::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void NameDesc::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void NameDesc::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& NameDesc::name() const {
  return *name_;
}
inline void NameDesc::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NameDesc::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void NameDesc::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* NameDesc::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* NameDesc::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void NameDesc::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Sheet_NameDesc

// repeated .proto_ff.NameDesc NameDesc_List = 1;
inline int Sheet_NameDesc::namedesc_list_size() const {
  return namedesc_list_.size();
}
inline void Sheet_NameDesc::clear_namedesc_list() {
  namedesc_list_.Clear();
}
inline const ::proto_ff::NameDesc& Sheet_NameDesc::namedesc_list(int index) const {
  return namedesc_list_.Get(index);
}
inline ::proto_ff::NameDesc* Sheet_NameDesc::mutable_namedesc_list(int index) {
  return namedesc_list_.Mutable(index);
}
inline ::proto_ff::NameDesc* Sheet_NameDesc::add_namedesc_list() {
  return namedesc_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::NameDesc >&
Sheet_NameDesc::namedesc_list() const {
  return namedesc_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::NameDesc >*
Sheet_NameDesc::mutable_namedesc_list() {
  return &namedesc_list_;
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

#endif  // PROTOBUF_NameDesc_2eproto__INCLUDED
