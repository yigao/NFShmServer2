// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: perActivity.proto

#ifndef PROTOBUF_perActivity_2eproto__INCLUDED
#define PROTOBUF_perActivity_2eproto__INCLUDED

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
void  protobuf_AddDesc_perActivity_2eproto();
void protobuf_AssignDesc_perActivity_2eproto();
void protobuf_ShutdownFile_perActivity_2eproto();

class perActivityperActivity;
class Sheet_perActivityperActivity;
class perActivityweek;
class Sheet_perActivityweek;

// ===================================================================

class perActivityperActivity : public ::google::protobuf::Message {
 public:
  perActivityperActivity();
  virtual ~perActivityperActivity();

  perActivityperActivity(const perActivityperActivity& from);

  inline perActivityperActivity& operator=(const perActivityperActivity& from) {
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
  static const perActivityperActivity& default_instance();

  void Swap(perActivityperActivity* other);

  // implements Message ----------------------------------------------

  perActivityperActivity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const perActivityperActivity& from);
  void MergeFrom(const perActivityperActivity& from);
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

  // optional int64 activeId = 1;
  inline bool has_activeid() const;
  inline void clear_activeid();
  static const int kActiveIdFieldNumber = 1;
  inline ::google::protobuf::int64 activeid() const;
  inline void set_activeid(::google::protobuf::int64 value);

  // optional string activeName = 2;
  inline bool has_activename() const;
  inline void clear_activename();
  static const int kActiveNameFieldNumber = 2;
  inline const ::std::string& activename() const;
  inline void set_activename(const ::std::string& value);
  inline void set_activename(const char* value);
  inline void set_activename(const char* value, size_t size);
  inline ::std::string* mutable_activename();
  inline ::std::string* release_activename();
  inline void set_allocated_activename(::std::string* activename);

  // optional int32 typeId = 3;
  inline bool has_typeid_() const;
  inline void clear_typeid_();
  static const int kTypeIdFieldNumber = 3;
  inline ::google::protobuf::int32 typeid_() const;
  inline void set_typeid_(::google::protobuf::int32 value);

  // optional int32 functionID = 4;
  inline bool has_functionid() const;
  inline void clear_functionid();
  static const int kFunctionIDFieldNumber = 4;
  inline ::google::protobuf::int32 functionid() const;
  inline void set_functionid(::google::protobuf::int32 value);

  // optional string opeDay = 5;
  inline bool has_opeday() const;
  inline void clear_opeday();
  static const int kOpeDayFieldNumber = 5;
  inline const ::std::string& opeday() const;
  inline void set_opeday(const ::std::string& value);
  inline void set_opeday(const char* value);
  inline void set_opeday(const char* value, size_t size);
  inline ::std::string* mutable_opeday();
  inline ::std::string* release_opeday();
  inline void set_allocated_opeday(::std::string* opeday);

  // optional string closeDay = 6;
  inline bool has_closeday() const;
  inline void clear_closeday();
  static const int kCloseDayFieldNumber = 6;
  inline const ::std::string& closeday() const;
  inline void set_closeday(const ::std::string& value);
  inline void set_closeday(const char* value);
  inline void set_closeday(const char* value, size_t size);
  inline ::std::string* mutable_closeday();
  inline ::std::string* release_closeday();
  inline void set_allocated_closeday(::std::string* closeday);

  // optional int32 serverdelayTime = 7;
  inline bool has_serverdelaytime() const;
  inline void clear_serverdelaytime();
  static const int kServerdelayTimeFieldNumber = 7;
  inline ::google::protobuf::int32 serverdelaytime() const;
  inline void set_serverdelaytime(::google::protobuf::int32 value);

  // optional int32 serverTime = 8;
  inline bool has_servertime() const;
  inline void clear_servertime();
  static const int kServerTimeFieldNumber = 8;
  inline ::google::protobuf::int32 servertime() const;
  inline void set_servertime(::google::protobuf::int32 value);

