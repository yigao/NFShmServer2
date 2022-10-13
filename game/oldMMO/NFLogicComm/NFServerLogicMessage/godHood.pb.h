// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: godHood.proto

#ifndef PROTOBUF_godHood_2eproto__INCLUDED
#define PROTOBUF_godHood_2eproto__INCLUDED

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
void  protobuf_AddDesc_godHood_2eproto();
void protobuf_AssignDesc_godHood_2eproto();
void protobuf_ShutdownFile_godHood_2eproto();

class godHoodgodHoodattributeDesc;
class godHoodgodHood;
class Sheet_godHoodgodHood;
class godHoodexp;
class Sheet_godHoodexp;

// ===================================================================

class godHoodgodHoodattributeDesc : public ::google::protobuf::Message {
 public:
  godHoodgodHoodattributeDesc();
  virtual ~godHoodgodHoodattributeDesc();

  godHoodgodHoodattributeDesc(const godHoodgodHoodattributeDesc& from);

  inline godHoodgodHoodattributeDesc& operator=(const godHoodgodHoodattributeDesc& from) {
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
  static const godHoodgodHoodattributeDesc& default_instance();

  void Swap(godHoodgodHoodattributeDesc* other);

  // implements Message ----------------------------------------------

  godHoodgodHoodattributeDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const godHoodgodHoodattributeDesc& from);
  void MergeFrom(const godHoodgodHoodattributeDesc& from);
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

  // optional int32 up = 2;
  inline bool has_up() const;
  inline void clear_up();
  static const int kUpFieldNumber = 2;
  inline ::google::protobuf::int32 up() const;
  inline void set_up(::google::protobuf::int32 value);

  // optional int32 value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline ::google::protobuf::int32 value() const;
  inline void set_value(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.godHoodgodHoodattributeDesc)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_up();
  inline void clear_has_up();
  inline void set_has_value();
  inline void clear_has_value();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 up_;
  ::google::protobuf::int32 value_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_godHood_2eproto();
  friend void protobuf_AssignDesc_godHood_2eproto();
  friend void protobuf_ShutdownFile_godHood_2eproto();

  void InitAsDefaultInstance();
  static godHoodgodHoodattributeDesc* default_instance_;
};
// -------------------------------------------------------------------

class godHoodgodHood : public ::google::protobuf::Message {
 public:
  godHoodgodHood();
  virtual ~godHoodgodHood();

  godHoodgodHood(const godHoodgodHood& from);

  inline godHoodgodHood& operator=(const godHoodgodHood& from) {
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
  static const godHoodgodHood& default_instance();

  void Swap(godHoodgodHood* other);

  // implements Message ----------------------------------------------

  godHoodgodHood* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const godHoodgodHood& from);
  void MergeFrom(const godHoodgodHood& from);
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

  // optional int64 id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 attrNum = 3;
  inline bool has_attrnum() const;
  inline void clear_attrnum();
  static const int kAttrNumFieldNumber = 3;
  inline ::google::protobuf::int32 attrnum() const;
  inline void set_attrnum(::google::protobuf::int32 value);

  // optional int32 quality = 4;
  inline bool has_quality() const;
  inline void clear_quality();
  static const int kQualityFieldNumber = 4;
  inline ::google::protobuf::int32 quality() const;
  inline void set_quality(::google::protobuf::int32 value);

  // optional int32 lvUp = 5;
  inline bool has_lvup() const;
  inline void clear_lvup();
  static const int kLvUpFieldNumber = 5;
  inline ::google::protobuf::int32 lvup() const;
  inline void set_lvup(::google::protobuf::int32 value);

  // optional int32 basicsExp = 6;
  inline bool has_basicsexp() const;
  inline void clear_basicsexp();
  static const int kBasicsExpFieldNumber = 6;
  inline ::google::protobuf::int32 basicsexp() const;
  inline void set_basicsexp(::google::protobuf::int32 value);

  // repeated .proto_ff.godHoodgodHoodattributeDesc attribute = 7;
  inline int attribute_size() const;
  inline void clear_attribute();
  static const int kAttributeFieldNumber = 7;
  inline const ::proto_ff::godHoodgodHoodattributeDesc& attribute(int index) const;
  inline ::proto_ff::godHoodgodHoodattributeDesc* mutable_attribute(int index);
  inline ::proto_ff::godHoodgodHoodattributeDesc* add_attribute();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHoodattributeDesc >&
      attribute() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHoodattributeDesc >*
      mutable_attribute();

