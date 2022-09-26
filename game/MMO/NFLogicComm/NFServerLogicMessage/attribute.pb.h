// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: attribute.proto

#ifndef PROTOBUF_attribute_2eproto__INCLUDED
#define PROTOBUF_attribute_2eproto__INCLUDED

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
void  protobuf_AddDesc_attribute_2eproto();
void protobuf_AssignDesc_attribute_2eproto();
void protobuf_ShutdownFile_attribute_2eproto();

class attributeattribute;
class Sheet_attributeattribute;
class attributesuppress;
class Sheet_attributesuppress;
class attributepowersup;
class Sheet_attributepowersup;

// ===================================================================

class attributeattribute : public ::google::protobuf::Message {
 public:
  attributeattribute();
  virtual ~attributeattribute();

  attributeattribute(const attributeattribute& from);

  inline attributeattribute& operator=(const attributeattribute& from) {
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
  static const attributeattribute& default_instance();

  void Swap(attributeattribute* other);

  // implements Message ----------------------------------------------

  attributeattribute* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const attributeattribute& from);
  void MergeFrom(const attributeattribute& from);
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

  // optional int32 percent = 2;
  inline bool has_percent() const;
  inline void clear_percent();
  static const int kPercentFieldNumber = 2;
  inline ::google::protobuf::int32 percent() const;
  inline void set_percent(::google::protobuf::int32 value);

  // optional float power = 3;
  inline bool has_power() const;
  inline void clear_power();
  static const int kPowerFieldNumber = 3;
  inline float power() const;
  inline void set_power(float value);

  // @@protoc_insertion_point(class_scope:proto_ff.attributeattribute)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_percent();
  inline void clear_has_percent();
  inline void set_has_power();
  inline void clear_has_power();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 percent_;
  float power_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static attributeattribute* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_attributeattribute : public ::google::protobuf::Message {
 public:
  Sheet_attributeattribute();
  virtual ~Sheet_attributeattribute();

  Sheet_attributeattribute(const Sheet_attributeattribute& from);

  inline Sheet_attributeattribute& operator=(const Sheet_attributeattribute& from) {
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
  static const Sheet_attributeattribute& default_instance();

  void Swap(Sheet_attributeattribute* other);

  // implements Message ----------------------------------------------

  Sheet_attributeattribute* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_attributeattribute& from);
  void MergeFrom(const Sheet_attributeattribute& from);
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

  // repeated .proto_ff.attributeattribute attributeattribute_List = 1;
  inline int attributeattribute_list_size() const;
  inline void clear_attributeattribute_list();
  static const int kAttributeattributeListFieldNumber = 1;
  inline const ::proto_ff::attributeattribute& attributeattribute_list(int index) const;
  inline ::proto_ff::attributeattribute* mutable_attributeattribute_list(int index);
  inline ::proto_ff::attributeattribute* add_attributeattribute_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributeattribute >&
      attributeattribute_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributeattribute >*
      mutable_attributeattribute_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_attributeattribute)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::attributeattribute > attributeattribute_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static Sheet_attributeattribute* default_instance_;
};
// -------------------------------------------------------------------

class attributesuppress : public ::google::protobuf::Message {
 public:
  attributesuppress();
  virtual ~attributesuppress();

  attributesuppress(const attributesuppress& from);

  inline attributesuppress& operator=(const attributesuppress& from) {
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
  static const attributesuppress& default_instance();

  void Swap(attributesuppress* other);

  // implements Message ----------------------------------------------

  attributesuppress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const attributesuppress& from);
  void MergeFrom(const attributesuppress& from);
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

  // optional int32 lvlDiff = 1;
  inline bool has_lvldiff() const;
  inline void clear_lvldiff();
  static const int kLvlDiffFieldNumber = 1;
  inline ::google::protobuf::int32 lvldiff() const;
  inline void set_lvldiff(::google::protobuf::int32 value);

  // optional int32 hitSupPve = 2;
  inline bool has_hitsuppve() const;
  inline void clear_hitsuppve();
  static const int kHitSupPveFieldNumber = 2;
  inline ::google::protobuf::int32 hitsuppve() const;
  inline void set_hitsuppve(::google::protobuf::int32 value);

  // optional int32 critSupPve = 3;
  inline bool has_critsuppve() const;
  inline void clear_critsuppve();
  static const int kCritSupPveFieldNumber = 3;
  inline ::google::protobuf::int32 critsuppve() const;
  inline void set_critsuppve(::google::protobuf::int32 value);

