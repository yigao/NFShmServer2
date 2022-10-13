// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: treasureBowl.proto

#ifndef PROTOBUF_treasureBowl_2eproto__INCLUDED
#define PROTOBUF_treasureBowl_2eproto__INCLUDED

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
void  protobuf_AddDesc_treasureBowl_2eproto();
void protobuf_AssignDesc_treasureBowl_2eproto();
void protobuf_ShutdownFile_treasureBowl_2eproto();

class treasureBowltreasureBowl;
class Sheet_treasureBowltreasureBowl;

// ===================================================================

class treasureBowltreasureBowl : public ::google::protobuf::Message {
 public:
  treasureBowltreasureBowl();
  virtual ~treasureBowltreasureBowl();

  treasureBowltreasureBowl(const treasureBowltreasureBowl& from);

  inline treasureBowltreasureBowl& operator=(const treasureBowltreasureBowl& from) {
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
  static const treasureBowltreasureBowl& default_instance();

  void Swap(treasureBowltreasureBowl* other);

  // implements Message ----------------------------------------------

  treasureBowltreasureBowl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const treasureBowltreasureBowl& from);
  void MergeFrom(const treasureBowltreasureBowl& from);
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

  // optional int32 Id = 1;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 1;
  inline ::google::protobuf::int32 id() const;
  inline void set_id(::google::protobuf::int32 value);

  // optional int32 level = 2;
  inline bool has_level() const;
  inline void clear_level();
  static const int kLevelFieldNumber = 2;
  inline ::google::protobuf::int32 level() const;
  inline void set_level(::google::protobuf::int32 value);

  // optional int32 Type = 3;
  inline bool has_type() const;
  inline void clear_type();
  static const int kTypeFieldNumber = 3;
  inline ::google::protobuf::int32 type() const;
  inline void set_type(::google::protobuf::int32 value);

  // optional int32 price = 4;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 4;
  inline ::google::protobuf::int32 price() const;
  inline void set_price(::google::protobuf::int32 value);

  // optional int32 returnD = 5;
  inline bool has_returnd() const;
  inline void clear_returnd();
  static const int kReturnDFieldNumber = 5;
  inline ::google::protobuf::int32 returnd() const;
  inline void set_returnd(::google::protobuf::int32 value);

  // optional int32 returnVip = 6;
  inline bool has_returnvip() const;
  inline void clear_returnvip();
  static const int kReturnVipFieldNumber = 6;
  inline ::google::protobuf::int32 returnvip() const;
  inline void set_returnvip(::google::protobuf::int32 value);

  // optional int64 returnItemID = 7;
  inline bool has_returnitemid() const;
  inline void clear_returnitemid();
  static const int kReturnItemIDFieldNumber = 7;
  inline ::google::protobuf::int64 returnitemid() const;
  inline void set_returnitemid(::google::protobuf::int64 value);

  // optional int32 returnItem = 8;
  inline bool has_returnitem() const;
  inline void clear_returnitem();
  static const int kReturnItemFieldNumber = 8;
  inline ::google::protobuf::int32 returnitem() const;
  inline void set_returnitem(::google::protobuf::int32 value);

  // optional int64 boxid = 9;
  inline bool has_boxid() const;
  inline void clear_boxid();
  static const int kBoxidFieldNumber = 9;
  inline ::google::protobuf::int64 boxid() const;
  inline void set_boxid(::google::protobuf::int64 value);

  // optional int64 skillid = 10;
  inline bool has_skillid() const;
  inline void clear_skillid();
  static const int kSkillidFieldNumber = 10;
  inline ::google::protobuf::int64 skillid() const;
  inline void set_skillid(::google::protobuf::int64 value);

  // optional string skilldes = 11;
  inline bool has_skilldes() const;
  inline void clear_skilldes();
  static const int kSkilldesFieldNumber = 11;
  inline const ::std::string& skilldes() const;
  inline void set_skilldes(const ::std::string& value);
  inline void set_skilldes(const char* value);
  inline void set_skilldes(const char* value, size_t size);
  inline ::std::string* mutable_skilldes();
  inline ::std::string* release_skilldes();
  inline void set_allocated_skilldes(::std::string* skilldes);