  // @@protoc_insertion_point(class_scope:proto_ff.godHoodgodHood)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_attrnum();
  inline void clear_has_attrnum();
  inline void set_has_quality();
  inline void clear_has_quality();
  inline void set_has_lvup();
  inline void clear_has_lvup();
  inline void set_has_basicsexp();
  inline void clear_has_basicsexp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 attrnum_;
  ::google::protobuf::int32 quality_;
  ::google::protobuf::int32 lvup_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHoodattributeDesc > attribute_;
  ::google::protobuf::int32 basicsexp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];

  friend void  protobuf_AddDesc_godHood_2eproto();
  friend void protobuf_AssignDesc_godHood_2eproto();
  friend void protobuf_ShutdownFile_godHood_2eproto();

  void InitAsDefaultInstance();
  static godHoodgodHood* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_godHoodgodHood : public ::google::protobuf::Message {
 public:
  Sheet_godHoodgodHood();
  virtual ~Sheet_godHoodgodHood();

  Sheet_godHoodgodHood(const Sheet_godHoodgodHood& from);

  inline Sheet_godHoodgodHood& operator=(const Sheet_godHoodgodHood& from) {
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
  static const Sheet_godHoodgodHood& default_instance();

  void Swap(Sheet_godHoodgodHood* other);

  // implements Message ----------------------------------------------

  Sheet_godHoodgodHood* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_godHoodgodHood& from);
  void MergeFrom(const Sheet_godHoodgodHood& from);
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

  // repeated .proto_ff.godHoodgodHood godHoodgodHood_List = 1;
  inline int godhoodgodhood_list_size() const;
  inline void clear_godhoodgodhood_list();
  static const int kGodHoodgodHoodListFieldNumber = 1;
  inline const ::proto_ff::godHoodgodHood& godhoodgodhood_list(int index) const;
  inline ::proto_ff::godHoodgodHood* mutable_godhoodgodhood_list(int index);
  inline ::proto_ff::godHoodgodHood* add_godhoodgodhood_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHood >&
      godhoodgodhood_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHood >*
      mutable_godhoodgodhood_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_godHoodgodHood)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHood > godhoodgodhood_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_godHood_2eproto();
  friend void protobuf_AssignDesc_godHood_2eproto();
  friend void protobuf_ShutdownFile_godHood_2eproto();

  void InitAsDefaultInstance();
  static Sheet_godHoodgodHood* default_instance_;
};
// -------------------------------------------------------------------

class godHoodexp : public ::google::protobuf::Message {
 public:
  godHoodexp();
  virtual ~godHoodexp();

  godHoodexp(const godHoodexp& from);

  inline godHoodexp& operator=(const godHoodexp& from) {
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
  static const godHoodexp& default_instance();

  void Swap(godHoodexp* other);

  // implements Message ----------------------------------------------

  godHoodexp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const godHoodexp& from);
  void MergeFrom(const godHoodexp& from);
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

  // optional int32 lv = 1;
  inline bool has_lv() const;
  inline void clear_lv();
  static const int kLvFieldNumber = 1;
  inline ::google::protobuf::int32 lv() const;
  inline void set_lv(::google::protobuf::int32 value);

  // optional int32 exp = 2;
  inline bool has_exp() const;
  inline void clear_exp();
  static const int kExpFieldNumber = 2;
  inline ::google::protobuf::int32 exp() const;
  inline void set_exp(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.godHoodexp)
 private:
  inline void set_has_lv();
  inline void clear_has_lv();
  inline void set_has_exp();
  inline void clear_has_exp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 lv_;
  ::google::protobuf::int32 exp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_godHood_2eproto();
  friend void protobuf_AssignDesc_godHood_2eproto();
  friend void protobuf_ShutdownFile_godHood_2eproto();

  void InitAsDefaultInstance();
  static godHoodexp* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_godHoodexp : public ::google::protobuf::Message {
 public:
  Sheet_godHoodexp();
  virtual ~Sheet_godHoodexp();

  Sheet_godHoodexp(const Sheet_godHoodexp& from);

  inline Sheet_godHoodexp& operator=(const Sheet_godHoodexp& from) {
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
  static const Sheet_godHoodexp& default_instance();

  void Swap(Sheet_godHoodexp* other);

  // implements Message ----------------------------------------------

  Sheet_godHoodexp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_godHoodexp& from);
  void MergeFrom(const Sheet_godHoodexp& from);
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

  // repeated .proto_ff.godHoodexp godHoodexp_List = 1;
  inline int godhoodexp_list_size() const;
  inline void clear_godhoodexp_list();
  static const int kGodHoodexpListFieldNumber = 1;
  inline const ::proto_ff::godHoodexp& godhoodexp_list(int index) const;
  inline ::proto_ff::godHoodexp* mutable_godhoodexp_list(int index);
  inline ::proto_ff::godHoodexp* add_godhoodexp_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodexp >&
      godhoodexp_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodexp >*
      mutable_godhoodexp_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_godHoodexp)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodexp > godhoodexp_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_godHood_2eproto();
  friend void protobuf_AssignDesc_godHood_2eproto();
  friend void protobuf_ShutdownFile_godHood_2eproto();

