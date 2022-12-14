// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: headPortrait.proto

#ifndef PROTOBUF_headPortrait_2eproto__INCLUDED
#define PROTOBUF_headPortrait_2eproto__INCLUDED

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
void  protobuf_AddDesc_headPortrait_2eproto();
void protobuf_AssignDesc_headPortrait_2eproto();
void protobuf_ShutdownFile_headPortrait_2eproto();

class headPortraitheadattributeDesc;
class headPortraitheadActiveAttributeDesc;
class headPortraithead;
class Sheet_headPortraithead;

// ===================================================================

class headPortraitheadattributeDesc : public ::google::protobuf::Message {
 public:
  headPortraitheadattributeDesc();
  virtual ~headPortraitheadattributeDesc();

  headPortraitheadattributeDesc(const headPortraitheadattributeDesc& from);

  inline headPortraitheadattributeDesc& operator=(const headPortraitheadattributeDesc& from) {
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
  static const headPortraitheadattributeDesc& default_instance();

  void Swap(headPortraitheadattributeDesc* other);

  // implements Message ----------------------------------------------

  headPortraitheadattributeDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const headPortraitheadattributeDesc& from);
  void MergeFrom(const headPortraitheadattributeDesc& from);
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

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.headPortraitheadattributeDesc)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_headPortrait_2eproto();
  friend void protobuf_AssignDesc_headPortrait_2eproto();
  friend void protobuf_ShutdownFile_headPortrait_2eproto();

  void InitAsDefaultInstance();
  static headPortraitheadattributeDesc* default_instance_;
};
// -------------------------------------------------------------------

class headPortraitheadActiveAttributeDesc : public ::google::protobuf::Message {
 public:
  headPortraitheadActiveAttributeDesc();
  virtual ~headPortraitheadActiveAttributeDesc();

  headPortraitheadActiveAttributeDesc(const headPortraitheadActiveAttributeDesc& from);

  inline headPortraitheadActiveAttributeDesc& operator=(const headPortraitheadActiveAttributeDesc& from) {
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
  static const headPortraitheadActiveAttributeDesc& default_instance();

  void Swap(headPortraitheadActiveAttributeDesc* other);

  // implements Message ----------------------------------------------

  headPortraitheadActiveAttributeDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const headPortraitheadActiveAttributeDesc& from);
  void MergeFrom(const headPortraitheadActiveAttributeDesc& from);
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

  // optional int32 type = 1;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 1;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 value = 2;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 2;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.headPortraitheadActiveAttributeDesc)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_headPortrait_2eproto();
  friend void protobuf_AssignDesc_headPortrait_2eproto();
  friend void protobuf_ShutdownFile_headPortrait_2eproto();

  void InitAsDefaultInstance();
  static headPortraitheadActiveAttributeDesc* default_instance_;
};
// -------------------------------------------------------------------

class headPortraithead : public ::google::protobuf::Message {
 public:
  headPortraithead();
  virtual ~headPortraithead();

  headPortraithead(const headPortraithead& from);

  inline headPortraithead& operator=(const headPortraithead& from) {
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
  static const headPortraithead& default_instance();

  void Swap(headPortraithead* other);

  // implements Message ----------------------------------------------

  headPortraithead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const headPortraithead& from);
  void MergeFrom(const headPortraithead& from);
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

  // optional int64 ID = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIDFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

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

  // optional int32 type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 quality = 4;
  inline bool has_quality() const;
  inline void clear_quality();
  static const int kQualityFieldNumber = 4;
  inline ::google::protobuf::int32 quality() const;
  inline void set_quality(::google::protobuf::int32 value);

  // optional string professionLimit = 5;
  inline bool has_professionlimit() const;
  inline void clear_professionlimit();
  static const int kProfessionLimitFieldNumber = 5;
  inline const ::std::string& professionlimit() const;
  inline void set_professionlimit(const ::std::string& value);
  inline void set_professionlimit(const char* value);
  inline void set_professionlimit(const char* value, size_t size);
  inline ::std::string* mutable_professionlimit();
  inline ::std::string* release_professionlimit();
  inline void set_allocated_professionlimit(::std::string* professionlimit);

  // optional int64 activationItem = 6;
  inline bool has_activationitem() const;
  inline void clear_activationitem();
  static const int kActivationItemFieldNumber = 6;
  inline ::google::protobuf::int64 activationitem() const;
  inline void set_activationitem(::google::protobuf::int64 value);

