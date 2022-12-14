// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: taskreward.proto

#ifndef PROTOBUF_taskreward_2eproto__INCLUDED
#define PROTOBUF_taskreward_2eproto__INCLUDED

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
void  protobuf_AddDesc_taskreward_2eproto();
void protobuf_AssignDesc_taskreward_2eproto();
void protobuf_ShutdownFile_taskreward_2eproto();

class taskrewardtaskrewarditemDesc;
class taskrewardtaskrewardattrDesc;
class taskrewardtaskreward;
class Sheet_taskrewardtaskreward;
class taskrewardtasktype;
class Sheet_taskrewardtasktype;

// ===================================================================

class taskrewardtaskrewarditemDesc : public ::google::protobuf::Message {
 public:
  taskrewardtaskrewarditemDesc();
  virtual ~taskrewardtaskrewarditemDesc();

  taskrewardtaskrewarditemDesc(const taskrewardtaskrewarditemDesc& from);

  inline taskrewardtaskrewarditemDesc& operator=(const taskrewardtaskrewarditemDesc& from) {
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
  static const taskrewardtaskrewarditemDesc& default_instance();

  void Swap(taskrewardtaskrewarditemDesc* other);

  // implements Message ----------------------------------------------

  taskrewardtaskrewarditemDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const taskrewardtaskrewarditemDesc& from);
  void MergeFrom(const taskrewardtaskrewarditemDesc& from);
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

  // optional int32 bind = 1;
  inline bool has_bind() const;
  inline void clear_bind();
  static const int kBindFieldNumber = 1;
  inline ::google::protobuf::int32 bind() const;
  inline void set_bind(::google::protobuf::int32 value);

  // optional int64 id = 2;
  inline bool has_id() const;
  inline void clear_id();
  static const int kIdFieldNumber = 2;
  inline ::google::protobuf::int64 id() const;
  inline void set_id(::google::protobuf::int64 value);

  // optional int32 val = 3;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 3;
  inline ::google::protobuf::int32 val() const;
  inline void set_val(::google::protobuf::int32 value);

  // optional int32 prof = 4;
  inline bool has_prof() const;
  inline void clear_prof();
  static const int kProfFieldNumber = 4;
  inline ::google::protobuf::int32 prof() const;
  inline void set_prof(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.taskrewardtaskrewarditemDesc)
 private:
  inline void set_has_bind();
  inline void clear_has_bind();
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_val();
  inline void clear_has_val();
  inline void set_has_prof();
  inline void clear_has_prof();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 bind_;
  ::google::protobuf::int32 val_;
  ::google::protobuf::int32 prof_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static taskrewardtaskrewarditemDesc* default_instance_;
};
// -------------------------------------------------------------------

class taskrewardtaskrewardattrDesc : public ::google::protobuf::Message {
 public:
  taskrewardtaskrewardattrDesc();
  virtual ~taskrewardtaskrewardattrDesc();

  taskrewardtaskrewardattrDesc(const taskrewardtaskrewardattrDesc& from);

  inline taskrewardtaskrewardattrDesc& operator=(const taskrewardtaskrewardattrDesc& from) {
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
  static const taskrewardtaskrewardattrDesc& default_instance();

  void Swap(taskrewardtaskrewardattrDesc* other);

  // implements Message ----------------------------------------------

  taskrewardtaskrewardattrDesc* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const taskrewardtaskrewardattrDesc& from);
  void MergeFrom(const taskrewardtaskrewardattrDesc& from);
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

  // optional int64 val = 2;
  inline bool has_val() const;
  inline void clear_val();
  static const int kValFieldNumber = 2;
  inline ::google::protobuf::int64 val() const;
  inline void set_val(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:proto_ff.taskrewardtaskrewardattrDesc)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_val();
  inline void clear_has_val();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 val_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static taskrewardtaskrewardattrDesc* default_instance_;
};
// -------------------------------------------------------------------

class taskrewardtaskreward : public ::google::protobuf::Message {
 public:
  taskrewardtaskreward();
  virtual ~taskrewardtaskreward();