  // @@protoc_insertion_point(class_scope:proto_ff.treasureBowltreasureBowl)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_level();
  inline void clear_has_level();
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_price();
  inline void clear_has_price();
  inline void set_has_returnd();
  inline void clear_has_returnd();
  inline void set_has_returnvip();
  inline void clear_has_returnvip();
  inline void set_has_returnitemid();
  inline void clear_has_returnitemid();
  inline void set_has_returnitem();
  inline void clear_has_returnitem();
  inline void set_has_boxid();
  inline void clear_has_boxid();
  inline void set_has_skillid();
  inline void clear_has_skillid();
  inline void set_has_skilldes();
  inline void clear_has_skilldes();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 id_;
  ::google::protobuf::int32 level_;
  ::google::protobuf::int32 type_;
  ::google::protobuf::int32 price_;
  ::google::protobuf::int32 returnd_;
  ::google::protobuf::int32 returnvip_;
  ::google::protobuf::int64 returnitemid_;
  ::google::protobuf::int64 boxid_;
  ::google::protobuf::int64 skillid_;
  ::std::string* skilldes_;
  ::google::protobuf::int32 returnitem_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(11 + 31) / 32];

  friend void  protobuf_AddDesc_treasureBowl_2eproto();
  friend void protobuf_AssignDesc_treasureBowl_2eproto();
  friend void protobuf_ShutdownFile_treasureBowl_2eproto();

  void InitAsDefaultInstance();
  static treasureBowltreasureBowl* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_treasureBowltreasureBowl : public ::google::protobuf::Message {
 public:
  Sheet_treasureBowltreasureBowl();
  virtual ~Sheet_treasureBowltreasureBowl();

  Sheet_treasureBowltreasureBowl(const Sheet_treasureBowltreasureBowl& from);

  inline Sheet_treasureBowltreasureBowl& operator=(const Sheet_treasureBowltreasureBowl& from) {
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
  static const Sheet_treasureBowltreasureBowl& default_instance();

  void Swap(Sheet_treasureBowltreasureBowl* other);

  // implements Message ----------------------------------------------

  Sheet_treasureBowltreasureBowl* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_treasureBowltreasureBowl& from);
  void MergeFrom(const Sheet_treasureBowltreasureBowl& from);
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

  // repeated .proto_ff.treasureBowltreasureBowl treasureBowltreasureBowl_List = 1;
  inline int treasurebowltreasurebowl_list_size() const;
  inline void clear_treasurebowltreasurebowl_list();
  static const int kTreasureBowltreasureBowlListFieldNumber = 1;
  inline const ::proto_ff::treasureBowltreasureBowl& treasurebowltreasurebowl_list(int index) const;
  inline ::proto_ff::treasureBowltreasureBowl* mutable_treasurebowltreasurebowl_list(int index);
  inline ::proto_ff::treasureBowltreasureBowl* add_treasurebowltreasurebowl_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::treasureBowltreasureBowl >&
      treasurebowltreasurebowl_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::treasureBowltreasureBowl >*
      mutable_treasurebowltreasurebowl_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_treasureBowltreasureBowl)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::treasureBowltreasureBowl > treasurebowltreasurebowl_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_treasureBowl_2eproto();
  friend void protobuf_AssignDesc_treasureBowl_2eproto();
  friend void protobuf_ShutdownFile_treasureBowl_2eproto();

  void InitAsDefaultInstance();
  static Sheet_treasureBowltreasureBowl* default_instance_;
};
// ===================================================================


// ===================================================================

// treasureBowltreasureBowl

// optional int32 Id = 1;
inline bool treasureBowltreasureBowl::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void treasureBowltreasureBowl::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void treasureBowltreasureBowl::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void treasureBowltreasureBowl::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::id() const {
  return id_;
}
inline void treasureBowltreasureBowl::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional int32 level = 2;
inline bool treasureBowltreasureBowl::has_level() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void treasureBowltreasureBowl::set_has_level() {
  _has_bits_[0] |= 0x00000002u;
}
inline void treasureBowltreasureBowl::clear_has_level() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void treasureBowltreasureBowl::clear_level() {
  level_ = 0;
  clear_has_level();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::level() const {
  return level_;
}
inline void treasureBowltreasureBowl::set_level(::google::protobuf::int32 value) {
  set_has_level();
  level_ = value;
}

// optional int32 Type = 3;
inline bool treasureBowltreasureBowl::has_type() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void treasureBowltreasureBowl::set_has_type() {
  _has_bits_[0] |= 0x00000004u;
}
inline void treasureBowltreasureBowl::clear_has_type() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void treasureBowltreasureBowl::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::type() const {
  return type_;
}
inline void treasureBowltreasureBowl::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
}