  // optional int32 activationNum = 7;
  inline bool has_activationnum() const;
  inline void clear_activationnum();
  static const int kActivationNumFieldNumber = 7;
  inline ::google::protobuf::int32 activationnum() const;
  inline void set_activationnum(::google::protobuf::int32 value);

  // optional int64 starId = 8;
  inline bool has_starid() const;
  inline void clear_starid();
  static const int kStarIdFieldNumber = 8;
  inline ::google::protobuf::int64 starid() const;
  inline void set_starid(::google::protobuf::int64 value);

  // optional string starNum = 9;
  inline bool has_starnum() const;
  inline void clear_starnum();
  static const int kStarNumFieldNumber = 9;
  inline const ::std::string& starnum() const;
  inline void set_starnum(const ::std::string& value);
  inline void set_starnum(const char* value);
  inline void set_starnum(const char* value, size_t size);
  inline ::std::string* mutable_starnum();
  inline ::std::string* release_starnum();
  inline void set_allocated_starnum(::std::string* starnum);

  // optional int32 starUp = 10;
  inline bool has_starup() const;
  inline void clear_starup();
  static const int kStarUpFieldNumber = 10;
  inline ::google::protobuf::int32 starup() const;
  inline void set_starup(::google::protobuf::int32 value);

  // optional int32 starBer = 11;
  inline bool has_starber() const;
  inline void clear_starber();
  static const int kStarBerFieldNumber = 11;
  inline ::google::protobuf::int32 starber() const;
  inline void set_starber(::google::protobuf::int32 value);

  // repeated .proto_ff.headPortraitheadattributeDesc attribute = 12;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 12;
  inline const ::proto_ff::headPortraitheadattributeDesc& attribute(int index) const;
  inline ::proto_ff::headPortraitheadattributeDesc* mutable_attribute(int index);
  inline ::proto_ff::headPortraitheadattributeDesc* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadattributeDesc >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadattributeDesc >*
      mutable_attribute();

  // repeated .proto_ff.headPortraitheadActiveAttributeDesc ActiveAttribute = 13;
  inline int activeattribute_size() const;
  inline void clear_activeattribute();
  static const int kActiveAttributeFieldNumber = 13;
  inline const ::proto_ff::headPortraitheadActiveAttributeDesc& activeattribute(int index) const;
  inline ::proto_ff::headPortraitheadActiveAttributeDesc* mutable_activeattribute(int index);
  inline ::proto_ff::headPortraitheadActiveAttributeDesc* add_activeattribute();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadActiveAttributeDesc >&
      activeattribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadActiveAttributeDesc >*
      mutable_activeattribute();

  // @@protoc_insertion_point(class_scope:proto_ff.headPortraithead)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_quality();
  inline void clear_has_quality();
  inline void set_has_professionlimit();
  inline void clear_has_professionlimit();
  inline void set_has_activationitem();
  inline void clear_has_activationitem();
  inline void set_has_activationnum();
  inline void clear_has_activationnum();
  inline void set_has_starid();
  inline void clear_has_starid();
  inline void set_has_starnum();
  inline void clear_has_starnum();
  inline void set_has_starup();
  inline void clear_has_starup();
  inline void set_has_starber();
  inline void clear_has_starber();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::std::string* name_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 quality_;
  ::std::string* professionlimit_;
  ::google::protobuf::int64 activationitem_;
  ::google::protobuf::int64 starid_;
  ::google::protobuf::int32 activationnum_;
  ::google::protobuf::int32 starup_;
  ::std::string* starnum_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadattributeDesc > attribute_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadActiveAttributeDesc > activeattribute_;
  ::google::protobuf::int32 starber_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(13 + 31) / 32];

  friend void  protobuf_AddDesc_headPortrait_2eproto();
  friend void protobuf_AssignDesc_headPortrait_2eproto();
  friend void protobuf_ShutdownFile_headPortrait_2eproto();

  void InitAsDefaultInstance();
  static headPortraithead* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_headPortraithead : public ::google::protobuf::Message {
 public:
  Sheet_headPortraithead();
  virtual ~Sheet_headPortraithead();

  Sheet_headPortraithead(const Sheet_headPortraithead& from);

  inline Sheet_headPortraithead& operator=(const Sheet_headPortraithead& from) {
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
  static const Sheet_headPortraithead& default_instance();

  void Swap(Sheet_headPortraithead* other);

  // implements Message ----------------------------------------------

  Sheet_headPortraithead* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_headPortraithead& from);
  void MergeFrom(const Sheet_headPortraithead& from);
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

  // repeated .proto_ff.headPortraithead headPortraithead_List = 1;
  inline int headportraithead_list_size() const;
  inline void clear_headportraithead_list();
  static const int kHeadPortraitheadListFieldNumber = 1;
  inline const ::proto_ff::headPortraithead& headportraithead_list(int index) const;
  inline ::proto_ff::headPortraithead* mutable_headportraithead_list(int index);
  inline ::proto_ff::headPortraithead* add_headportraithead_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraithead >&
      headportraithead_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraithead >*
      mutable_headportraithead_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_headPortraithead)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraithead > headportraithead_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_headPortrait_2eproto();
  friend void protobuf_AssignDesc_headPortrait_2eproto();
  friend void protobuf_ShutdownFile_headPortrait_2eproto();

  void InitAsDefaultInstance();
  static Sheet_headPortraithead* default_instance_;
};
// ===================================================================


