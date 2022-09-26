// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gm5Help.proto

#ifndef PROTOBUF_gm5Help_2eproto__INCLUDED
#define PROTOBUF_gm5Help_2eproto__INCLUDED

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
void  protobuf_AddDesc_gm5Help_2eproto();
void protobuf_AssignDesc_gm5Help_2eproto();
void protobuf_ShutdownFile_gm5Help_2eproto();

class gm5Helpcons;
class Sheet_gm5Helpcons;
class gm5HelprewardrewardDesc;
class gm5Helpreward;
class Sheet_gm5Helpreward;

// ===================================================================

class gm5Helpcons : public ::google::protobuf::Message {
 public:
  gm5Helpcons();
  virtual ~gm5Helpcons();

  gm5Helpcons(const gm5Helpcons& from);

  inline gm5Helpcons& operator=(const gm5Helpcons& from) {
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
  static const gm5Helpcons& default_instance();

  void Swap(gm5Helpcons* other);

  // implements Message ----------------------------------------------

  gm5Helpcons* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gm5Helpcons& from);
  void MergeFrom(const gm5Helpcons& from);
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

  // optional int64 constantdata = 2;
  inline bool has_constantdata() const;
  inline void clear_constantdata();
  static const int kConstantdataFieldNumber = 2;
  inline ::google::protobuf::int64 constantdata() const;
  inline void set_constantdata(::google::protobuf::int64 value);

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

  // @@protoc_insertion_point(class_scope:proto_ff.gm5Helpcons)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_constantdata();
  inline void clear_has_constantdata();
  inline void set_has_stringdata();
  inline void clear_has_stringdata();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 constantdata_;
  ::std::string* stringdata_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_gm5Help_2eproto();
  friend void protobuf_AssignDesc_gm5Help_2eproto();
  friend void protobuf_ShutdownFile_gm5Help_2eproto();

  void InitAsDefaultInstance();
  static gm5Helpcons* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_gm5Helpcons : public ::google::protobuf::Message {
 public:
  Sheet_gm5Helpcons();
  virtual ~Sheet_gm5Helpcons();

  Sheet_gm5Helpcons(const Sheet_gm5Helpcons& from);

  inline Sheet_gm5Helpcons& operator=(const Sheet_gm5Helpcons& from) {
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
  static const Sheet_gm5Helpcons& default_instance();

  void Swap(Sheet_gm5Helpcons* other);

  // implements Message ----------------------------------------------

  Sheet_gm5Helpcons* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_gm5Helpcons& from);
  void MergeFrom(const Sheet_gm5Helpcons& from);
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

  // repeated .proto_ff.gm5Helpcons gm5Helpcons_List = 1;
  inline int gm5helpcons_list_size() const;
  inline void clear_gm5helpcons_list();
  static const int kGm5HelpconsListFieldNumber = 1;
  inline const ::proto_ff::gm5Helpcons& gm5helpcons_list(int index) const;
  inline ::proto_ff::gm5Helpcons* mutable_gm5helpcons_list(int index);
  inline ::proto_ff::gm5Helpcons* add_gm5helpcons_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpcons >&
      gm5helpcons_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpcons >*
      mutable_gm5helpcons_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_gm5Helpcons)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpcons > gm5helpcons_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gm5Help_2eproto();
  friend void protobuf_AssignDesc_gm5Help_2eproto();
  friend void protobuf_ShutdownFile_gm5Help_2eproto();

  void InitAsDefaultInstance();
  static Sheet_gm5Helpcons* default_instance_;
};
// -------------------------------------------------------------------

class gm5HelprewardrewardDesc : public ::google::protobuf::Message {
 public:
  gm5HelprewardrewardDesc();
  virtual ~gm5HelprewardrewardDesc();

  gm5HelprewardrewardDesc(const gm5HelprewardrewardDesc& from);

  inline gm5HelprewardrewardDesc& operator=(const gm5HelprewardrewardDesc& from) {
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
  static const gm5HelprewardrewardDesc& default_instance();

  void Swap(gm5HelprewardrewardDesc* other);

  // implements Message ----------------------------------------------

  gm5HelprewardrewardDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gm5HelprewardrewardDesc& from);
  void MergeFrom(const gm5HelprewardrewardDesc& from);
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