  // optional int32 openingTime = 9;
  inline bool has_openingtime() const;
  inline void clear_openingtime();
  static const int kOpeningTimeFieldNumber = 9;
  inline ::google::protobuf::int32 openingtime() const;
  inline void set_openingtime(::google::protobuf::int32 value);

  // optional int32 advanceTime = 10;
  inline bool has_advancetime() const;
  inline void clear_advancetime();
  static const int kAdvanceTimeFieldNumber = 10;
  inline ::google::protobuf::int32 advancetime() const;
  inline void set_advancetime(::google::protobuf::int32 value);

  // optional int32 intervalTime = 11;
  inline bool has_intervaltime() const;
  inline void clear_intervaltime();
  static const int kIntervalTimeFieldNumber = 11;
  inline ::google::protobuf::int32 intervaltime() const;
  inline void set_intervaltime(::google::protobuf::int32 value);

  // optional int32 isCross = 12;
  inline bool has_iscross() const;
  inline void clear_iscross();
  static const int kIsCrossFieldNumber = 12;
  inline ::google::protobuf::int32 iscross() const;
  inline void set_iscross(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.perActivityperActivity)
 private:
  inline void set_has_activeid();
  inline void clear_has_activeid();
  inline void set_has_activename();
  inline void clear_has_activename();
  inline void set_has_typeid_();
  inline void clear_has_typeid_();
  inline void set_has_functionid();
  inline void clear_has_functionid();
  inline void set_has_opeday();
  inline void clear_has_opeday();
  inline void set_has_closeday();
  inline void clear_has_closeday();
  inline void set_has_serverdelaytime();
  inline void clear_has_serverdelaytime();
  inline void set_has_servertime();
  inline void clear_has_servertime();
  inline void set_has_openingtime();
  inline void clear_has_openingtime();
  inline void set_has_advancetime();
  inline void clear_has_advancetime();
  inline void set_has_intervaltime();
  inline void clear_has_intervaltime();
  inline void set_has_iscross();
  inline void clear_has_iscross();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 activeid_;
  ::std::string* activename_;
  ::google::protobuf::int32 typeid__;
  ::google::protobuf::int32 functionid_;
  ::std::string* opeday_;
  ::std::string* closeday_;
  ::google::protobuf::int32 serverdelaytime_;
  ::google::protobuf::int32 servertime_;
  ::google::protobuf::int32 openingtime_;
  ::google::protobuf::int32 advancetime_;
  ::google::protobuf::int32 intervaltime_;
  ::google::protobuf::int32 iscross_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(12 + 31) / 32];

  friend void  protobuf_AddDesc_perActivity_2eproto();
  friend void protobuf_AssignDesc_perActivity_2eproto();
  friend void protobuf_ShutdownFile_perActivity_2eproto();

  void InitAsDefaultInstance();
  static perActivityperActivity* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_perActivityperActivity : public ::google::protobuf::Message {
 public:
  Sheet_perActivityperActivity();
  virtual ~Sheet_perActivityperActivity();

  Sheet_perActivityperActivity(const Sheet_perActivityperActivity& from);

  inline Sheet_perActivityperActivity& operator=(const Sheet_perActivityperActivity& from) {
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
  static const Sheet_perActivityperActivity& default_instance();

  void Swap(Sheet_perActivityperActivity* other);

  // implements Message ----------------------------------------------

  Sheet_perActivityperActivity* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_perActivityperActivity& from);
  void MergeFrom(const Sheet_perActivityperActivity& from);
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

  // repeated .proto_ff.perActivityperActivity perActivityperActivity_List = 1;
  inline int peractivityperactivity_list_size() const;
  inline void clear_peractivityperactivity_list();
  static const int kPerActivityperActivityListFieldNumber = 1;
  inline const ::proto_ff::perActivityperActivity& peractivityperactivity_list(int index) const;
  inline ::proto_ff::perActivityperActivity* mutable_peractivityperactivity_list(int index);
  inline ::proto_ff::perActivityperActivity* add_peractivityperactivity_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityperActivity >&
      peractivityperactivity_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityperActivity >*
      mutable_peractivityperactivity_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_perActivityperActivity)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityperActivity > peractivityperactivity_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_perActivity_2eproto();
  friend void protobuf_AssignDesc_perActivity_2eproto();
  friend void protobuf_ShutdownFile_perActivity_2eproto();

  void InitAsDefaultInstance();
  static Sheet_perActivityperActivity* default_instance_;
};
// -------------------------------------------------------------------

