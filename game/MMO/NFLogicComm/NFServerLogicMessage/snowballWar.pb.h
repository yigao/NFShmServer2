// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: snowballWar.proto

#ifndef PROTOBUF_snowballWar_2eproto__INCLUDED
#define PROTOBUF_snowballWar_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace proto_ff {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_snowballWar_2eproto();
void protobuf_AssignDesc_snowballWar_2eproto();
void protobuf_ShutdownFile_snowballWar_2eproto();

class snowballWarcons;
class Sheet_snowballWarcons;

// ===================================================================

class snowballWarcons : public ::google::protobuf::Message {
 public:
  snowballWarcons();
  virtual ~snowballWarcons();

  snowballWarcons(const snowballWarcons& from);

  inline snowballWarcons& operator=(const snowballWarcons& from) {
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
  static const snowballWarcons& default_instance();

  void Swap(snowballWarcons* other);

  // implements Message ----------------------------------------------

  snowballWarcons* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const snowballWarcons& from);
  void MergeFrom(const snowballWarcons& from);
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

  // optional int32 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int64 valuedata = 2;
  inline bool has_valuedata() const;
  inline void clear_valuedata();
  static const int kValuedataFieldNumber = 2;
  inline ::google::protobuf::int64 valuedata() const;
  inline void set_valuedata(::google::protobuf::int64 value);

  // optional string stringdata = 3;
  inline bool has_stringdata() const;
  inline void clear_stringdata();
  static const int kStringdataFieldNumber = 3;
  inline const ::std::string& stringdata() const;
  inline void set_stringdata(const ::std::string& value);
  inline void set_stringdata(const char* value);
  inline void set_stringdata(const char* value, size_t size);
  inline ::std::string* mutable_stringdata();
  inline ::std::string* release_stringdata();
  inline void set_allocated_stringdata(::std::string* stringdata);

  // @@protoc_insertion_point(class_scope:proto_ff.snowballWarcons)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_valuedata();
  inline void clear_has_valuedata();
  inline void set_has_stringdata();
  inline void clear_has_stringdata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 valuedata_;
  ::std::string* stringdata_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_snowballWar_2eproto();
  friend void protobuf_AssignDesc_snowballWar_2eproto();
  friend void protobuf_ShutdownFile_snowballWar_2eproto();

  void InitAsDefaultInstance();
  static snowballWarcons* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_snowballWarcons : public ::google::protobuf::Message {
 public:
  Sheet_snowballWarcons();
  virtual ~Sheet_snowballWarcons();

  Sheet_snowballWarcons(const Sheet_snowballWarcons& from);

  inline Sheet_snowballWarcons& operator=(const Sheet_snowballWarcons& from) {
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
  static const Sheet_snowballWarcons& default_instance();

  void Swap(Sheet_snowballWarcons* other);

  // implements Message ----------------------------------------------

  Sheet_snowballWarcons* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_snowballWarcons& from);
  void MergeFrom(const Sheet_snowballWarcons& from);
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

  // repeated .proto_ff.snowballWarcons snowballWarcons_List = 1;
  inline int snowballwarcons_list_size() const;
  inline void clear_snowballwarcons_list();
  static const int kSnowballWarconsListFieldNumber = 1;
  inline const ::proto_ff::snowballWarcons& snowballwarcons_list(int index) const;
  inline ::proto_ff::snowballWarcons* mutable_snowballwarcons_list(int index);
  inline ::proto_ff::snowballWarcons* add_snowballwarcons_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::snowballWarcons >&
      snowballwarcons_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::snowballWarcons >*
      mutable_snowballwarcons_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_snowballWarcons)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::snowballWarcons > snowballwarcons_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_snowballWar_2eproto();
  friend void protobuf_AssignDesc_snowballWar_2eproto();
  friend void protobuf_ShutdownFile_snowballWar_2eproto();

  void InitAsDefaultInstance();
  static Sheet_snowballWarcons* default_instance_;
};
// ===================================================================


// ===================================================================

// snowballWarcons

// optional int32 ID = 1;
inline bool snowballWarcons::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void snowballWarcons::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void snowballWarcons::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void snowballWarcons::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 snowballWarcons::id() const {
  return id_;
}
inline void snowballWarcons::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int64 valuedata = 2;
inline bool snowballWarcons::has_valuedata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void snowballWarcons::set_has_valuedata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void snowballWarcons::clear_has_valuedata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void snowballWarcons::clear_valuedata() {
  valuedata_ = GOOGLE_LONGLONG(0);
  clear_has_valuedata();
}
inline ::google::protobuf::int64 snowballWarcons::valuedata() const {
  return valuedata_;
}
inline void snowballWarcons::set_valuedata(::google::protobuf::int64 value) {
  set_has_valuedata();
  valuedata_ = value;
}

// optional string stringdata = 3;
inline bool snowballWarcons::has_stringdata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void snowballWarcons::set_has_stringdata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void snowballWarcons::clear_has_stringdata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void snowballWarcons::clear_stringdata() {
  if (stringdata_ != &::google::protobuf::internal::kEmptyString) {
    stringdata_->clear();
  }
  clear_has_stringdata();
}
inline const ::std::string& snowballWarcons::stringdata() const {
  return *stringdata_;
}
inline void snowballWarcons::set_stringdata(const ::std::string& value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void snowballWarcons::set_stringdata(const char* value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void snowballWarcons::set_stringdata(const char* value, size_t size) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* snowballWarcons::mutable_stringdata() {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  return stringdata_;
}
inline ::std::string* snowballWarcons::release_stringdata() {
  clear_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stringdata_;
    stringdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void snowballWarcons::set_allocated_stringdata(::std::string* stringdata) {
  if (stringdata_ != &::google::protobuf::internal::kEmptyString) {
    delete stringdata_;
  }
  if (stringdata) {
    set_has_stringdata();
    stringdata_ = stringdata;
  } else {
    clear_has_stringdata();
    stringdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Sheet_snowballWarcons

// repeated .proto_ff.snowballWarcons snowballWarcons_List = 1;
inline int Sheet_snowballWarcons::snowballwarcons_list_size() const {
  return snowballwarcons_list_.size();
}
inline void Sheet_snowballWarcons::clear_snowballwarcons_list() {
  snowballwarcons_list_.Clear();
}
inline const ::proto_ff::snowballWarcons& Sheet_snowballWarcons::snowballwarcons_list(int index) const {
  return snowballwarcons_list_.Get(index);
}
inline ::proto_ff::snowballWarcons* Sheet_snowballWarcons::mutable_snowballwarcons_list(int index) {
  return snowballwarcons_list_.Mutable(index);
}
inline ::proto_ff::snowballWarcons* Sheet_snowballWarcons::add_snowballwarcons_list() {
  return snowballwarcons_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::snowballWarcons >&
Sheet_snowballWarcons::snowballwarcons_list() const {
  return snowballwarcons_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::snowballWarcons >*
Sheet_snowballWarcons::mutable_snowballwarcons_list() {
  return &snowballwarcons_list_;
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

#endif  // PROTOBUF_snowballWar_2eproto__INCLUDED
