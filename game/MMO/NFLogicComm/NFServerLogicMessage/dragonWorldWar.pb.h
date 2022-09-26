// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dragonWorldWar.proto

#ifndef PROTOBUF_dragonWorldWar_2eproto__INCLUDED
#define PROTOBUF_dragonWorldWar_2eproto__INCLUDED

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
void  protobuf_AddDesc_dragonWorldWar_2eproto();
void protobuf_AssignDesc_dragonWorldWar_2eproto();
void protobuf_ShutdownFile_dragonWorldWar_2eproto();

class dragonWorldWarconstants;
class Sheet_dragonWorldWarconstants;
class dragonWorldWargoldskill;
class Sheet_dragonWorldWargoldskill;
class dragonWorldWargoldShop;
class Sheet_dragonWorldWargoldShop;

// ===================================================================

class dragonWorldWarconstants : public ::google::protobuf::Message {
 public:
  dragonWorldWarconstants();
  virtual ~dragonWorldWarconstants();

  dragonWorldWarconstants(const dragonWorldWarconstants& from);

  inline dragonWorldWarconstants& operator=(const dragonWorldWarconstants& from) {
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
  static const dragonWorldWarconstants& default_instance();

  void Swap(dragonWorldWarconstants* other);

  // implements Message ----------------------------------------------

  dragonWorldWarconstants* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const dragonWorldWarconstants& from);
  void MergeFrom(const dragonWorldWarconstants& from);
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

  // optional int32 valuedata = 2;
  inline bool has_valuedata() const;
  inline void clear_valuedata();
  static const int kValuedataFieldNumber = 2;
  inline ::google::protobuf::int32 valuedata() const;
  inline void set_valuedata(::google::protobuf::int32 value);

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

  // @@protoc_insertion_point(class_scope:proto_ff.dragonWorldWarconstants)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_valuedata();
  inline void clear_has_valuedata();
  inline void set_has_stringdata();
  inline void clear_has_stringdata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 valuedata_;
  ::std::string* stringdata_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static dragonWorldWarconstants* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_dragonWorldWarconstants : public ::google::protobuf::Message {
 public:
  Sheet_dragonWorldWarconstants();
  virtual ~Sheet_dragonWorldWarconstants();

  Sheet_dragonWorldWarconstants(const Sheet_dragonWorldWarconstants& from);

  inline Sheet_dragonWorldWarconstants& operator=(const Sheet_dragonWorldWarconstants& from) {
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
  static const Sheet_dragonWorldWarconstants& default_instance();

  void Swap(Sheet_dragonWorldWarconstants* other);

  // implements Message ----------------------------------------------

  Sheet_dragonWorldWarconstants* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_dragonWorldWarconstants& from);
  void MergeFrom(const Sheet_dragonWorldWarconstants& from);
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

  // repeated .proto_ff.dragonWorldWarconstants dragonWorldWarconstants_List = 1;
  inline int dragonworldwarconstants_list_size() const;
  inline void clear_dragonworldwarconstants_list();
  static const int kDragonWorldWarconstantsListFieldNumber = 1;
  inline const ::proto_ff::dragonWorldWarconstants& dragonworldwarconstants_list(int index) const;
  inline ::proto_ff::dragonWorldWarconstants* mutable_dragonworldwarconstants_list(int index);
  inline ::proto_ff::dragonWorldWarconstants* add_dragonworldwarconstants_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWarconstants >&
      dragonworldwarconstants_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWarconstants >*
      mutable_dragonworldwarconstants_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_dragonWorldWarconstants)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWarconstants > dragonworldwarconstants_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static Sheet_dragonWorldWarconstants* default_instance_;
};
// -------------------------------------------------------------------

class dragonWorldWargoldskill : public ::google::protobuf::Message {
 public:
  dragonWorldWargoldskill();
  virtual ~dragonWorldWargoldskill();

  dragonWorldWargoldskill(const dragonWorldWargoldskill& from);

  inline dragonWorldWargoldskill& operator=(const dragonWorldWargoldskill& from) {
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
  static const dragonWorldWargoldskill& default_instance();

  void Swap(dragonWorldWargoldskill* other);

  // implements Message ----------------------------------------------

  dragonWorldWargoldskill* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const dragonWorldWargoldskill& from);
  void MergeFrom(const dragonWorldWargoldskill& from);
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