  taskrewardtaskreward(const taskrewardtaskreward& from);

  inline taskrewardtaskreward& operator=(const taskrewardtaskreward& from) {
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
  static const taskrewardtaskreward& default_instance();

  void Swap(taskrewardtaskreward* other);

  // implements Message ----------------------------------------------

  taskrewardtaskreward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const taskrewardtaskreward& from);
  void MergeFrom(const taskrewardtaskreward& from);
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

  // optional int32 taskType = 2;
  inline bool has_tasktype() const;
  inline void clear_tasktype();
  static const int kTaskTypeFieldNumber = 2;
  inline ::google::protobuf::int32 tasktype() const;
  inline void set_tasktype(::google::protobuf::int32 value);

  // optional int32 lv = 3;
  inline bool has_lv() const;
  inline void clear_lv();
  static const int kLvFieldNumber = 3;
  inline ::google::protobuf::int32 lv() const;
  inline void set_lv(::google::protobuf::int32 value);

  // optional int32 guildExp = 4;
  inline bool has_guildexp() const;
  inline void clear_guildexp();
  static const int kGuildExpFieldNumber = 4;
  inline ::google::protobuf::int32 guildexp() const;
  inline void set_guildexp(::google::protobuf::int32 value);

  // optional int32 guildPoint = 5;
  inline bool has_guildpoint() const;
  inline void clear_guildpoint();
  static const int kGuildPointFieldNumber = 5;
  inline ::google::protobuf::int32 guildpoint() const;
  inline void set_guildpoint(::google::protobuf::int32 value);

  // optional int32 skillId = 6;
  inline bool has_skillid() const;
  inline void clear_skillid();
  static const int kSkillIdFieldNumber = 6;
  inline ::google::protobuf::int32 skillid() const;
  inline void set_skillid(::google::protobuf::int32 value);

  // repeated .proto_ff.taskrewardtaskrewarditemDesc item = 7;
  inline int item_size() const;
  inline void clear_item();
  static const int kItemFieldNumber = 7;
  inline const ::proto_ff::taskrewardtaskrewarditemDesc& item(int index) const;
  inline ::proto_ff::taskrewardtaskrewarditemDesc* mutable_item(int index);
  inline ::proto_ff::taskrewardtaskrewarditemDesc* add_item();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewarditemDesc >&
      item() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewarditemDesc >*
      mutable_item();

  // repeated .proto_ff.taskrewardtaskrewardattrDesc attr = 8;
  inline int attr_size() const;
  inline void clear_attr();
  static const int kAttrFieldNumber = 8;
  inline const ::proto_ff::taskrewardtaskrewardattrDesc& attr(int index) const;
  inline ::proto_ff::taskrewardtaskrewardattrDesc* mutable_attr(int index);
  inline ::proto_ff::taskrewardtaskrewardattrDesc* add_attr();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewardattrDesc >&
      attr() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewardattrDesc >*
      mutable_attr();