  // optional int32 killSupPve = 4;
  inline bool has_killsuppve() const;
  inline void clear_killsuppve();
  static const int kKillSupPveFieldNumber = 4;
  inline ::google::protobuf::int32 killsuppve() const;
  inline void set_killsuppve(::google::protobuf::int32 value);

  // optional int32 stateSupPve = 5;
  inline bool has_statesuppve() const;
  inline void clear_statesuppve();
  static const int kStateSupPveFieldNumber = 5;
  inline ::google::protobuf::int32 statesuppve() const;
  inline void set_statesuppve(::google::protobuf::int32 value);

  // optional int32 lvSupPve = 6;
  inline bool has_lvsuppve() const;
  inline void clear_lvsuppve();
  static const int kLvSupPveFieldNumber = 6;
  inline ::google::protobuf::int32 lvsuppve() const;
  inline void set_lvsuppve(::google::protobuf::int32 value);

  // optional int32 hitSupPvp = 7;
  inline bool has_hitsuppvp() const;
  inline void clear_hitsuppvp();
  static const int kHitSupPvpFieldNumber = 7;
  inline ::google::protobuf::int32 hitsuppvp() const;
  inline void set_hitsuppvp(::google::protobuf::int32 value);

  // optional int32 critSupPvp = 8;
  inline bool has_critsuppvp() const;
  inline void clear_critsuppvp();
  static const int kCritSupPvpFieldNumber = 8;
  inline ::google::protobuf::int32 critsuppvp() const;
  inline void set_critsuppvp(::google::protobuf::int32 value);

  // optional int32 killSupPvp = 9;
  inline bool has_killsuppvp() const;
  inline void clear_killsuppvp();
  static const int kKillSupPvpFieldNumber = 9;
  inline ::google::protobuf::int32 killsuppvp() const;
  inline void set_killsuppvp(::google::protobuf::int32 value);

  // optional int32 stateSupPvp = 10;
  inline bool has_statesuppvp() const;
  inline void clear_statesuppvp();
  static const int kStateSupPvpFieldNumber = 10;
  inline ::google::protobuf::int32 statesuppvp() const;
  inline void set_statesuppvp(::google::protobuf::int32 value);

  // optional int32 lvSupPvp = 11;
  inline bool has_lvsuppvp() const;
  inline void clear_lvsuppvp();
  static const int kLvSupPvpFieldNumber = 11;
  inline ::google::protobuf::int32 lvsuppvp() const;
  inline void set_lvsuppvp(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.attributesuppress)
 private:
  inline void set_has_lvldiff();
  inline void clear_has_lvldiff();
  inline void set_has_hitsuppve();
  inline void clear_has_hitsuppve();
  inline void set_has_critsuppve();
  inline void clear_has_critsuppve();
  inline void set_has_killsuppve();
  inline void clear_has_killsuppve();
  inline void set_has_statesuppve();
  inline void clear_has_statesuppve();
  inline void set_has_lvsuppve();
  inline void clear_has_lvsuppve();
  inline void set_has_hitsuppvp();
  inline void clear_has_hitsuppvp();
  inline void set_has_critsuppvp();
  inline void clear_has_critsuppvp();
  inline void set_has_killsuppvp();
  inline void clear_has_killsuppvp();
  inline void set_has_statesuppvp();
  inline void clear_has_statesuppvp();
  inline void set_has_lvsuppvp();
  inline void clear_has_lvsuppvp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 lvldiff_;
  ::google::protobuf::int32 hitsuppve_;
  ::google::protobuf::int32 critsuppve_;
  ::google::protobuf::int32 killsuppve_;
  ::google::protobuf::int32 statesuppve_;
  ::google::protobuf::int32 lvsuppve_;
  ::google::protobuf::int32 hitsuppvp_;
  ::google::protobuf::int32 critsuppvp_;
  ::google::protobuf::int32 killsuppvp_;
  ::google::protobuf::int32 statesuppvp_;
  ::google::protobuf::int32 lvsuppvp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static attributesuppress* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_attributesuppress : public ::google::protobuf::Message {
 public:
  Sheet_attributesuppress();
  virtual ~Sheet_attributesuppress();

  Sheet_attributesuppress(const Sheet_attributesuppress& from);

  inline Sheet_attributesuppress& operator=(const Sheet_attributesuppress& from) {
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
  static const Sheet_attributesuppress& default_instance();

  void Swap(Sheet_attributesuppress* other);

  // implements Message ----------------------------------------------

  Sheet_attributesuppress* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_attributesuppress& from);
  void MergeFrom(const Sheet_attributesuppress& from);
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

  // repeated .proto_ff.attributesuppress attributesuppress_List = 1;
  inline int attributesuppress_list_size() const;
  inline void clear_attributesuppress_list();
  static const int kAttributesuppressListFieldNumber = 1;
  inline const ::proto_ff::attributesuppress& attributesuppress_list(int index) const;
  inline ::proto_ff::attributesuppress* mutable_attributesuppress_list(int index);
  inline ::proto_ff::attributesuppress* add_attributesuppress_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributesuppress >&
      attributesuppress_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributesuppress >*
      mutable_attributesuppress_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_attributesuppress)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::attributesuppress > attributesuppress_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static Sheet_attributesuppress* default_instance_;
};
// -------------------------------------------------------------------