  // optional int64 ItemId = 1;
  inline bool has_itemid() const;
  inline void clear_itemid();
  static const int kItemIdFieldNumber = 1;
  inline ::google::protobuf::int64 itemid() const;
  inline void set_itemid(::google::protobuf::int64 value);

  // optional int32 num = 2;
  inline bool has_num() const;
  inline void clear_num();
  static const int kNumFieldNumber = 2;
  inline ::google::protobuf::int32 num() const;
  inline void set_num(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.gm5HelprewardrewardDesc)
 private:
  inline void set_has_itemid();
  inline void clear_has_itemid();
  inline void set_has_num();
  inline void clear_has_num();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 itemid_;
  ::google::protobuf::int32 num_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_gm5Help_2eproto();
  friend void protobuf_AssignDesc_gm5Help_2eproto();
  friend void protobuf_ShutdownFile_gm5Help_2eproto();

  void InitAsDefaultInstance();
  static gm5HelprewardrewardDesc* default_instance_;
};
// -------------------------------------------------------------------

class gm5Helpreward : public ::google::protobuf::Message {
 public:
  gm5Helpreward();
  virtual ~gm5Helpreward();

  gm5Helpreward(const gm5Helpreward& from);

  inline gm5Helpreward& operator=(const gm5Helpreward& from) {
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
  static const gm5Helpreward& default_instance();

  void Swap(gm5Helpreward* other);

  // implements Message ----------------------------------------------

  gm5Helpreward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const gm5Helpreward& from);
  void MergeFrom(const gm5Helpreward& from);
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

  // optional int32 rewardType = 2;
  inline bool has_rewardtype() const;
  inline void clear_rewardtype();
  static const int kRewardTypeFieldNumber = 2;
  inline ::google::protobuf::int32 rewardtype() const;
  inline void set_rewardtype(::google::protobuf::int32 value);

  // optional int32 getNeed = 3;
  inline bool has_getneed() const;
  inline void clear_getneed();
  static const int kGetNeedFieldNumber = 3;
  inline ::google::protobuf::int32 getneed() const;
  inline void set_getneed(::google::protobuf::int32 value);

  // repeated .proto_ff.gm5HelprewardrewardDesc reward = 4;
  inline int reward_size() const;
  inline void clear_reward();
  static const int kRewardFieldNumber = 4;
  inline const ::proto_ff::gm5HelprewardrewardDesc& reward(int index) const;
  inline ::proto_ff::gm5HelprewardrewardDesc* mutable_reward(int index);
  inline ::proto_ff::gm5HelprewardrewardDesc* add_reward();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5HelprewardrewardDesc >&
      reward() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5HelprewardrewardDesc >*
      mutable_reward();

  // @@protoc_insertion_point(class_scope:proto_ff.gm5Helpreward)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_rewardtype();
  inline void clear_has_rewardtype();
  inline void set_has_getneed();
  inline void clear_has_getneed();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 rewardtype_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5HelprewardrewardDesc > reward_;
  ::google::protobuf::int32 getneed_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_gm5Help_2eproto();
  friend void protobuf_AssignDesc_gm5Help_2eproto();
  friend void protobuf_ShutdownFile_gm5Help_2eproto();

  void InitAsDefaultInstance();
  static gm5Helpreward* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_gm5Helpreward : public ::google::protobuf::Message {
 public:
  Sheet_gm5Helpreward();
  virtual ~Sheet_gm5Helpreward();

  Sheet_gm5Helpreward(const Sheet_gm5Helpreward& from);

  inline Sheet_gm5Helpreward& operator=(const Sheet_gm5Helpreward& from) {
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
  static const Sheet_gm5Helpreward& default_instance();

  void Swap(Sheet_gm5Helpreward* other);

  // implements Message ----------------------------------------------

  Sheet_gm5Helpreward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_gm5Helpreward& from);
  void MergeFrom(const Sheet_gm5Helpreward& from);
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

  // repeated .proto_ff.gm5Helpreward gm5Helpreward_List = 1;
  inline int gm5helpreward_list_size() const;
  inline void clear_gm5helpreward_list();
  static const int kGm5HelprewardListFieldNumber = 1;
  inline const ::proto_ff::gm5Helpreward& gm5helpreward_list(int index) const;
  inline ::proto_ff::gm5Helpreward* mutable_gm5helpreward_list(int index);
  inline ::proto_ff::gm5Helpreward* add_gm5helpreward_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpreward >&
      gm5helpreward_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpreward >*
      mutable_gm5helpreward_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_gm5Helpreward)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpreward > gm5helpreward_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gm5Help_2eproto();
  friend void protobuf_AssignDesc_gm5Help_2eproto();
  friend void protobuf_ShutdownFile_gm5Help_2eproto();