// ===================================================================

// headPortraitheadattributeDesc

// optional int32 type = 1;
inline bool headPortraitheadattributeDesc::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void headPortraitheadattributeDesc::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void headPortraitheadattributeDesc::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void headPortraitheadattributeDesc::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 headPortraitheadattributeDesc::type() const {
  return type_;
}
inline void headPortraitheadattributeDesc::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 value = 2;
inline bool headPortraitheadattributeDesc::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void headPortraitheadattributeDesc::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void headPortraitheadattributeDesc::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void headPortraitheadattributeDesc::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 headPortraitheadattributeDesc::value() const {
  return value_;
}
inline void headPortraitheadattributeDesc::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// headPortraitheadActiveAttributeDesc

// optional int32 type = 1;
inline bool headPortraitheadActiveAttributeDesc::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void headPortraitheadActiveAttributeDesc::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void headPortraitheadActiveAttributeDesc::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void headPortraitheadActiveAttributeDesc::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 headPortraitheadActiveAttributeDesc::type() const {
  return type_;
}
inline void headPortraitheadActiveAttributeDesc::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 value = 2;
inline bool headPortraitheadActiveAttributeDesc::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void headPortraitheadActiveAttributeDesc::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
inline void headPortraitheadActiveAttributeDesc::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void headPortraitheadActiveAttributeDesc::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 headPortraitheadActiveAttributeDesc::value() const {
  return value_;
}
inline void headPortraitheadActiveAttributeDesc::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// headPortraithead