  // optional int32 type = 2;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 2;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 goldmin = 3;
  inline bool has_goldmin() const;
  inline void clear_goldmin();
  static const int kGoldminFieldNumber = 3;
  inline ::google::protobuf::int32 goldmin() const;
  inline void set_goldmin(::google::protobuf::int32 value);

  // optional int64 skillId = 4;
  inline bool has_skillid() const;
  inline void clear_skillid();
  static const int kSkillIdFieldNumber = 4;
  inline ::google::protobuf::int64 skillid() const;
  inline void set_skillid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:proto_ff.dragonWorldWargoldskill)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_goldmin();
  inline void clear_has_goldmin();
  inline void set_has_skillid();
  inline void clear_has_skillid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int64 skillid_;
  ::google::protobuf::int32 goldmin_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static dragonWorldWargoldskill* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_dragonWorldWargoldskill : public ::google::protobuf::Message {
 public:
  Sheet_dragonWorldWargoldskill();
  virtual ~Sheet_dragonWorldWargoldskill();

  Sheet_dragonWorldWargoldskill(const Sheet_dragonWorldWargoldskill& from);

  inline Sheet_dragonWorldWargoldskill& operator=(const Sheet_dragonWorldWargoldskill& from) {
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
  static const Sheet_dragonWorldWargoldskill& default_instance();

  void Swap(Sheet_dragonWorldWargoldskill* other);

  // implements Message ----------------------------------------------

  Sheet_dragonWorldWargoldskill* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_dragonWorldWargoldskill& from);
  void MergeFrom(const Sheet_dragonWorldWargoldskill& from);
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

  // repeated .proto_ff.dragonWorldWargoldskill dragonWorldWargoldskill_List = 1;
  inline int dragonworldwargoldskill_list_size() const;
  inline void clear_dragonworldwargoldskill_list();
  static const int kDragonWorldWargoldskillListFieldNumber = 1;
  inline const ::proto_ff::dragonWorldWargoldskill& dragonworldwargoldskill_list(int index) const;
  inline ::proto_ff::dragonWorldWargoldskill* mutable_dragonworldwargoldskill_list(int index);
  inline ::proto_ff::dragonWorldWargoldskill* add_dragonworldwargoldskill_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldskill >&
      dragonworldwargoldskill_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldskill >*
      mutable_dragonworldwargoldskill_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_dragonWorldWargoldskill)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldskill > dragonworldwargoldskill_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static Sheet_dragonWorldWargoldskill* default_instance_;
};
// -------------------------------------------------------------------

class dragonWorldWargoldShop : public ::google::protobuf::Message {
 public:
  dragonWorldWargoldShop();
  virtual ~dragonWorldWargoldShop();

  dragonWorldWargoldShop(const dragonWorldWargoldShop& from);

  inline dragonWorldWargoldShop& operator=(const dragonWorldWargoldShop& from) {
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
  static const dragonWorldWargoldShop& default_instance();

  void Swap(dragonWorldWargoldShop* other);

  // implements Message ----------------------------------------------

  dragonWorldWargoldShop* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const dragonWorldWargoldShop& from);
  void MergeFrom(const dragonWorldWargoldShop& from);
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

  // optional int64 itemId = 2;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIdFieldNumber = 2;
  inline ::google::protobuf::int64 itemid() const;
  inline void set_itemid(::google::protobuf::int64 value);

  // optional int32 itemNum = 3;
  inline bool has_itemnum() const;
  inline void clear_itemnum();
  static const int kItemNumFieldNumber = 3;
  inline ::google::protobuf::int32 itemnum() const;
  inline void set_itemnum(::google::protobuf::int32 value);

  // optional int32 itemPrice = 4;
  inline bool has_itemprice() const;
  inline void clear_itemprice();
  static const int kItemPriceFieldNumber = 4;
  inline ::google::protobuf::int32 itemprice() const;
  inline void set_itemprice(::google::protobuf::int32 value);