  void InitAsDefaultInstance();
  static Sheet_godHoodexp* default_instance_;
};
// ===================================================================


// ===================================================================

// godHoodgodHoodattributeDesc

// optional int32 type = 1;
inline bool godHoodgodHoodattributeDesc::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void godHoodgodHoodattributeDesc::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void godHoodgodHoodattributeDesc::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void godHoodgodHoodattributeDesc::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 godHoodgodHoodattributeDesc::type() const {
  return type_;
}
inline void godHoodgodHoodattributeDesc::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 up = 2;
inline bool godHoodgodHoodattributeDesc::has_up() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void godHoodgodHoodattributeDesc::set_has_up() {
  _has_bits_[0] |= 0x00000002u;
}
inline void godHoodgodHoodattributeDesc::clear_has_up() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void godHoodgodHoodattributeDesc::clear_up() {
  up_ = 0;
  clear_has_up();
}
inline ::google::protobuf::int32 godHoodgodHoodattributeDesc::up() const {
  return up_;
}
inline void godHoodgodHoodattributeDesc::set_up(::google::protobuf::int32 value) {
  set_has_up();
  up_ = value;
}

// optional int32 value = 3;
inline bool godHoodgodHoodattributeDesc::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void godHoodgodHoodattributeDesc::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void godHoodgodHoodattributeDesc::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void godHoodgodHoodattributeDesc::clear_value() {
  value_ = 0;
  clear_has_value();
}
inline ::google::protobuf::int32 godHoodgodHoodattributeDesc::value() const {
  return value_;
}
inline void godHoodgodHoodattributeDesc::set_value(::google::protobuf::int32 value) {
  set_has_value();
  value_ = value;
}

// -------------------------------------------------------------------

// godHoodgodHood

// optional int64 id = 1;
inline bool godHoodgodHood::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void godHoodgodHood::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void godHoodgodHood::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void godHoodgodHood::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 godHoodgodHood::id() const {
  return id_;
}
inline void godHoodgodHood::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int32 type = 2;
inline bool godHoodgodHood::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void godHoodgodHood::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void godHoodgodHood::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void godHoodgodHood::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 godHoodgodHood::type() const {
  return type_;
}
inline void godHoodgodHood::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 attrNum = 3;
inline bool godHoodgodHood::has_attrnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void godHoodgodHood::set_has_attrnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void godHoodgodHood::clear_has_attrnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void godHoodgodHood::clear_attrnum() {
  attrnum_ = 0;
  clear_has_attrnum();
}
inline ::google::protobuf::int32 godHoodgodHood::attrnum() const {
  return attrnum_;
}
inline void godHoodgodHood::set_attrnum(::google::protobuf::int32 value) {
  set_has_attrnum();
  attrnum_ = value;
}

// optional int32 quality = 4;
inline bool godHoodgodHood::has_quality() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void godHoodgodHood::set_has_quality() {
  _has_bits_[0] |= 0x00000008u;
}
inline void godHoodgodHood::clear_has_quality() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void godHoodgodHood::clear_quality() {
  quality_ = 0;
  clear_has_quality();
}
inline ::google::protobuf::int32 godHoodgodHood::quality() const {
  return quality_;
}
inline void godHoodgodHood::set_quality(::google::protobuf::int32 value) {
  set_has_quality();
  quality_ = value;
}

// optional int32 lvUp = 5;
inline bool godHoodgodHood::has_lvup() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void godHoodgodHood::set_has_lvup() {
  _has_bits_[0] |= 0x00000010u;
}
inline void godHoodgodHood::clear_has_lvup() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void godHoodgodHood::clear_lvup() {
  lvup_ = 0;
  clear_has_lvup();
}
inline ::google::protobuf::int32 godHoodgodHood::lvup() const {
  return lvup_;
}
inline void godHoodgodHood::set_lvup(::google::protobuf::int32 value) {
  set_has_lvup();
  lvup_ = value;
}