  // @@protoc_insertion_point(class_scope:proto_ff.taskrewardtaskreward)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_tasktype();
  inline void clear_has_tasktype();
  inline void set_has_lv();
  inline void clear_has_lv();
  inline void set_has_guildexp();
  inline void clear_has_guildexp();
  inline void set_has_guildpoint();
  inline void clear_has_guildpoint();
  inline void set_has_skillid();
  inline void clear_has_skillid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 tasktype_;
  ::google::protobuf::int32 lv_;
  ::google::protobuf::int32 guildexp_;
  ::google::protobuf::int32 guildpoint_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewarditemDesc > item_;
  ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewardattrDesc > attr_;
  ::google::protobuf::int32 skillid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static taskrewardtaskreward* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_taskrewardtaskreward : public ::google::protobuf::Message {
 public:
  Sheet_taskrewardtaskreward();
  virtual ~Sheet_taskrewardtaskreward();

  Sheet_taskrewardtaskreward(const Sheet_taskrewardtaskreward& from);

  inline Sheet_taskrewardtaskreward& operator=(const Sheet_taskrewardtaskreward& from) {
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
  static const Sheet_taskrewardtaskreward& default_instance();

  void Swap(Sheet_taskrewardtaskreward* other);

  // implements Message ----------------------------------------------

  Sheet_taskrewardtaskreward* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_taskrewardtaskreward& from);
  void MergeFrom(const Sheet_taskrewardtaskreward& from);
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

  // repeated .proto_ff.taskrewardtaskreward taskrewardtaskreward_List = 1;
  inline int taskrewardtaskreward_list_size() const;
  inline void clear_taskrewardtaskreward_list();
  static const int kTaskrewardtaskrewardListFieldNumber = 1;
  inline const ::proto_ff::taskrewardtaskreward& taskrewardtaskreward_list(int index) const;
  inline ::proto_ff::taskrewardtaskreward* mutable_taskrewardtaskreward_list(int index);
  inline ::proto_ff::taskrewardtaskreward* add_taskrewardtaskreward_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskreward >&
      taskrewardtaskreward_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskreward >*
      mutable_taskrewardtaskreward_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_taskrewardtaskreward)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskreward > taskrewardtaskreward_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static Sheet_taskrewardtaskreward* default_instance_;
};
// -------------------------------------------------------------------

class taskrewardtasktype : public ::google::protobuf::Message {
 public:
  taskrewardtasktype();
  virtual ~taskrewardtasktype();

  taskrewardtasktype(const taskrewardtasktype& from);

  inline taskrewardtasktype& operator=(const taskrewardtasktype& from) {
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
  static const taskrewardtasktype& default_instance();

  void Swap(taskrewardtasktype* other);

  // implements Message ----------------------------------------------

  taskrewardtasktype* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const taskrewardtasktype& from);
  void MergeFrom(const taskrewardtasktype& from);
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

  // optional int32 taskType = 1;
  inline bool has_tasktype() const;
  inline void clear_tasktype();
  static const int kTaskTypeFieldNumber = 1;
  inline ::google::protobuf::int32 tasktype() const;
  inline void set_tasktype(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.taskrewardtasktype)
 private:
  inline void set_has_tasktype();
  inline void clear_has_tasktype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 tasktype_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static taskrewardtasktype* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_taskrewardtasktype : public ::google::protobuf::Message {
 public:
  Sheet_taskrewardtasktype();
  virtual ~Sheet_taskrewardtasktype();

  Sheet_taskrewardtasktype(const Sheet_taskrewardtasktype& from);

  inline Sheet_taskrewardtasktype& operator=(const Sheet_taskrewardtasktype& from) {
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
  static const Sheet_taskrewardtasktype& default_instance();

  void Swap(Sheet_taskrewardtasktype* other);

  // implements Message ----------------------------------------------

  Sheet_taskrewardtasktype* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_taskrewardtasktype& from);
  void MergeFrom(const Sheet_taskrewardtasktype& from);
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

  // repeated .proto_ff.taskrewardtasktype taskrewardtasktype_List = 1;
  inline int taskrewardtasktype_list_size() const;
  inline void clear_taskrewardtasktype_list();
  static const int kTaskrewardtasktypeListFieldNumber = 1;
  inline const ::proto_ff::taskrewardtasktype& taskrewardtasktype_list(int index) const;
  inline ::proto_ff::taskrewardtasktype* mutable_taskrewardtasktype_list(int index);
  inline ::proto_ff::taskrewardtasktype* add_taskrewardtasktype_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtasktype >&
      taskrewardtasktype_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtasktype >*
      mutable_taskrewardtasktype_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_taskrewardtasktype)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtasktype > taskrewardtasktype_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_taskreward_2eproto();
  friend void protobuf_AssignDesc_taskreward_2eproto();
  friend void protobuf_ShutdownFile_taskreward_2eproto();

  void InitAsDefaultInstance();
  static Sheet_taskrewardtasktype* default_instance_;
};
// ===================================================================


// ===================================================================

// taskrewardtaskrewarditemDesc