  // optional int32 weight = 5;
  inline bool has_weight() const;
  inline void clear_weight();
  static const int kWeightFieldNumber = 5;
  inline ::google::protobuf::int32 weight() const;
  inline void set_weight(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.dragonWorldWargoldShop)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_itemnum();
  inline void clear_has_itemnum();
  inline void set_has_itemprice();
  inline void clear_has_itemprice();
  inline void set_has_weight();
  inline void clear_has_weight();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 itemid_;
  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 itemnum_;
  ::google::protobuf::int32 itemprice_;
  ::google::protobuf::int32 weight_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static dragonWorldWargoldShop* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_dragonWorldWargoldShop : public ::google::protobuf::Message {
 public:
  Sheet_dragonWorldWargoldShop();
  virtual ~Sheet_dragonWorldWargoldShop();

  Sheet_dragonWorldWargoldShop(const Sheet_dragonWorldWargoldShop& from);

  inline Sheet_dragonWorldWargoldShop& operator=(const Sheet_dragonWorldWargoldShop& from) {
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
  static const Sheet_dragonWorldWargoldShop& default_instance();

  void Swap(Sheet_dragonWorldWargoldShop* other);

  // implements Message ----------------------------------------------

  Sheet_dragonWorldWargoldShop* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_dragonWorldWargoldShop& from);
  void MergeFrom(const Sheet_dragonWorldWargoldShop& from);
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

  // repeated .proto_ff.dragonWorldWargoldShop dragonWorldWargoldShop_List = 1;
  inline int dragonworldwargoldshop_list_size() const;
  inline void clear_dragonworldwargoldshop_list();
  static const int kDragonWorldWargoldShopListFieldNumber = 1;
  inline const ::proto_ff::dragonWorldWargoldShop& dragonworldwargoldshop_list(int index) const;
  inline ::proto_ff::dragonWorldWargoldShop* mutable_dragonworldwargoldshop_list(int index);
  inline ::proto_ff::dragonWorldWargoldShop* add_dragonworldwargoldshop_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldShop >&
      dragonworldwargoldshop_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldShop >*
      mutable_dragonworldwargoldshop_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_dragonWorldWargoldShop)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldShop > dragonworldwargoldshop_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_dragonWorldWar_2eproto();
  friend void protobuf_AssignDesc_dragonWorldWar_2eproto();
  friend void protobuf_ShutdownFile_dragonWorldWar_2eproto();

  void InitAsDefaultInstance();
  static Sheet_dragonWorldWargoldShop* default_instance_;
};
// ===================================================================


// ===================================================================

// dragonWorldWarconstants

// optional int32 ID = 1;
inline bool dragonWorldWarconstants::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void dragonWorldWarconstants::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void dragonWorldWarconstants::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void dragonWorldWarconstants::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 dragonWorldWarconstants::id() const {
  return id_;
}
inline void dragonWorldWarconstants::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 valuedata = 2;
inline bool dragonWorldWarconstants::has_valuedata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void dragonWorldWarconstants::set_has_valuedata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void dragonWorldWarconstants::clear_has_valuedata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void dragonWorldWarconstants::clear_valuedata() {
  valuedata_ = 0;
  clear_has_valuedata();
}
inline ::google::protobuf::int32 dragonWorldWarconstants::valuedata() const {
  return valuedata_;
}
inline void dragonWorldWarconstants::set_valuedata(::google::protobuf::int32 value) {
  set_has_valuedata();
  valuedata_ = value;
}