// optional int32 basicsExp = 6;
inline bool godHoodgodHood::has_basicsexp() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void godHoodgodHood::set_has_basicsexp() {
  _has_bits_[0] |= 0x00000020u;
}
inline void godHoodgodHood::clear_has_basicsexp() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void godHoodgodHood::clear_basicsexp() {
  basicsexp_ = 0;
  clear_has_basicsexp();
}
inline ::google::protobuf::int32 godHoodgodHood::basicsexp() const {
  return basicsexp_;
}
inline void godHoodgodHood::set_basicsexp(::google::protobuf::int32 value) {
  set_has_basicsexp();
  basicsexp_ = value;
}

// repeated .proto_ff.godHoodgodHoodattributeDesc attribute = 7;
inline int godHoodgodHood::attribute_size() const {
  return attribute_.size();
}
inline void godHoodgodHood::clear_attribute() {
  attribute_.Clear();
}
inline const ::proto_ff::godHoodgodHoodattributeDesc& godHoodgodHood::attribute(int index) const {
  return attribute_.Get(index);
}
inline ::proto_ff::godHoodgodHoodattributeDesc* godHoodgodHood::mutable_attribute(int index) {
  return attribute_.Mutable(index);
}
inline ::proto_ff::godHoodgodHoodattributeDesc* godHoodgodHood::add_attribute() {
  return attribute_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHoodattributeDesc >&
godHoodgodHood::attribute() const {
  return attribute_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHoodattributeDesc >*
godHoodgodHood::mutable_attribute() {
  return &attribute_;
}

// -------------------------------------------------------------------

// Sheet_godHoodgodHood

// repeated .proto_ff.godHoodgodHood godHoodgodHood_List = 1;
inline int Sheet_godHoodgodHood::godhoodgodhood_list_size() const {
  return godhoodgodhood_list_.size();
}
inline void Sheet_godHoodgodHood::clear_godhoodgodhood_list() {
  godhoodgodhood_list_.Clear();
}
inline const ::proto_ff::godHoodgodHood& Sheet_godHoodgodHood::godhoodgodhood_list(int index) const {
  return godhoodgodhood_list_.Get(index);
}
inline ::proto_ff::godHoodgodHood* Sheet_godHoodgodHood::mutable_godhoodgodhood_list(int index) {
  return godhoodgodhood_list_.Mutable(index);
}
inline ::proto_ff::godHoodgodHood* Sheet_godHoodgodHood::add_godhoodgodhood_list() {
  return godhoodgodhood_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHood >&
Sheet_godHoodgodHood::godhoodgodhood_list() const {
  return godhoodgodhood_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodgodHood >*
Sheet_godHoodgodHood::mutable_godhoodgodhood_list() {
  return &godhoodgodhood_list_;
}

// -------------------------------------------------------------------

// godHoodexp

// optional int32 lv = 1;
inline bool godHoodexp::has_lv() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void godHoodexp::set_has_lv() {
  _has_bits_[0] |= 0x00000001u;
}
inline void godHoodexp::clear_has_lv() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void godHoodexp::clear_lv() {
  lv_ = 0;
  clear_has_lv();
}
inline ::google::protobuf::int32 godHoodexp::lv() const {
  return lv_;
}
inline void godHoodexp::set_lv(::google::protobuf::int32 value) {
  set_has_lv();
  lv_ = value;
}

// optional int32 exp = 2;
inline bool godHoodexp::has_exp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void godHoodexp::set_has_exp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void godHoodexp::clear_has_exp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void godHoodexp::clear_exp() {
  exp_ = 0;
  clear_has_exp();
}
inline ::google::protobuf::int32 godHoodexp::exp() const {
  return exp_;
}
inline void godHoodexp::set_exp(::google::protobuf::int32 value) {
  set_has_exp();
  exp_ = value;
}

// -------------------------------------------------------------------

// Sheet_godHoodexp

// repeated .proto_ff.godHoodexp godHoodexp_List = 1;
inline int Sheet_godHoodexp::godhoodexp_list_size() const {
  return godhoodexp_list_.size();
}
inline void Sheet_godHoodexp::clear_godhoodexp_list() {
  godhoodexp_list_.Clear();
}
inline const ::proto_ff::godHoodexp& Sheet_godHoodexp::godhoodexp_list(int index) const {
  return godhoodexp_list_.Get(index);
}
inline ::proto_ff::godHoodexp* Sheet_godHoodexp::mutable_godhoodexp_list(int index) {
  return godhoodexp_list_.Mutable(index);
}
inline ::proto_ff::godHoodexp* Sheet_godHoodexp::add_godhoodexp_list() {
  return godhoodexp_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodexp >&
Sheet_godHoodexp::godhoodexp_list() const {
  return godhoodexp_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::godHoodexp >*
Sheet_godHoodexp::mutable_godhoodexp_list() {
  return &godhoodexp_list_;
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

#endif  // PROTOBUF_godHood_2eproto__INCLUDED