// optional int32 bind = 1;
inline bool taskrewardtaskrewarditemDesc::has_bind() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void taskrewardtaskrewarditemDesc::set_has_bind() {
  _has_bits_[0] |= 0x00000001u;
}
inline void taskrewardtaskrewarditemDesc::clear_has_bind() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void taskrewardtaskrewarditemDesc::clear_bind() {
  bind_ = 0;
  clear_has_bind();
}
inline ::google::protobuf::int32 taskrewardtaskrewarditemDesc::bind() const {
  return bind_;
}
inline void taskrewardtaskrewarditemDesc::set_bind(::google::protobuf::int32 value) {
  set_has_bind();
  bind_ = value;
}

// optional int64 id = 2;
inline bool taskrewardtaskrewarditemDesc::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void taskrewardtaskrewarditemDesc::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void taskrewardtaskrewarditemDesc::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void taskrewardtaskrewarditemDesc::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 taskrewardtaskrewarditemDesc::id() const {
  return id_;
}
inline void taskrewardtaskrewarditemDesc::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int32 val = 3;
inline bool taskrewardtaskrewarditemDesc::has_val() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void taskrewardtaskrewarditemDesc::set_has_val() {
  _has_bits_[0] |= 0x00000004u;
}
inline void taskrewardtaskrewarditemDesc::clear_has_val() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void taskrewardtaskrewarditemDesc::clear_val() {
  val_ = 0;
  clear_has_val();
}
inline ::google::protobuf::int32 taskrewardtaskrewarditemDesc::val() const {
  return val_;
}
inline void taskrewardtaskrewarditemDesc::set_val(::google::protobuf::int32 value) {
  set_has_val();
  val_ = value;
}

// optional int32 prof = 4;
inline bool taskrewardtaskrewarditemDesc::has_prof() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void taskrewardtaskrewarditemDesc::set_has_prof() {
  _has_bits_[0] |= 0x00000008u;
}
inline void taskrewardtaskrewarditemDesc::clear_has_prof() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void taskrewardtaskrewarditemDesc::clear_prof() {
  prof_ = 0;
  clear_has_prof();
}
inline ::google::protobuf::int32 taskrewardtaskrewarditemDesc::prof() const {
  return prof_;
}
inline void taskrewardtaskrewarditemDesc::set_prof(::google::protobuf::int32 value) {
  set_has_prof();
  prof_ = value;
}

// -------------------------------------------------------------------

// taskrewardtaskrewardattrDesc

// optional int64 id = 1;
inline bool taskrewardtaskrewardattrDesc::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void taskrewardtaskrewardattrDesc::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void taskrewardtaskrewardattrDesc::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void taskrewardtaskrewardattrDesc::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 taskrewardtaskrewardattrDesc::id() const {
  return id_;
}
inline void taskrewardtaskrewardattrDesc::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int64 val = 2;
inline bool taskrewardtaskrewardattrDesc::has_val() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void taskrewardtaskrewardattrDesc::set_has_val() {
  _has_bits_[0] |= 0x00000002u;
}
inline void taskrewardtaskrewardattrDesc::clear_has_val() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void taskrewardtaskrewardattrDesc::clear_val() {
  val_ = GOOGLE_LONGLONG(0);
  clear_has_val();
}
inline ::google::protobuf::int64 taskrewardtaskrewardattrDesc::val() const {
  return val_;
}
inline void taskrewardtaskrewardattrDesc::set_val(::google::protobuf::int64 value) {
  set_has_val();
  val_ = value;
}

// -------------------------------------------------------------------

// taskrewardtaskreward

// optional int64 id = 1;
inline bool taskrewardtaskreward::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void taskrewardtaskreward::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void taskrewardtaskreward::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void taskrewardtaskreward::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 taskrewardtaskreward::id() const {
  return id_;
}
inline void taskrewardtaskreward::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int32 taskType = 2;
inline bool taskrewardtaskreward::has_tasktype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void taskrewardtaskreward::set_has_tasktype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void taskrewardtaskreward::clear_has_tasktype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void taskrewardtaskreward::clear_tasktype() {
  tasktype_ = 0;
  clear_has_tasktype();
}
inline ::google::protobuf::int32 taskrewardtaskreward::tasktype() const {
  return tasktype_;
}
inline void taskrewardtaskreward::set_tasktype(::google::protobuf::int32 value) {
  set_has_tasktype();
  tasktype_ = value;
}