class attributepowersup : public ::google::protobuf::Message {
 public:
  attributepowersup();
  virtual ~attributepowersup();

  attributepowersup(const attributepowersup& from);

  inline attributepowersup& operator=(const attributepowersup& from) {
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
  static const attributepowersup& default_instance();

  void Swap(attributepowersup* other);

  // implements Message ----------------------------------------------

  attributepowersup* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const attributepowersup& from);
  void MergeFrom(const attributepowersup& from);
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

  // optional int32 powerDiff = 1;
  inline bool has_powerdiff() const;
  inline void clear_powerdiff();
  static const int kPowerDiffFieldNumber = 1;
  inline ::google::protobuf::int32 powerdiff() const;
  inline void set_powerdiff(::google::protobuf::int32 value);

  // optional int32 powerSupPve = 2;
  inline bool has_powersuppve() const;
  inline void clear_powersuppve();
  static const int kPowerSupPveFieldNumber = 2;
  inline ::google::protobuf::int32 powersuppve() const;
  inline void set_powersuppve(::google::protobuf::int32 value);

  // optional int32 powerSupPvp = 3;
  inline bool has_powersuppvp() const;
  inline void clear_powersuppvp();
  static const int kPowerSupPvpFieldNumber = 3;
  inline ::google::protobuf::int32 powersuppvp() const;
  inline void set_powersuppvp(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.attributepowersup)
 private:
  inline void set_has_powerdiff();
  inline void clear_has_powerdiff();
  inline void set_has_powersuppve();
  inline void clear_has_powersuppve();
  inline void set_has_powersuppvp();
  inline void clear_has_powersuppvp();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 powerdiff_;
  ::google::protobuf::int32 powersuppve_;
  ::google::protobuf::int32 powersuppvp_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static attributepowersup* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_attributepowersup : public ::google::protobuf::Message {
 public:
  Sheet_attributepowersup();
  virtual ~Sheet_attributepowersup();

  Sheet_attributepowersup(const Sheet_attributepowersup& from);

  inline Sheet_attributepowersup& operator=(const Sheet_attributepowersup& from) {
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
  static const Sheet_attributepowersup& default_instance();

  void Swap(Sheet_attributepowersup* other);

  // implements Message ----------------------------------------------

  Sheet_attributepowersup* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_attributepowersup& from);
  void MergeFrom(const Sheet_attributepowersup& from);
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

  // repeated .proto_ff.attributepowersup attributepowersup_List = 1;
  inline int attributepowersup_list_size() const;
  inline void clear_attributepowersup_list();
  static const int kAttributepowersupListFieldNumber = 1;
  inline const ::proto_ff::attributepowersup& attributepowersup_list(int index) const;
  inline ::proto_ff::attributepowersup* mutable_attributepowersup_list(int index);
  inline ::proto_ff::attributepowersup* add_attributepowersup_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributepowersup >&
      attributepowersup_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributepowersup >*
      mutable_attributepowersup_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_attributepowersup)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::attributepowersup > attributepowersup_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_attribute_2eproto();
  friend void protobuf_AssignDesc_attribute_2eproto();
  friend void protobuf_ShutdownFile_attribute_2eproto();

  void InitAsDefaultInstance();
  static Sheet_attributepowersup* default_instance_;
};
// ===================================================================


// ===================================================================

// attributeattribute