// optional string stringdata = 3;
inline bool dragonWorldWarconstants::has_stringdata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void dragonWorldWarconstants::set_has_stringdata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void dragonWorldWarconstants::clear_has_stringdata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void dragonWorldWarconstants::clear_stringdata() {
  if (stringdata_ != &::google::protobuf::internal::kEmptyString) {
    stringdata_->clear();
  }
  clear_has_stringdata();
}
inline const ::std::string& dragonWorldWarconstants::stringdata() const {
  return *stringdata_;
}
inline void dragonWorldWarconstants::set_stringdata(const ::std::string& value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void dragonWorldWarconstants::set_stringdata(const char* value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void dragonWorldWarconstants::set_stringdata(const char* value, size_t size) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* dragonWorldWarconstants::mutable_stringdata() {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  return stringdata_;
}
inline ::std::string* dragonWorldWarconstants::release_stringdata() {
  clear_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stringdata_;
    stringdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void dragonWorldWarconstants::set_allocated_stringdata(::std::string* stringdata) {
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

// Sheet_dragonWorldWarconstants

// repeated .proto_ff.dragonWorldWarconstants dragonWorldWarconstants_List = 1;
inline int Sheet_dragonWorldWarconstants::dragonworldwarconstants_list_size() const {
  return dragonworldwarconstants_list_.size();
}
inline void Sheet_dragonWorldWarconstants::clear_dragonworldwarconstants_list() {
  dragonworldwarconstants_list_.Clear();
}
inline const ::proto_ff::dragonWorldWarconstants& Sheet_dragonWorldWarconstants::dragonworldwarconstants_list(int index) const {
  return dragonworldwarconstants_list_.Get(index);
}
inline ::proto_ff::dragonWorldWarconstants* Sheet_dragonWorldWarconstants::mutable_dragonworldwarconstants_list(int index) {
  return dragonworldwarconstants_list_.Mutable(index);
}
inline ::proto_ff::dragonWorldWarconstants* Sheet_dragonWorldWarconstants::add_dragonworldwarconstants_list() {
  return dragonworldwarconstants_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWarconstants >&
Sheet_dragonWorldWarconstants::dragonworldwarconstants_list() const {
  return dragonworldwarconstants_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWarconstants >*
Sheet_dragonWorldWarconstants::mutable_dragonworldwarconstants_list() {
  return &dragonworldwarconstants_list_;
}

// -------------------------------------------------------------------

// dragonWorldWargoldskill

// optional int32 ID = 1;
inline bool dragonWorldWargoldskill::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void dragonWorldWargoldskill::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void dragonWorldWargoldskill::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void dragonWorldWargoldskill::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 dragonWorldWargoldskill::id() const {
  return id_;
}
inline void dragonWorldWargoldskill::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 type = 2;
inline bool dragonWorldWargoldskill::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void dragonWorldWargoldskill::set_has_type() {
  _has_bits_[0] |= 0x00000002u;
}
inline void dragonWorldWargoldskill::clear_has_type() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void dragonWorldWargoldskill::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 dragonWorldWargoldskill::type() const {
  return type_;
}
inline void dragonWorldWargoldskill::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 goldmin = 3;
inline bool dragonWorldWargoldskill::has_goldmin() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void dragonWorldWargoldskill::set_has_goldmin() {
  _has_bits_[0] |= 0x00000004u;
}
inline void dragonWorldWargoldskill::clear_has_goldmin() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void dragonWorldWargoldskill::clear_goldmin() {
  goldmin_ = 0;
  clear_has_goldmin();
}
inline ::google::protobuf::int32 dragonWorldWargoldskill::goldmin() const {
  return goldmin_;
}
inline void dragonWorldWargoldskill::set_goldmin(::google::protobuf::int32 value) {
  set_has_goldmin();
  goldmin_ = value;
}

// optional int64 skillId = 4;
inline bool dragonWorldWargoldskill::has_skillid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void dragonWorldWargoldskill::set_has_skillid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void dragonWorldWargoldskill::clear_has_skillid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void dragonWorldWargoldskill::clear_skillid() {
  skillid_ = GOOGLE_LONGLONG(0);
  clear_has_skillid();
}
inline ::google::protobuf::int64 dragonWorldWargoldskill::skillid() const {
  return skillid_;
}
inline void dragonWorldWargoldskill::set_skillid(::google::protobuf::int64 value) {
  set_has_skillid();
  skillid_ = value;
}

// -------------------------------------------------------------------

// Sheet_dragonWorldWargoldskill

// repeated .proto_ff.dragonWorldWargoldskill dragonWorldWargoldskill_List = 1;
inline int Sheet_dragonWorldWargoldskill::dragonworldwargoldskill_list_size() const {
  return dragonworldwargoldskill_list_.size();
}
inline void Sheet_dragonWorldWargoldskill::clear_dragonworldwargoldskill_list() {
  dragonworldwargoldskill_list_.Clear();
}
inline const ::proto_ff::dragonWorldWargoldskill& Sheet_dragonWorldWargoldskill::dragonworldwargoldskill_list(int index) const {
  return dragonworldwargoldskill_list_.Get(index);
}
inline ::proto_ff::dragonWorldWargoldskill* Sheet_dragonWorldWargoldskill::mutable_dragonworldwargoldskill_list(int index) {
  return dragonworldwargoldskill_list_.Mutable(index);
}
inline ::proto_ff::dragonWorldWargoldskill* Sheet_dragonWorldWargoldskill::add_dragonworldwargoldskill_list() {
  return dragonworldwargoldskill_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldskill >&
Sheet_dragonWorldWargoldskill::dragonworldwargoldskill_list() const {
  return dragonworldwargoldskill_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldskill >*
Sheet_dragonWorldWargoldskill::mutable_dragonworldwargoldskill_list() {
  return &dragonworldwargoldskill_list_;
}

// -------------------------------------------------------------------

// dragonWorldWargoldShop

// optional int32 ID = 1;
inline bool dragonWorldWargoldShop::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void dragonWorldWargoldShop::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void dragonWorldWargoldShop::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void dragonWorldWargoldShop::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 dragonWorldWargoldShop::id() const {
  return id_;
}
inline void dragonWorldWargoldShop::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int64 itemId = 2;
inline bool dragonWorldWargoldShop::has_itemid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void dragonWorldWargoldShop::set_has_itemid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void dragonWorldWargoldShop::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void dragonWorldWargoldShop::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 dragonWorldWargoldShop::itemid() const {
  return itemid_;
}
inline void dragonWorldWargoldShop::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
}

// optional int32 itemNum = 3;
inline bool dragonWorldWargoldShop::has_itemnum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void dragonWorldWargoldShop::set_has_itemnum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void dragonWorldWargoldShop::clear_has_itemnum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void dragonWorldWargoldShop::clear_itemnum() {
  itemnum_ = 0;
  clear_has_itemnum();
}
inline ::google::protobuf::int32 dragonWorldWargoldShop::itemnum() const {
  return itemnum_;
}
inline void dragonWorldWargoldShop::set_itemnum(::google::protobuf::int32 value) {
  set_has_itemnum();
  itemnum_ = value;
}

// optional int32 itemPrice = 4;
inline bool dragonWorldWargoldShop::has_itemprice() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void dragonWorldWargoldShop::set_has_itemprice() {
  _has_bits_[0] |= 0x00000008u;
}
inline void dragonWorldWargoldShop::clear_has_itemprice() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void dragonWorldWargoldShop::clear_itemprice() {
  itemprice_ = 0;
  clear_has_itemprice();
}
inline ::google::protobuf::int32 dragonWorldWargoldShop::itemprice() const {
  return itemprice_;
}
inline void dragonWorldWargoldShop::set_itemprice(::google::protobuf::int32 value) {
  set_has_itemprice();
  itemprice_ = value;
}

// optional int32 weight = 5;
inline bool dragonWorldWargoldShop::has_weight() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void dragonWorldWargoldShop::set_has_weight() {
  _has_bits_[0] |= 0x00000010u;
}
inline void dragonWorldWargoldShop::clear_has_weight() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void dragonWorldWargoldShop::clear_weight() {
  weight_ = 0;
  clear_has_weight();
}
inline ::google::protobuf::int32 dragonWorldWargoldShop::weight() const {
  return weight_;
}
inline void dragonWorldWargoldShop::set_weight(::google::protobuf::int32 value) {
  set_has_weight();
  weight_ = value;
}

// -------------------------------------------------------------------

// Sheet_dragonWorldWargoldShop

// repeated .proto_ff.dragonWorldWargoldShop dragonWorldWargoldShop_List = 1;
inline int Sheet_dragonWorldWargoldShop::dragonworldwargoldshop_list_size() const {
  return dragonworldwargoldshop_list_.size();
}
inline void Sheet_dragonWorldWargoldShop::clear_dragonworldwargoldshop_list() {
  dragonworldwargoldshop_list_.Clear();
}
inline const ::proto_ff::dragonWorldWargoldShop& Sheet_dragonWorldWargoldShop::dragonworldwargoldshop_list(int index) const {
  return dragonworldwargoldshop_list_.Get(index);
}
inline ::proto_ff::dragonWorldWargoldShop* Sheet_dragonWorldWargoldShop::mutable_dragonworldwargoldshop_list(int index) {
  return dragonworldwargoldshop_list_.Mutable(index);
}
inline ::proto_ff::dragonWorldWargoldShop* Sheet_dragonWorldWargoldShop::add_dragonworldwargoldshop_list() {
  return dragonworldwargoldshop_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldShop >&
Sheet_dragonWorldWargoldShop::dragonworldwargoldshop_list() const {
  return dragonworldwargoldshop_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::dragonWorldWargoldShop >*
Sheet_dragonWorldWargoldShop::mutable_dragonworldwargoldshop_list() {
  return &dragonworldwargoldshop_list_;
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

#endif  // PROTOBUF_dragonWorldWar_2eproto__INCLUDED