// optional int32 lv = 3;
inline bool taskrewardtaskreward::has_lv() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void taskrewardtaskreward::set_has_lv() {
  _has_bits_[0] |= 0x00000004u;
}
inline void taskrewardtaskreward::clear_has_lv() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void taskrewardtaskreward::clear_lv() {
  lv_ = 0;
  clear_has_lv();
}
inline ::google::protobuf::int32 taskrewardtaskreward::lv() const {
  return lv_;
}
inline void taskrewardtaskreward::set_lv(::google::protobuf::int32 value) {
  set_has_lv();
  lv_ = value;
}

// optional int32 guildExp = 4;
inline bool taskrewardtaskreward::has_guildexp() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void taskrewardtaskreward::set_has_guildexp() {
  _has_bits_[0] |= 0x00000008u;
}
inline void taskrewardtaskreward::clear_has_guildexp() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void taskrewardtaskreward::clear_guildexp() {
  guildexp_ = 0;
  clear_has_guildexp();
}
inline ::google::protobuf::int32 taskrewardtaskreward::guildexp() const {
  return guildexp_;
}
inline void taskrewardtaskreward::set_guildexp(::google::protobuf::int32 value) {
  set_has_guildexp();
  guildexp_ = value;
}

// optional int32 guildPoint = 5;
inline bool taskrewardtaskreward::has_guildpoint() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void taskrewardtaskreward::set_has_guildpoint() {
  _has_bits_[0] |= 0x00000010u;
}
inline void taskrewardtaskreward::clear_has_guildpoint() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void taskrewardtaskreward::clear_guildpoint() {
  guildpoint_ = 0;
  clear_has_guildpoint();
}
inline ::google::protobuf::int32 taskrewardtaskreward::guildpoint() const {
  return guildpoint_;
}
inline void taskrewardtaskreward::set_guildpoint(::google::protobuf::int32 value) {
  set_has_guildpoint();
  guildpoint_ = value;
}

// optional int32 skillId = 6;
inline bool taskrewardtaskreward::has_skillid() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void taskrewardtaskreward::set_has_skillid() {
  _has_bits_[0] |= 0x00000020u;
}
inline void taskrewardtaskreward::clear_has_skillid() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void taskrewardtaskreward::clear_skillid() {
  skillid_ = 0;
  clear_has_skillid();
}
inline ::google::protobuf::int32 taskrewardtaskreward::skillid() const {
  return skillid_;
}
inline void taskrewardtaskreward::set_skillid(::google::protobuf::int32 value) {
  set_has_skillid();
  skillid_ = value;
}