class perActivityweek : public ::google::protobuf::Message {
 public:
  perActivityweek();
  virtual ~perActivityweek();

  perActivityweek(const perActivityweek& from);

  inline perActivityweek& operator=(const perActivityweek& from) {
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
  static const perActivityweek& default_instance();

  void Swap(perActivityweek* other);

  // implements Message ----------------------------------------------

  perActivityweek* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const perActivityweek& from);
  void MergeFrom(const perActivityweek& from);
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

  // optional string time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline const ::std::string& time() const;
  inline void set_time(const ::std::string& value);
  inline void set_time(const char* value);
  inline void set_time(const char* value, size_t size);
  inline ::std::string* mutable_time();
  inline ::std::string* release_time();
  inline void set_allocated_time(::std::string* time);

  // repeated string week = 3;
  inline int week_size() const;
  inline void clear_week();
  static const int kWeekFieldNumber = 3;
  inline const ::std::string& week(int index) const;
  inline ::std::string* mutable_week(int index);
  inline void set_week(int index, const ::std::string& value);
  inline void set_week(int index, const char* value);
  inline void set_week(int index, const char* value, size_t size);
  inline ::std::string* add_week();
  inline void add_week(const ::std::string& value);
  inline void add_week(const char* value);
  inline void add_week(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& week() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_week();

  // @@protoc_insertion_point(class_scope:proto_ff.perActivityweek)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* time_;
  ::google::protobuf::RepeatedPtrField< ::std::string> week_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_perActivity_2eproto();
  friend void protobuf_AssignDesc_perActivity_2eproto();
  friend void protobuf_ShutdownFile_perActivity_2eproto();

  void InitAsDefaultInstance();
  static perActivityweek* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_perActivityweek : public ::google::protobuf::Message {
 public:
  Sheet_perActivityweek();
  virtual ~Sheet_perActivityweek();

  Sheet_perActivityweek(const Sheet_perActivityweek& from);

  inline Sheet_perActivityweek& operator=(const Sheet_perActivityweek& from) {
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
  static const Sheet_perActivityweek& default_instance();

  void Swap(Sheet_perActivityweek* other);

  // implements Message ----------------------------------------------

  Sheet_perActivityweek* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_perActivityweek& from);
  void MergeFrom(const Sheet_perActivityweek& from);
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

  // repeated .proto_ff.perActivityweek perActivityweek_List = 1;
  inline int peractivityweek_list_size() const;
  inline void clear_peractivityweek_list();
  static const int kPerActivityweekListFieldNumber = 1;
  inline const ::proto_ff::perActivityweek& peractivityweek_list(int index) const;
  inline ::proto_ff::perActivityweek* mutable_peractivityweek_list(int index);
  inline ::proto_ff::perActivityweek* add_peractivityweek_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityweek >&
      peractivityweek_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityweek >*
      mutable_peractivityweek_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_perActivityweek)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityweek > peractivityweek_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_perActivity_2eproto();
  friend void protobuf_AssignDesc_perActivity_2eproto();
  friend void protobuf_ShutdownFile_perActivity_2eproto();

  void InitAsDefaultInstance();
  static Sheet_perActivityweek* default_instance_;
};
// ===================================================================


// ===================================================================

// perActivityperActivity

// optional int64 activeId = 1;
inline bool perActivityperActivity::has_activeid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void perActivityperActivity::set_has_activeid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void perActivityperActivity::clear_has_activeid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void perActivityperActivity::clear_activeid() {
  activeid_ = GOOGLE_LONGLONG(0);
  clear_has_activeid();
}
inline ::google::protobuf::int64 perActivityperActivity::activeid() const {
  return activeid_;
}
inline void perActivityperActivity::set_activeid(::google::protobuf::int64 value) {
  set_has_activeid();
  activeid_ = value;
}

// optional string activeName = 2;
inline bool perActivityperActivity::has_activename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void perActivityperActivity::set_has_activename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void perActivityperActivity::clear_has_activename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void perActivityperActivity::clear_activename() {
  if (activename_ != &::google::protobuf::internal::kEmptyString) {
    activename_->clear();
  }
  clear_has_activename();
}
inline const ::std::string& perActivityperActivity::activename() const {
  return *activename_;
}
inline void perActivityperActivity::set_activename(const ::std::string& value) {
  set_has_activename();
  if (activename_ == &::google::protobuf::internal::kEmptyString) {
    activename_ = new ::std::string;
  }
  activename_->assign(value);
}
inline void perActivityperActivity::set_activename(const char* value) {
  set_has_activename();
  if (activename_ == &::google::protobuf::internal::kEmptyString) {
    activename_ = new ::std::string;
  }
  activename_->assign(value);
}
inline void perActivityperActivity::set_activename(const char* value, size_t size) {
  set_has_activename();
  if (activename_ == &::google::protobuf::internal::kEmptyString) {
    activename_ = new ::std::string;
  }
  activename_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* perActivityperActivity::mutable_activename() {
  set_has_activename();
  if (activename_ == &::google::protobuf::internal::kEmptyString) {
    activename_ = new ::std::string;
  }
  return activename_;
}
inline ::std::string* perActivityperActivity::release_activename() {
  clear_has_activename();
  if (activename_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = activename_;
    activename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void perActivityperActivity::set_allocated_activename(::std::string* activename) {
  if (activename_ != &::google::protobuf::internal::kEmptyString) {
    delete activename_;
  }
  if (activename) {
    set_has_activename();
    activename_ = activename;
  } else {
    clear_has_activename();
    activename_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 typeId = 3;
inline bool perActivityperActivity::has_typeid_() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void perActivityperActivity::set_has_typeid_() {
  _has_bits_[0] |= 0x00000004u;
}
inline void perActivityperActivity::clear_has_typeid_() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void perActivityperActivity::clear_typeid_() {
  typeid__ = 0;
  clear_has_typeid_();
}
inline ::google::protobuf::int32 perActivityperActivity::typeid_() const {
  return typeid__;
}
inline void perActivityperActivity::set_typeid_(::google::protobuf::int32 value) {
  set_has_typeid_();
  typeid__ = value;
}

// optional int32 functionID = 4;
inline bool perActivityperActivity::has_functionid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void perActivityperActivity::set_has_functionid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void perActivityperActivity::clear_has_functionid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void perActivityperActivity::clear_functionid() {
  functionid_ = 0;
  clear_has_functionid();
}
inline ::google::protobuf::int32 perActivityperActivity::functionid() const {
  return functionid_;
}
inline void perActivityperActivity::set_functionid(::google::protobuf::int32 value) {
  set_has_functionid();
  functionid_ = value;
}

// optional string opeDay = 5;
inline bool perActivityperActivity::has_opeday() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void perActivityperActivity::set_has_opeday() {
  _has_bits_[0] |= 0x00000010u;
}
inline void perActivityperActivity::clear_has_opeday() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void perActivityperActivity::clear_opeday() {
  if (opeday_ != &::google::protobuf::internal::kEmptyString) {
    opeday_->clear();
  }
  clear_has_opeday();
}
inline const ::std::string& perActivityperActivity::opeday() const {
  return *opeday_;
}
inline void perActivityperActivity::set_opeday(const ::std::string& value) {
  set_has_opeday();
  if (opeday_ == &::google::protobuf::internal::kEmptyString) {
    opeday_ = new ::std::string;
  }
  opeday_->assign(value);
}
inline void perActivityperActivity::set_opeday(const char* value) {
  set_has_opeday();
  if (opeday_ == &::google::protobuf::internal::kEmptyString) {
    opeday_ = new ::std::string;
  }
  opeday_->assign(value);
}
inline void perActivityperActivity::set_opeday(const char* value, size_t size) {
  set_has_opeday();
  if (opeday_ == &::google::protobuf::internal::kEmptyString) {
    opeday_ = new ::std::string;
  }
  opeday_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* perActivityperActivity::mutable_opeday() {
  set_has_opeday();
  if (opeday_ == &::google::protobuf::internal::kEmptyString) {
    opeday_ = new ::std::string;
  }
  return opeday_;
}
inline ::std::string* perActivityperActivity::release_opeday() {
  clear_has_opeday();
  if (opeday_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = opeday_;
    opeday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void perActivityperActivity::set_allocated_opeday(::std::string* opeday) {
  if (opeday_ != &::google::protobuf::internal::kEmptyString) {
    delete opeday_;
  }
  if (opeday) {
    set_has_opeday();
    opeday_ = opeday;
  } else {
    clear_has_opeday();
    opeday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string closeDay = 6;
inline bool perActivityperActivity::has_closeday() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void perActivityperActivity::set_has_closeday() {
  _has_bits_[0] |= 0x00000020u;
}
inline void perActivityperActivity::clear_has_closeday() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void perActivityperActivity::clear_closeday() {
  if (closeday_ != &::google::protobuf::internal::kEmptyString) {
    closeday_->clear();
  }
  clear_has_closeday();
}
inline const ::std::string& perActivityperActivity::closeday() const {
  return *closeday_;
}
inline void perActivityperActivity::set_closeday(const ::std::string& value) {
  set_has_closeday();
  if (closeday_ == &::google::protobuf::internal::kEmptyString) {
    closeday_ = new ::std::string;
  }
  closeday_->assign(value);
}
inline void perActivityperActivity::set_closeday(const char* value) {
  set_has_closeday();
  if (closeday_ == &::google::protobuf::internal::kEmptyString) {
    closeday_ = new ::std::string;
  }
  closeday_->assign(value);
}
inline void perActivityperActivity::set_closeday(const char* value, size_t size) {
  set_has_closeday();
  if (closeday_ == &::google::protobuf::internal::kEmptyString) {
    closeday_ = new ::std::string;
  }
  closeday_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* perActivityperActivity::mutable_closeday() {
  set_has_closeday();
  if (closeday_ == &::google::protobuf::internal::kEmptyString) {
    closeday_ = new ::std::string;
  }
  return closeday_;
}
inline ::std::string* perActivityperActivity::release_closeday() {
  clear_has_closeday();
  if (closeday_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = closeday_;
    closeday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void perActivityperActivity::set_allocated_closeday(::std::string* closeday) {
  if (closeday_ != &::google::protobuf::internal::kEmptyString) {
    delete closeday_;
  }
  if (closeday) {
    set_has_closeday();
    closeday_ = closeday;
  } else {
    clear_has_closeday();
    closeday_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional int32 serverdelayTime = 7;
inline bool perActivityperActivity::has_serverdelaytime() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void perActivityperActivity::set_has_serverdelaytime() {
  _has_bits_[0] |= 0x00000040u;
}
inline void perActivityperActivity::clear_has_serverdelaytime() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void perActivityperActivity::clear_serverdelaytime() {
  serverdelaytime_ = 0;
  clear_has_serverdelaytime();
}
inline ::google::protobuf::int32 perActivityperActivity::serverdelaytime() const {
  return serverdelaytime_;
}
inline void perActivityperActivity::set_serverdelaytime(::google::protobuf::int32 value) {
  set_has_serverdelaytime();
  serverdelaytime_ = value;
}

// optional int32 serverTime = 8;
inline bool perActivityperActivity::has_servertime() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void perActivityperActivity::set_has_servertime() {
  _has_bits_[0] |= 0x00000080u;
}
inline void perActivityperActivity::clear_has_servertime() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void perActivityperActivity::clear_servertime() {
  servertime_ = 0;
  clear_has_servertime();
}
inline ::google::protobuf::int32 perActivityperActivity::servertime() const {
  return servertime_;
}
inline void perActivityperActivity::set_servertime(::google::protobuf::int32 value) {
  set_has_servertime();
  servertime_ = value;
}

// optional int32 openingTime = 9;
inline bool perActivityperActivity::has_openingtime() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void perActivityperActivity::set_has_openingtime() {
  _has_bits_[0] |= 0x00000100u;
}
inline void perActivityperActivity::clear_has_openingtime() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void perActivityperActivity::clear_openingtime() {
  openingtime_ = 0;
  clear_has_openingtime();
}
inline ::google::protobuf::int32 perActivityperActivity::openingtime() const {
  return openingtime_;
}
inline void perActivityperActivity::set_openingtime(::google::protobuf::int32 value) {
  set_has_openingtime();
  openingtime_ = value;
}

// optional int32 advanceTime = 10;
inline bool perActivityperActivity::has_advancetime() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void perActivityperActivity::set_has_advancetime() {
  _has_bits_[0] |= 0x00000200u;
}
inline void perActivityperActivity::clear_has_advancetime() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void perActivityperActivity::clear_advancetime() {
  advancetime_ = 0;
  clear_has_advancetime();
}
inline ::google::protobuf::int32 perActivityperActivity::advancetime() const {
  return advancetime_;
}
inline void perActivityperActivity::set_advancetime(::google::protobuf::int32 value) {
  set_has_advancetime();
  advancetime_ = value;
}

// optional int32 intervalTime = 11;
inline bool perActivityperActivity::has_intervaltime() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void perActivityperActivity::set_has_intervaltime() {
  _has_bits_[0] |= 0x00000400u;
}
inline void perActivityperActivity::clear_has_intervaltime() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void perActivityperActivity::clear_intervaltime() {
  intervaltime_ = 0;
  clear_has_intervaltime();
}
inline ::google::protobuf::int32 perActivityperActivity::intervaltime() const {
  return intervaltime_;
}
inline void perActivityperActivity::set_intervaltime(::google::protobuf::int32 value) {
  set_has_intervaltime();
  intervaltime_ = value;
}

// optional int32 isCross = 12;
inline bool perActivityperActivity::has_iscross() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void perActivityperActivity::set_has_iscross() {
  _has_bits_[0] |= 0x00000800u;
}
inline void perActivityperActivity::clear_has_iscross() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void perActivityperActivity::clear_iscross() {
  iscross_ = 0;
  clear_has_iscross();
}
inline ::google::protobuf::int32 perActivityperActivity::iscross() const {
  return iscross_;
}
inline void perActivityperActivity::set_iscross(::google::protobuf::int32 value) {
  set_has_iscross();
  iscross_ = value;
}

// -------------------------------------------------------------------

// Sheet_perActivityperActivity

// repeated .proto_ff.perActivityperActivity perActivityperActivity_List = 1;
inline int Sheet_perActivityperActivity::peractivityperactivity_list_size() const {
  return peractivityperactivity_list_.size();
}
inline void Sheet_perActivityperActivity::clear_peractivityperactivity_list() {
  peractivityperactivity_list_.Clear();
}
inline const ::proto_ff::perActivityperActivity& Sheet_perActivityperActivity::peractivityperactivity_list(int index) const {
  return peractivityperactivity_list_.Get(index);
}
inline ::proto_ff::perActivityperActivity* Sheet_perActivityperActivity::mutable_peractivityperactivity_list(int index) {
  return peractivityperactivity_list_.Mutable(index);
}
inline ::proto_ff::perActivityperActivity* Sheet_perActivityperActivity::add_peractivityperactivity_list() {
  return peractivityperactivity_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityperActivity >&
Sheet_perActivityperActivity::peractivityperactivity_list() const {
  return peractivityperactivity_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityperActivity >*
Sheet_perActivityperActivity::mutable_peractivityperactivity_list() {
  return &peractivityperactivity_list_;
}

// -------------------------------------------------------------------

// perActivityweek

// optional int32 id = 1;
inline bool perActivityweek::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void perActivityweek::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void perActivityweek::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void perActivityweek::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 perActivityweek::id() const {
  return id_;
}
inline void perActivityweek::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string time = 2;
inline bool perActivityweek::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void perActivityweek::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void perActivityweek::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void perActivityweek::clear_time() {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    time_->clear();
  }
  clear_has_time();
}
inline const ::std::string& perActivityweek::time() const {
  return *time_;
}
inline void perActivityweek::set_time(const ::std::string& value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void perActivityweek::set_time(const char* value) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(value);
}
inline void perActivityweek::set_time(const char* value, size_t size) {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  time_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* perActivityweek::mutable_time() {
  set_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    time_ = new ::std::string;
  }
  return time_;
}
inline ::std::string* perActivityweek::release_time() {
  clear_has_time();
  if (time_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = time_;
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void perActivityweek::set_allocated_time(::std::string* time) {
  if (time_ != &::google::protobuf::internal::kEmptyString) {
    delete time_;
  }
  if (time) {
    set_has_time();
    time_ = time;
  } else {
    clear_has_time();
    time_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// repeated string week = 3;
inline int perActivityweek::week_size() const {
  return week_.size();
}
inline void perActivityweek::clear_week() {
  week_.Clear();
}
inline const ::std::string& perActivityweek::week(int index) const {
  return week_.Get(index);
}
inline ::std::string* perActivityweek::mutable_week(int index) {
  return week_.Mutable(index);
}
inline void perActivityweek::set_week(int index, const ::std::string& value) {
  week_.Mutable(index)->assign(value);
}
inline void perActivityweek::set_week(int index, const char* value) {
  week_.Mutable(index)->assign(value);
}
inline void perActivityweek::set_week(int index, const char* value, size_t size) {
  week_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
}
inline ::std::string* perActivityweek::add_week() {
  return week_.Add();
}
inline void perActivityweek::add_week(const ::std::string& value) {
  week_.Add()->assign(value);
}
inline void perActivityweek::add_week(const char* value) {
  week_.Add()->assign(value);
}
inline void perActivityweek::add_week(const char* value, size_t size) {
  week_.Add()->assign(reinterpret_cast<const char*>(value), size);
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
perActivityweek::week() const {
  return week_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
perActivityweek::mutable_week() {
  return &week_;
}

// -------------------------------------------------------------------

// Sheet_perActivityweek

// repeated .proto_ff.perActivityweek perActivityweek_List = 1;
inline int Sheet_perActivityweek::peractivityweek_list_size() const {
  return peractivityweek_list_.size();
}
inline void Sheet_perActivityweek::clear_peractivityweek_list() {
  peractivityweek_list_.Clear();
}
inline const ::proto_ff::perActivityweek& Sheet_perActivityweek::peractivityweek_list(int index) const {
  return peractivityweek_list_.Get(index);
}
inline ::proto_ff::perActivityweek* Sheet_perActivityweek::mutable_peractivityweek_list(int index) {
  return peractivityweek_list_.Mutable(index);
}
inline ::proto_ff::perActivityweek* Sheet_perActivityweek::add_peractivityweek_list() {
  return peractivityweek_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityweek >&
Sheet_perActivityweek::peractivityweek_list() const {
  return peractivityweek_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::perActivityweek >*
Sheet_perActivityweek::mutable_peractivityweek_list() {
  return &peractivityweek_list_;
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

#endif  // PROTOBUF_perActivity_2eproto__INCLUDED