// optional int32 id = 1;
inline bool attributeattribute::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void attributeattribute::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void attributeattribute::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void attributeattribute::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 attributeattribute::id() const {
  return id_;
}
inline void attributeattribute::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 percent = 2;
inline bool attributeattribute::has_percent() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void attributeattribute::set_has_percent() {
  _has_bits_[0] |= 0x00000002u;
}
inline void attributeattribute::clear_has_percent() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void attributeattribute::clear_percent() {
  percent_ = 0;
  clear_has_percent();
}
inline ::google::protobuf::int32 attributeattribute::percent() const {
  return percent_;
}
inline void attributeattribute::set_percent(::google::protobuf::int32 value) {
  set_has_percent();
  percent_ = value;
}

// optional float power = 3;
inline bool attributeattribute::has_power() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void attributeattribute::set_has_power() {
  _has_bits_[0] |= 0x00000004u;
}
inline void attributeattribute::clear_has_power() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void attributeattribute::clear_power() {
  power_ = 0;
  clear_has_power();
}
inline float attributeattribute::power() const {
  return power_;
}
inline void attributeattribute::set_power(float value) {
  set_has_power();
  power_ = value;
}

// -------------------------------------------------------------------

// Sheet_attributeattribute

// repeated .proto_ff.attributeattribute attributeattribute_List = 1;
inline int Sheet_attributeattribute::attributeattribute_list_size() const {
  return attributeattribute_list_.size();
}
inline void Sheet_attributeattribute::clear_attributeattribute_list() {
  attributeattribute_list_.Clear();
}
inline const ::proto_ff::attributeattribute& Sheet_attributeattribute::attributeattribute_list(int index) const {
  return attributeattribute_list_.Get(index);
}
inline ::proto_ff::attributeattribute* Sheet_attributeattribute::mutable_attributeattribute_list(int index) {
  return attributeattribute_list_.Mutable(index);
}
inline ::proto_ff::attributeattribute* Sheet_attributeattribute::add_attributeattribute_list() {
  return attributeattribute_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributeattribute >&
Sheet_attributeattribute::attributeattribute_list() const {
  return attributeattribute_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributeattribute >*
Sheet_attributeattribute::mutable_attributeattribute_list() {
  return &attributeattribute_list_;
}

// -------------------------------------------------------------------

// attributesuppress

// optional int32 lvlDiff = 1;
inline bool attributesuppress::has_lvldiff() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void attributesuppress::set_has_lvldiff() {
  _has_bits_[0] |= 0x00000001u;
}
inline void attributesuppress::clear_has_lvldiff() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void attributesuppress::clear_lvldiff() {
  lvldiff_ = 0;
  clear_has_lvldiff();
}
inline ::google::protobuf::int32 attributesuppress::lvldiff() const {
  return lvldiff_;
}
inline void attributesuppress::set_lvldiff(::google::protobuf::int32 value) {
  set_has_lvldiff();
  lvldiff_ = value;
}

// optional int32 hitSupPve = 2;
inline bool attributesuppress::has_hitsuppve() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void attributesuppress::set_has_hitsuppve() {
  _has_bits_[0] |= 0x00000002u;
}
inline void attributesuppress::clear_has_hitsuppve() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void attributesuppress::clear_hitsuppve() {
  hitsuppve_ = 0;
  clear_has_hitsuppve();
}
inline ::google::protobuf::int32 attributesuppress::hitsuppve() const {
  return hitsuppve_;
}
inline void attributesuppress::set_hitsuppve(::google::protobuf::int32 value) {
  set_has_hitsuppve();
  hitsuppve_ = value;
}

// optional int32 critSupPve = 3;
inline bool attributesuppress::has_critsuppve() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void attributesuppress::set_has_critsuppve() {
  _has_bits_[0] |= 0x00000004u;
}
inline void attributesuppress::clear_has_critsuppve() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void attributesuppress::clear_critsuppve() {
  critsuppve_ = 0;
  clear_has_critsuppve();
}
inline ::google::protobuf::int32 attributesuppress::critsuppve() const {
  return critsuppve_;
}
inline void attributesuppress::set_critsuppve(::google::protobuf::int32 value) {
  set_has_critsuppve();
  critsuppve_ = value;
}

// optional int32 killSupPve = 4;
inline bool attributesuppress::has_killsuppve() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void attributesuppress::set_has_killsuppve() {
  _has_bits_[0] |= 0x00000008u;
}
inline void attributesuppress::clear_has_killsuppve() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void attributesuppress::clear_killsuppve() {
  killsuppve_ = 0;
  clear_has_killsuppve();
}
inline ::google::protobuf::int32 attributesuppress::killsuppve() const {
  return killsuppve_;
}
inline void attributesuppress::set_killsuppve(::google::protobuf::int32 value) {
  set_has_killsuppve();
  killsuppve_ = value;
}

// optional int32 stateSupPve = 5;
inline bool attributesuppress::has_statesuppve() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void attributesuppress::set_has_statesuppve() {
  _has_bits_[0] |= 0x00000010u;
}
inline void attributesuppress::clear_has_statesuppve() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void attributesuppress::clear_statesuppve() {
  statesuppve_ = 0;
  clear_has_statesuppve();
}
inline ::google::protobuf::int32 attributesuppress::statesuppve() const {
  return statesuppve_;
}
inline void attributesuppress::set_statesuppve(::google::protobuf::int32 value) {
  set_has_statesuppve();
  statesuppve_ = value;
}

// optional int32 lvSupPve = 6;
inline bool attributesuppress::has_lvsuppve() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void attributesuppress::set_has_lvsuppve() {
  _has_bits_[0] |= 0x00000020u;
}
inline void attributesuppress::clear_has_lvsuppve() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void attributesuppress::clear_lvsuppve() {
  lvsuppve_ = 0;
  clear_has_lvsuppve();
}
inline ::google::protobuf::int32 attributesuppress::lvsuppve() const {
  return lvsuppve_;
}
inline void attributesuppress::set_lvsuppve(::google::protobuf::int32 value) {
  set_has_lvsuppve();
  lvsuppve_ = value;
}

// optional int32 hitSupPvp = 7;
inline bool attributesuppress::has_hitsuppvp() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void attributesuppress::set_has_hitsuppvp() {
  _has_bits_[0] |= 0x00000040u;
}
inline void attributesuppress::clear_has_hitsuppvp() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void attributesuppress::clear_hitsuppvp() {
  hitsuppvp_ = 0;
  clear_has_hitsuppvp();
}
inline ::google::protobuf::int32 attributesuppress::hitsuppvp() const {
  return hitsuppvp_;
}
inline void attributesuppress::set_hitsuppvp(::google::protobuf::int32 value) {
  set_has_hitsuppvp();
  hitsuppvp_ = value;
}

// optional int32 critSupPvp = 8;
inline bool attributesuppress::has_critsuppvp() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void attributesuppress::set_has_critsuppvp() {
  _has_bits_[0] |= 0x00000080u;
}
inline void attributesuppress::clear_has_critsuppvp() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void attributesuppress::clear_critsuppvp() {
  critsuppvp_ = 0;
  clear_has_critsuppvp();
}
inline ::google::protobuf::int32 attributesuppress::critsuppvp() const {
  return critsuppvp_;
}
inline void attributesuppress::set_critsuppvp(::google::protobuf::int32 value) {
  set_has_critsuppvp();
  critsuppvp_ = value;
}

// optional int32 killSupPvp = 9;
inline bool attributesuppress::has_killsuppvp() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void attributesuppress::set_has_killsuppvp() {
  _has_bits_[0] |= 0x00000100u;
}
inline void attributesuppress::clear_has_killsuppvp() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void attributesuppress::clear_killsuppvp() {
  killsuppvp_ = 0;
  clear_has_killsuppvp();
}
inline ::google::protobuf::int32 attributesuppress::killsuppvp() const {
  return killsuppvp_;
}
inline void attributesuppress::set_killsuppvp(::google::protobuf::int32 value) {
  set_has_killsuppvp();
  killsuppvp_ = value;
}

// optional int32 stateSupPvp = 10;
inline bool attributesuppress::has_statesuppvp() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void attributesuppress::set_has_statesuppvp() {
  _has_bits_[0] |= 0x00000200u;
}
inline void attributesuppress::clear_has_statesuppvp() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void attributesuppress::clear_statesuppvp() {
  statesuppvp_ = 0;
  clear_has_statesuppvp();
}
inline ::google::protobuf::int32 attributesuppress::statesuppvp() const {
  return statesuppvp_;
}
inline void attributesuppress::set_statesuppvp(::google::protobuf::int32 value) {
  set_has_statesuppvp();
  statesuppvp_ = value;
}

// optional int32 lvSupPvp = 11;
inline bool attributesuppress::has_lvsuppvp() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void attributesuppress::set_has_lvsuppvp() {
  _has_bits_[0] |= 0x00000400u;
}
inline void attributesuppress::clear_has_lvsuppvp() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void attributesuppress::clear_lvsuppvp() {
  lvsuppvp_ = 0;
  clear_has_lvsuppvp();
}
inline ::google::protobuf::int32 attributesuppress::lvsuppvp() const {
  return lvsuppvp_;
}
inline void attributesuppress::set_lvsuppvp(::google::protobuf::int32 value) {
  set_has_lvsuppvp();
  lvsuppvp_ = value;
}

// -------------------------------------------------------------------

// Sheet_attributesuppress

// repeated .proto_ff.attributesuppress attributesuppress_List = 1;
inline int Sheet_attributesuppress::attributesuppress_list_size() const {
  return attributesuppress_list_.size();
}
inline void Sheet_attributesuppress::clear_attributesuppress_list() {
  attributesuppress_list_.Clear();
}
inline const ::proto_ff::attributesuppress& Sheet_attributesuppress::attributesuppress_list(int index) const {
  return attributesuppress_list_.Get(index);
}
inline ::proto_ff::attributesuppress* Sheet_attributesuppress::mutable_attributesuppress_list(int index) {
  return attributesuppress_list_.Mutable(index);
}
inline ::proto_ff::attributesuppress* Sheet_attributesuppress::add_attributesuppress_list() {
  return attributesuppress_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributesuppress >&
Sheet_attributesuppress::attributesuppress_list() const {
  return attributesuppress_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributesuppress >*
Sheet_attributesuppress::mutable_attributesuppress_list() {
  return &attributesuppress_list_;
}

// -------------------------------------------------------------------

// attributepowersup

// optional int32 powerDiff = 1;
inline bool attributepowersup::has_powerdiff() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void attributepowersup::set_has_powerdiff() {
  _has_bits_[0] |= 0x00000001u;
}
inline void attributepowersup::clear_has_powerdiff() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void attributepowersup::clear_powerdiff() {
  powerdiff_ = 0;
  clear_has_powerdiff();
}
inline ::google::protobuf::int32 attributepowersup::powerdiff() const {
  return powerdiff_;
}
inline void attributepowersup::set_powerdiff(::google::protobuf::int32 value) {
  set_has_powerdiff();
  powerdiff_ = value;
}

// optional int32 powerSupPve = 2;
inline bool attributepowersup::has_powersuppve() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void attributepowersup::set_has_powersuppve() {
  _has_bits_[0] |= 0x00000002u;
}
inline void attributepowersup::clear_has_powersuppve() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void attributepowersup::clear_powersuppve() {
  powersuppve_ = 0;
  clear_has_powersuppve();
}
inline ::google::protobuf::int32 attributepowersup::powersuppve() const {
  return powersuppve_;
}
inline void attributepowersup::set_powersuppve(::google::protobuf::int32 value) {
  set_has_powersuppve();
  powersuppve_ = value;
}

// optional int32 powerSupPvp = 3;
inline bool attributepowersup::has_powersuppvp() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void attributepowersup::set_has_powersuppvp() {
  _has_bits_[0] |= 0x00000004u;
}
inline void attributepowersup::clear_has_powersuppvp() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void attributepowersup::clear_powersuppvp() {
  powersuppvp_ = 0;
  clear_has_powersuppvp();
}
inline ::google::protobuf::int32 attributepowersup::powersuppvp() const {
  return powersuppvp_;
}
inline void attributepowersup::set_powersuppvp(::google::protobuf::int32 value) {
  set_has_powersuppvp();
  powersuppvp_ = value;
}

// -------------------------------------------------------------------

// Sheet_attributepowersup

// repeated .proto_ff.attributepowersup attributepowersup_List = 1;
inline int Sheet_attributepowersup::attributepowersup_list_size() const {
  return attributepowersup_list_.size();
}
inline void Sheet_attributepowersup::clear_attributepowersup_list() {
  attributepowersup_list_.Clear();
}
inline const ::proto_ff::attributepowersup& Sheet_attributepowersup::attributepowersup_list(int index) const {
  return attributepowersup_list_.Get(index);
}
inline ::proto_ff::attributepowersup* Sheet_attributepowersup::mutable_attributepowersup_list(int index) {
  return attributepowersup_list_.Mutable(index);
}
inline ::proto_ff::attributepowersup* Sheet_attributepowersup::add_attributepowersup_list() {
  return attributepowersup_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::attributepowersup >&
Sheet_attributepowersup::attributepowersup_list() const {
  return attributepowersup_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::attributepowersup >*
Sheet_attributepowersup::mutable_attributepowersup_list() {
  return &attributepowersup_list_;
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

#endif  // PROTOBUF_attribute_2eproto__INCLUDED