// repeated .proto_ff.taskrewardtaskrewarditemDesc item = 7;
inline int taskrewardtaskreward::item_size() const {
  return item_.size();
}
inline void taskrewardtaskreward::clear_item() {
  item_.Clear();
}
inline const ::proto_ff::taskrewardtaskrewarditemDesc& taskrewardtaskreward::item(int index) const {
  return item_.Get(index);
}
inline ::proto_ff::taskrewardtaskrewarditemDesc* taskrewardtaskreward::mutable_item(int index) {
  return item_.Mutable(index);
}
inline ::proto_ff::taskrewardtaskrewarditemDesc* taskrewardtaskreward::add_item() {
  return item_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewarditemDesc >&
taskrewardtaskreward::item() const {
  return item_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewarditemDesc >*
taskrewardtaskreward::mutable_item() {
  return &item_;
}

// repeated .proto_ff.taskrewardtaskrewardattrDesc attr = 8;
inline int taskrewardtaskreward::attr_size() const {
  return attr_.size();
}
inline void taskrewardtaskreward::clear_attr() {
  attr_.Clear();
}
inline const ::proto_ff::taskrewardtaskrewardattrDesc& taskrewardtaskreward::attr(int index) const {
  return attr_.Get(index);
}
inline ::proto_ff::taskrewardtaskrewardattrDesc* taskrewardtaskreward::mutable_attr(int index) {
  return attr_.Mutable(index);
}
inline ::proto_ff::taskrewardtaskrewardattrDesc* taskrewardtaskreward::add_attr() {
  return attr_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewardattrDesc >&
taskrewardtaskreward::attr() const {
  return attr_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskrewardattrDesc >*
taskrewardtaskreward::mutable_attr() {
  return &attr_;
}

// -------------------------------------------------------------------

// Sheet_taskrewardtaskreward

// repeated .proto_ff.taskrewardtaskreward taskrewardtaskreward_List = 1;
inline int Sheet_taskrewardtaskreward::taskrewardtaskreward_list_size() const {
  return taskrewardtaskreward_list_.size();
}
inline void Sheet_taskrewardtaskreward::clear_taskrewardtaskreward_list() {
  taskrewardtaskreward_list_.Clear();
}
inline const ::proto_ff::taskrewardtaskreward& Sheet_taskrewardtaskreward::taskrewardtaskreward_list(int index) const {
  return taskrewardtaskreward_list_.Get(index);
}
inline ::proto_ff::taskrewardtaskreward* Sheet_taskrewardtaskreward::mutable_taskrewardtaskreward_list(int index) {
  return taskrewardtaskreward_list_.Mutable(index);
}
inline ::proto_ff::taskrewardtaskreward* Sheet_taskrewardtaskreward::add_taskrewardtaskreward_list() {
  return taskrewardtaskreward_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskreward >&
Sheet_taskrewardtaskreward::taskrewardtaskreward_list() const {
  return taskrewardtaskreward_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtaskreward >*
Sheet_taskrewardtaskreward::mutable_taskrewardtaskreward_list() {
  return &taskrewardtaskreward_list_;
}

// -------------------------------------------------------------------

// taskrewardtasktype

// optional int32 taskType = 1;
inline bool taskrewardtasktype::has_tasktype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void taskrewardtasktype::set_has_tasktype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void taskrewardtasktype::clear_has_tasktype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void taskrewardtasktype::clear_tasktype() {
  tasktype_ = 0;
  clear_has_tasktype();
}
inline ::google::protobuf::int32 taskrewardtasktype::tasktype() const {
  return tasktype_;
}
inline void taskrewardtasktype::set_tasktype(::google::protobuf::int32 value) {
  set_has_tasktype();
  tasktype_ = value;
}

// -------------------------------------------------------------------

// Sheet_taskrewardtasktype

// repeated .proto_ff.taskrewardtasktype taskrewardtasktype_List = 1;
inline int Sheet_taskrewardtasktype::taskrewardtasktype_list_size() const {
  return taskrewardtasktype_list_.size();
}
inline void Sheet_taskrewardtasktype::clear_taskrewardtasktype_list() {
  taskrewardtasktype_list_.Clear();
}
inline const ::proto_ff::taskrewardtasktype& Sheet_taskrewardtasktype::taskrewardtasktype_list(int index) const {
  return taskrewardtasktype_list_.Get(index);
}
inline ::proto_ff::taskrewardtasktype* Sheet_taskrewardtasktype::mutable_taskrewardtasktype_list(int index) {
  return taskrewardtasktype_list_.Mutable(index);
}
inline ::proto_ff::taskrewardtasktype* Sheet_taskrewardtasktype::add_taskrewardtasktype_list() {
  return taskrewardtasktype_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtasktype >&
Sheet_taskrewardtasktype::taskrewardtasktype_list() const {
  return taskrewardtasktype_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::taskrewardtasktype >*
Sheet_taskrewardtasktype::mutable_taskrewardtasktype_list() {
  return &taskrewardtasktype_list_;
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

#endif  // PROTOBUF_taskreward_2eproto__INCLUDED