// optional int64 ID = 1;
inline bool headPortraithead::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void headPortraithead::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void headPortraithead::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void headPortraithead::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 headPortraithead::id() const {
  return id_;
}
inline void headPortraithead::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional string name = 2;
inline bool headPortraithead::has_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void headPortraithead::set_has_name() {
  _has_bits_[0] |= 0x00000002u;
}
inline void headPortraithead::clear_has_name() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void headPortraithead::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& headPortraithead::name() const {
  return *name_;
}
inline void headPortraithead::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void headPortraithead::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void headPortraithead::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* headPortraithead::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* headPortraithead::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void headPortraithead::set_allocated_name(::std::string* name) {
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

// optional int32 type = 3;
inline bool headPortraithead::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void headPortraithead::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void headPortraithead::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void headPortraithead::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 headPortraithead::type() const {
  return type_;
}
inline void headPortraithead::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 quality = 4;
inline bool headPortraithead::has_quality() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void headPortraithead::set_has_quality() {
  _has_bits_[0] |= 0x00000008u;
}
inline void headPortraithead::clear_has_quality() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void headPortraithead::clear_quality() {
  quality_ = 0;
  clear_has_quality();
}
inline ::google::protobuf::int32 headPortraithead::quality() const {
  return quality_;
}
inline void headPortraithead::set_quality(::google::protobuf::int32 value) {
  set_has_quality();
  quality_ = value;
}

// optional string professionLimit = 5;
inline bool headPortraithead::has_professionlimit() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void headPortraithead::set_has_professionlimit() {
  _has_bits_[0] |= 0x00000010u;
}
inline void headPortraithead::clear_has_professionlimit() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void headPortraithead::clear_professionlimit() {
  if (professionlimit_ != &::google::protobuf::internal::kEmptyString) {
    professionlimit_->clear();
  }
  clear_has_professionlimit();
}
inline const ::std::string& headPortraithead::professionlimit() const {
  return *professionlimit_;
}
inline void headPortraithead::set_professionlimit(const ::std::string& value) {
  set_has_professionlimit();
  if (professionlimit_ == &::google::protobuf::internal::kEmptyString) {
    professionlimit_ = new ::std::string;
  }
  professionlimit_->assign(value);
}
inline void headPortraithead::set_professionlimit(const char* value) {
  set_has_professionlimit();
  if (professionlimit_ == &::google::protobuf::internal::kEmptyString) {
    professionlimit_ = new ::std::string;
  }
  professionlimit_->assign(value);
}
inline void headPortraithead::set_professionlimit(const char* value, size_t size) {
  set_has_professionlimit();
  if (professionlimit_ == &::google::protobuf::internal::kEmptyString) {
    professionlimit_ = new ::std::string;
  }
  professionlimit_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* headPortraithead::mutable_professionlimit() {
  set_has_professionlimit();
  if (professionlimit_ == &::google::protobuf::internal::kEmptyString) {
    professionlimit_ = new ::std::string;
  }
  return professionlimit_;
}
inline ::std::string* headPortraithead::release_professionlimit() {
  clear_has_professionlimit();
  if (professionlimit_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = professionlimit_;
    professionlimit_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void headPortraithead::set_allocated_professionlimit(::std::string* professionlimit) {
  if (professionlimit_ != &::google::protobuf::internal::kEmptyString) {
    delete professionlimit_;
  }
  if (professionlimit) {
    set_has_professionlimit();
    professionlimit_ = professionlimit;
  } else {
    clear_has_professionlimit();
    professionlimit_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int64 activationItem = 6;
inline bool headPortraithead::has_activationitem() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void headPortraithead::set_has_activationitem() {
  _has_bits_[0] |= 0x00000020u;
}
inline void headPortraithead::clear_has_activationitem() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void headPortraithead::clear_activationitem() {
  activationitem_ = GOOGLE_LONGLONG(0);
  clear_has_activationitem();
}
inline ::google::protobuf::int64 headPortraithead::activationitem() const {
  return activationitem_;
}
inline void headPortraithead::set_activationitem(::google::protobuf::int64 value) {
  set_has_activationitem();
  activationitem_ = value;
}

// optional int32 activationNum = 7;
inline bool headPortraithead::has_activationnum() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void headPortraithead::set_has_activationnum() {
  _has_bits_[0] |= 0x00000040u;
}
inline void headPortraithead::clear_has_activationnum() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void headPortraithead::clear_activationnum() {
  activationnum_ = 0;
  clear_has_activationnum();
}
inline ::google::protobuf::int32 headPortraithead::activationnum() const {
  return activationnum_;
}
inline void headPortraithead::set_activationnum(::google::protobuf::int32 value) {
  set_has_activationnum();
  activationnum_ = value;
}

// optional int64 starId = 8;
inline bool headPortraithead::has_starid() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void headPortraithead::set_has_starid() {
  _has_bits_[0] |= 0x00000080u;
}
inline void headPortraithead::clear_has_starid() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void headPortraithead::clear_starid() {
  starid_ = GOOGLE_LONGLONG(0);
  clear_has_starid();
}
inline ::google::protobuf::int64 headPortraithead::starid() const {
  return starid_;
}
inline void headPortraithead::set_starid(::google::protobuf::int64 value) {
  set_has_starid();
  starid_ = value;
}

// optional string starNum = 9;
inline bool headPortraithead::has_starnum() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void headPortraithead::set_has_starnum() {
  _has_bits_[0] |= 0x00000100u;
}
inline void headPortraithead::clear_has_starnum() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void headPortraithead::clear_starnum() {
  if (starnum_ != &::google::protobuf::internal::kEmptyString) {
    starnum_->clear();
  }
  clear_has_starnum();
}
inline const ::std::string& headPortraithead::starnum() const {
  return *starnum_;
}
inline void headPortraithead::set_starnum(const ::std::string& value) {
  set_has_starnum();
  if (starnum_ == &::google::protobuf::internal::kEmptyString) {
    starnum_ = new ::std::string;
  }
  starnum_->assign(value);
}
inline void headPortraithead::set_starnum(const char* value) {
  set_has_starnum();
  if (starnum_ == &::google::protobuf::internal::kEmptyString) {
    starnum_ = new ::std::string;
  }
  starnum_->assign(value);
}
inline void headPortraithead::set_starnum(const char* value, size_t size) {
  set_has_starnum();
  if (starnum_ == &::google::protobuf::internal::kEmptyString) {
    starnum_ = new ::std::string;
  }
  starnum_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* headPortraithead::mutable_starnum() {
  set_has_starnum();
  if (starnum_ == &::google::protobuf::internal::kEmptyString) {
    starnum_ = new ::std::string;
  }
  return starnum_;
}
inline ::std::string* headPortraithead::release_starnum() {
  clear_has_starnum();
  if (starnum_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = starnum_;
    starnum_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void headPortraithead::set_allocated_starnum(::std::string* starnum) {
  if (starnum_ != &::google::protobuf::internal::kEmptyString) {
    delete starnum_;
  }
  if (starnum) {
    set_has_starnum();
    starnum_ = starnum;
  } else {
    clear_has_starnum();
    starnum_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 starUp = 10;
inline bool headPortraithead::has_starup() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void headPortraithead::set_has_starup() {
  _has_bits_[0] |= 0x00000200u;
}
inline void headPortraithead::clear_has_starup() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void headPortraithead::clear_starup() {
  starup_ = 0;
  clear_has_starup();
}
inline ::google::protobuf::int32 headPortraithead::starup() const {
  return starup_;
}
inline void headPortraithead::set_starup(::google::protobuf::int32 value) {
  set_has_starup();
  starup_ = value;
}

// optional int32 starBer = 11;
inline bool headPortraithead::has_starber() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void headPortraithead::set_has_starber() {
  _has_bits_[0] |= 0x00000400u;
}
inline void headPortraithead::clear_has_starber() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void headPortraithead::clear_starber() {
  starber_ = 0;
  clear_has_starber();
}
inline ::google::protobuf::int32 headPortraithead::starber() const {
  return starber_;
}
inline void headPortraithead::set_starber(::google::protobuf::int32 value) {
  set_has_starber();
  starber_ = value;
}

// repeated .proto_ff.headPortraitheadattributeDesc attribute = 12;
inline int headPortraithead::attribute_size() const {
  return attribute_.size();
}
inline void headPortraithead::clear_attribute() {
  attribute_.Clear();
}
inline const ::proto_ff::headPortraitheadattributeDesc& headPortraithead::attribute(int index) const {
  return attribute_.Get(index);
}
inline ::proto_ff::headPortraitheadattributeDesc* headPortraithead::mutable_attribute(int index) {
  return attribute_.Mutable(index);
}
inline ::proto_ff::headPortraitheadattributeDesc* headPortraithead::add_attribute() {
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadattributeDesc >&
headPortraithead::attribute() const {
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadattributeDesc >*
headPortraithead::mutable_attribute() {
  return &attribute_;
}

// repeated .proto_ff.headPortraitheadActiveAttributeDesc ActiveAttribute = 13;
inline int headPortraithead::activeattribute_size() const {
  return activeattribute_.size();
}
inline void headPortraithead::clear_activeattribute() {
  activeattribute_.Clear();
}
inline const ::proto_ff::headPortraitheadActiveAttributeDesc& headPortraithead::activeattribute(int index) const {
  return activeattribute_.Get(index);
}
inline ::proto_ff::headPortraitheadActiveAttributeDesc* headPortraithead::mutable_activeattribute(int index) {
  return activeattribute_.Mutable(index);
}
inline ::proto_ff::headPortraitheadActiveAttributeDesc* headPortraithead::add_activeattribute() {
  return activeattribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadActiveAttributeDesc >&
headPortraithead::activeattribute() const {
  return activeattribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraitheadActiveAttributeDesc >*
headPortraithead::mutable_activeattribute() {
  return &activeattribute_;
}

// -------------------------------------------------------------------

// Sheet_headPortraithead

// repeated .proto_ff.headPortraithead headPortraithead_List = 1;
inline int Sheet_headPortraithead::headportraithead_list_size() const {
  return headportraithead_list_.size();
}
inline void Sheet_headPortraithead::clear_headportraithead_list() {
  headportraithead_list_.Clear();
}
inline const ::proto_ff::headPortraithead& Sheet_headPortraithead::headportraithead_list(int index) const {
  return headportraithead_list_.Get(index);
}
inline ::proto_ff::headPortraithead* Sheet_headPortraithead::mutable_headportraithead_list(int index) {
  return headportraithead_list_.Mutable(index);
}
inline ::proto_ff::headPortraithead* Sheet_headPortraithead::add_headportraithead_list() {
  return headportraithead_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraithead >&
Sheet_headPortraithead::headportraithead_list() const {
  return headportraithead_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::headPortraithead >*
Sheet_headPortraithead::mutable_headportraithead_list() {
  return &headportraithead_list_;
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

#endif  // PROTOBUF_headPortrait_2eproto__INCLUDED