// optional int32 price = 4;
inline bool treasureBowltreasureBowl::has_price() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void treasureBowltreasureBowl::set_has_price() {
  _has_bits_[0] |= 0x00000008u;
}
inline void treasureBowltreasureBowl::clear_has_price() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void treasureBowltreasureBowl::clear_price() {
  price_ = 0;
  clear_has_price();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::price() const {
  return price_;
}
inline void treasureBowltreasureBowl::set_price(::google::protobuf::int32 value) {
  set_has_price();
  price_ = value;
}

// optional int32 returnD = 5;
inline bool treasureBowltreasureBowl::has_returnd() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void treasureBowltreasureBowl::set_has_returnd() {
  _has_bits_[0] |= 0x00000010u;
}
inline void treasureBowltreasureBowl::clear_has_returnd() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void treasureBowltreasureBowl::clear_returnd() {
  returnd_ = 0;
  clear_has_returnd();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::returnd() const {
  return returnd_;
}
inline void treasureBowltreasureBowl::set_returnd(::google::protobuf::int32 value) {
  set_has_returnd();
  returnd_ = value;
}

// optional int32 returnVip = 6;
inline bool treasureBowltreasureBowl::has_returnvip() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void treasureBowltreasureBowl::set_has_returnvip() {
  _has_bits_[0] |= 0x00000020u;
}
inline void treasureBowltreasureBowl::clear_has_returnvip() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void treasureBowltreasureBowl::clear_returnvip() {
  returnvip_ = 0;
  clear_has_returnvip();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::returnvip() const {
  return returnvip_;
}
inline void treasureBowltreasureBowl::set_returnvip(::google::protobuf::int32 value) {
  set_has_returnvip();
  returnvip_ = value;
}

// optional int64 returnItemID = 7;
inline bool treasureBowltreasureBowl::has_returnitemid() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void treasureBowltreasureBowl::set_has_returnitemid() {
  _has_bits_[0] |= 0x00000040u;
}
inline void treasureBowltreasureBowl::clear_has_returnitemid() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void treasureBowltreasureBowl::clear_returnitemid() {
  returnitemid_ = GOOGLE_LONGLONG(0);
  clear_has_returnitemid();
}
inline ::google::protobuf::int64 treasureBowltreasureBowl::returnitemid() const {
  return returnitemid_;
}
inline void treasureBowltreasureBowl::set_returnitemid(::google::protobuf::int64 value) {
  set_has_returnitemid();
  returnitemid_ = value;
}

// optional int32 returnItem = 8;
inline bool treasureBowltreasureBowl::has_returnitem() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void treasureBowltreasureBowl::set_has_returnitem() {
  _has_bits_[0] |= 0x00000080u;
}
inline void treasureBowltreasureBowl::clear_has_returnitem() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void treasureBowltreasureBowl::clear_returnitem() {
  returnitem_ = 0;
  clear_has_returnitem();
}
inline ::google::protobuf::int32 treasureBowltreasureBowl::returnitem() const {
  return returnitem_;
}
inline void treasureBowltreasureBowl::set_returnitem(::google::protobuf::int32 value) {
  set_has_returnitem();
  returnitem_ = value;
}

// optional int64 boxid = 9;
inline bool treasureBowltreasureBowl::has_boxid() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void treasureBowltreasureBowl::set_has_boxid() {
  _has_bits_[0] |= 0x00000100u;
}
inline void treasureBowltreasureBowl::clear_has_boxid() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void treasureBowltreasureBowl::clear_boxid() {
  boxid_ = GOOGLE_LONGLONG(0);
  clear_has_boxid();
}
inline ::google::protobuf::int64 treasureBowltreasureBowl::boxid() const {
  return boxid_;
}
inline void treasureBowltreasureBowl::set_boxid(::google::protobuf::int64 value) {
  set_has_boxid();
  boxid_ = value;
}

// optional int64 skillid = 10;
inline bool treasureBowltreasureBowl::has_skillid() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void treasureBowltreasureBowl::set_has_skillid() {
  _has_bits_[0] |= 0x00000200u;
}
inline void treasureBowltreasureBowl::clear_has_skillid() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void treasureBowltreasureBowl::clear_skillid() {
  skillid_ = GOOGLE_LONGLONG(0);
  clear_has_skillid();
}
inline ::google::protobuf::int64 treasureBowltreasureBowl::skillid() const {
  return skillid_;
}
inline void treasureBowltreasureBowl::set_skillid(::google::protobuf::int64 value) {
  set_has_skillid();
  skillid_ = value;
}

// optional string skilldes = 11;
inline bool treasureBowltreasureBowl::has_skilldes() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void treasureBowltreasureBowl::set_has_skilldes() {
  _has_bits_[0] |= 0x00000400u;
}
inline void treasureBowltreasureBowl::clear_has_skilldes() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void treasureBowltreasureBowl::clear_skilldes() {
  if (skilldes_ != &::google::protobuf::internal::kEmptyString) {
    skilldes_->clear();
  }
  clear_has_skilldes();
}
inline const ::std::string& treasureBowltreasureBowl::skilldes() const {
  return *skilldes_;
}
inline void treasureBowltreasureBowl::set_skilldes(const ::std::string& value) {
  set_has_skilldes();
  if (skilldes_ == &::google::protobuf::internal::kEmptyString) {
    skilldes_ = new ::std::string;
  }
  skilldes_->assign(value);
}
inline void treasureBowltreasureBowl::set_skilldes(const char* value) {
  set_has_skilldes();
  if (skilldes_ == &::google::protobuf::internal::kEmptyString) {
    skilldes_ = new ::std::string;
  }
  skilldes_->assign(value);
}
inline void treasureBowltreasureBowl::set_skilldes(const char* value, size_t size) {
  set_has_skilldes();
  if (skilldes_ == &::google::protobuf::internal::kEmptyString) {
    skilldes_ = new ::std::string;
  }
  skilldes_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* treasureBowltreasureBowl::mutable_skilldes() {
  set_has_skilldes();
  if (skilldes_ == &::google::protobuf::internal::kEmptyString) {
    skilldes_ = new ::std::string;
  }
  return skilldes_;
}
inline ::std::string* treasureBowltreasureBowl::release_skilldes() {
  clear_has_skilldes();
  if (skilldes_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = skilldes_;
    skilldes_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void treasureBowltreasureBowl::set_allocated_skilldes(::std::string* skilldes) {
  if (skilldes_ != &::google::protobuf::internal::kEmptyString) {
    delete skilldes_;
  }
  if (skilldes) {
    set_has_skilldes();
    skilldes_ = skilldes;
  } else {
    clear_has_skilldes();
    skilldes_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Sheet_treasureBowltreasureBowl

// repeated .proto_ff.treasureBowltreasureBowl treasureBowltreasureBowl_List = 1;
inline int Sheet_treasureBowltreasureBowl::treasurebowltreasurebowl_list_size() const {
  return treasurebowltreasurebowl_list_.size();
}
inline void Sheet_treasureBowltreasureBowl::clear_treasurebowltreasurebowl_list() {
  treasurebowltreasurebowl_list_.Clear();
}
inline const ::proto_ff::treasureBowltreasureBowl& Sheet_treasureBowltreasureBowl::treasurebowltreasurebowl_list(int index) const {
  return treasurebowltreasurebowl_list_.Get(index);
}
inline ::proto_ff::treasureBowltreasureBowl* Sheet_treasureBowltreasureBowl::mutable_treasurebowltreasurebowl_list(int index) {
  return treasurebowltreasurebowl_list_.Mutable(index);
}
inline ::proto_ff::treasureBowltreasureBowl* Sheet_treasureBowltreasureBowl::add_treasurebowltreasurebowl_list() {
  return treasurebowltreasurebowl_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::treasureBowltreasureBowl >&
Sheet_treasureBowltreasureBowl::treasurebowltreasurebowl_list() const {
  return treasurebowltreasurebowl_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::treasureBowltreasureBowl >*
Sheet_treasureBowltreasureBowl::mutable_treasurebowltreasurebowl_list() {
  return &treasurebowltreasurebowl_list_;
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

#endif  // PROTOBUF_treasureBowl_2eproto__INCLUDED