  void InitAsDefaultInstance();
  static Sheet_gm5Helpreward* default_instance_;
};
// ===================================================================


// ===================================================================

// gm5Helpcons

// optional int32 id = 1;
inline bool gm5Helpcons::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gm5Helpcons::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gm5Helpcons::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gm5Helpcons::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 gm5Helpcons::id() const {
  return id_;
}
inline void gm5Helpcons::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int64 constantdata = 2;
inline bool gm5Helpcons::has_constantdata() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gm5Helpcons::set_has_constantdata() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gm5Helpcons::clear_has_constantdata() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gm5Helpcons::clear_constantdata() {
  constantdata_ = GOOGLE_LONGLONG(0);
  clear_has_constantdata();
}
inline ::google::protobuf::int64 gm5Helpcons::constantdata() const {
  return constantdata_;
}
inline void gm5Helpcons::set_constantdata(::google::protobuf::int64 value) {
  set_has_constantdata();
  constantdata_ = value;
}

// optional string stringdata = 3;
inline bool gm5Helpcons::has_stringdata() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void gm5Helpcons::set_has_stringdata() {
  _has_bits_[0] |= 0x00000004u;
}
inline void gm5Helpcons::clear_has_stringdata() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void gm5Helpcons::clear_stringdata() {
  if (stringdata_ != &::google::protobuf::internal::kEmptyString) {
    stringdata_->clear();
  }
  clear_has_stringdata();
}
inline const ::std::string& gm5Helpcons::stringdata() const {
  return *stringdata_;
}
inline void gm5Helpcons::set_stringdata(const ::std::string& value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void gm5Helpcons::set_stringdata(const char* value) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(value);
}
inline void gm5Helpcons::set_stringdata(const char* value, size_t size) {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  stringdata_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* gm5Helpcons::mutable_stringdata() {
  set_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    stringdata_ = new ::std::string;
  }
  return stringdata_;
}
inline ::std::string* gm5Helpcons::release_stringdata() {
  clear_has_stringdata();
  if (stringdata_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = stringdata_;
    stringdata_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void gm5Helpcons::set_allocated_stringdata(::std::string* stringdata) {
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

// Sheet_gm5Helpcons

// repeated .proto_ff.gm5Helpcons gm5Helpcons_List = 1;
inline int Sheet_gm5Helpcons::gm5helpcons_list_size() const {
  return gm5helpcons_list_.size();
}
inline void Sheet_gm5Helpcons::clear_gm5helpcons_list() {
  gm5helpcons_list_.Clear();
}
inline const ::proto_ff::gm5Helpcons& Sheet_gm5Helpcons::gm5helpcons_list(int index) const {
  return gm5helpcons_list_.Get(index);
}
inline ::proto_ff::gm5Helpcons* Sheet_gm5Helpcons::mutable_gm5helpcons_list(int index) {
  return gm5helpcons_list_.Mutable(index);
}
inline ::proto_ff::gm5Helpcons* Sheet_gm5Helpcons::add_gm5helpcons_list() {
  return gm5helpcons_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpcons >&
Sheet_gm5Helpcons::gm5helpcons_list() const {
  return gm5helpcons_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpcons >*
Sheet_gm5Helpcons::mutable_gm5helpcons_list() {
  return &gm5helpcons_list_;
}

// -------------------------------------------------------------------

// gm5HelprewardrewardDesc

// optional int64 ItemId = 1;
inline bool gm5HelprewardrewardDesc::has_itemid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gm5HelprewardrewardDesc::set_has_itemid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gm5HelprewardrewardDesc::clear_has_itemid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gm5HelprewardrewardDesc::clear_itemid() {
  itemid_ = GOOGLE_LONGLONG(0);
  clear_has_itemid();
}
inline ::google::protobuf::int64 gm5HelprewardrewardDesc::itemid() const {
  return itemid_;
}
inline void gm5HelprewardrewardDesc::set_itemid(::google::protobuf::int64 value) {
  set_has_itemid();
  itemid_ = value;
}

// optional int32 num = 2;
inline bool gm5HelprewardrewardDesc::has_num() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gm5HelprewardrewardDesc::set_has_num() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gm5HelprewardrewardDesc::clear_has_num() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gm5HelprewardrewardDesc::clear_num() {
  num_ = 0;
  clear_has_num();
}
inline ::google::protobuf::int32 gm5HelprewardrewardDesc::num() const {
  return num_;
}
inline void gm5HelprewardrewardDesc::set_num(::google::protobuf::int32 value) {
  set_has_num();
  num_ = value;
}

// -------------------------------------------------------------------

// gm5Helpreward

// optional int32 id = 1;
inline bool gm5Helpreward::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void gm5Helpreward::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void gm5Helpreward::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void gm5Helpreward::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 gm5Helpreward::id() const {
  return id_;
}
inline void gm5Helpreward::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 rewardType = 2;
inline bool gm5Helpreward::has_rewardtype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void gm5Helpreward::set_has_rewardtype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void gm5Helpreward::clear_has_rewardtype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void gm5Helpreward::clear_rewardtype() {
  rewardtype_ = 0;
  clear_has_rewardtype();
}
inline ::google::protobuf::int32 gm5Helpreward::rewardtype() const {
  return rewardtype_;
}
inline void gm5Helpreward::set_rewardtype(::google::protobuf::int32 value) {
  set_has_rewardtype();
  rewardtype_ = value;
}

// optional int32 getNeed = 3;
inline bool gm5Helpreward::has_getneed() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void gm5Helpreward::set_has_getneed() {
  _has_bits_[0] |= 0x00000004u;
}
inline void gm5Helpreward::clear_has_getneed() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void gm5Helpreward::clear_getneed() {
  getneed_ = 0;
  clear_has_getneed();
}
inline ::google::protobuf::int32 gm5Helpreward::getneed() const {
  return getneed_;
}
inline void gm5Helpreward::set_getneed(::google::protobuf::int32 value) {
  set_has_getneed();
  getneed_ = value;
}

// repeated .proto_ff.gm5HelprewardrewardDesc reward = 4;
inline int gm5Helpreward::reward_size() const {
  return reward_.size();
}
inline void gm5Helpreward::clear_reward() {
  reward_.Clear();
}
inline const ::proto_ff::gm5HelprewardrewardDesc& gm5Helpreward::reward(int index) const {
  return reward_.Get(index);
}
inline ::proto_ff::gm5HelprewardrewardDesc* gm5Helpreward::mutable_reward(int index) {
  return reward_.Mutable(index);
}
inline ::proto_ff::gm5HelprewardrewardDesc* gm5Helpreward::add_reward() {
  return reward_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5HelprewardrewardDesc >&
gm5Helpreward::reward() const {
  return reward_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5HelprewardrewardDesc >*
gm5Helpreward::mutable_reward() {
  return &reward_;
}

// -------------------------------------------------------------------

// Sheet_gm5Helpreward

// repeated .proto_ff.gm5Helpreward gm5Helpreward_List = 1;
inline int Sheet_gm5Helpreward::gm5helpreward_list_size() const {
  return gm5helpreward_list_.size();
}
inline void Sheet_gm5Helpreward::clear_gm5helpreward_list() {
  gm5helpreward_list_.Clear();
}
inline const ::proto_ff::gm5Helpreward& Sheet_gm5Helpreward::gm5helpreward_list(int index) const {
  return gm5helpreward_list_.Get(index);
}
inline ::proto_ff::gm5Helpreward* Sheet_gm5Helpreward::mutable_gm5helpreward_list(int index) {
  return gm5helpreward_list_.Mutable(index);
}
inline ::proto_ff::gm5Helpreward* Sheet_gm5Helpreward::add_gm5helpreward_list() {
  return gm5helpreward_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpreward >&
Sheet_gm5Helpreward::gm5helpreward_list() const {
  return gm5helpreward_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::gm5Helpreward >*
Sheet_gm5Helpreward::mutable_gm5helpreward_list() {
  return &gm5helpreward_list_;
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

#endif  // PROTOBUF_gm5Help_2eproto__INCLUDED
