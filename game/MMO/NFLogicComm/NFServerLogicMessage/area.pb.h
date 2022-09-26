// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: area.proto

#ifndef PROTOBUF_area_2eproto__INCLUDED
#define PROTOBUF_area_2eproto__INCLUDED

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
void  protobuf_AddDesc_area_2eproto();
void protobuf_AssignDesc_area_2eproto();
void protobuf_ShutdownFile_area_2eproto();

class areaarea;
class Sheet_areaarea;
class areapath;
class Sheet_areapath;

// ===================================================================

class areaarea : public ::google::protobuf::Message {
 public:
  areaarea();
  virtual ~areaarea();

  areaarea(const areaarea& from);

  inline areaarea& operator=(const areaarea& from) {
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
  static const areaarea& default_instance();

  void Swap(areaarea* other);

  // implements Message ----------------------------------------------

  areaarea* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const areaarea& from);
  void MergeFrom(const areaarea& from);
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

  // optional int32 subType = 2;
  inline bool has_subtype() const;
  inline void clear_subtype();
  static const int kSubTypeFieldNumber = 2;
  inline ::google::protobuf::int32 subtype() const;
  inline void set_subtype(::google::protobuf::int32 value);

  // optional int64 belongToSceneID = 3;
  inline bool has_belongtosceneid() const;
  inline void clear_belongtosceneid();
  static const int kBelongToSceneIDFieldNumber = 3;
  inline ::google::protobuf::int64 belongtosceneid() const;
  inline void set_belongtosceneid(::google::protobuf::int64 value);

  // optional int32 shapeType = 4;
  inline bool has_shapetype() const;
  inline void clear_shapetype();
  static const int kShapeTypeFieldNumber = 4;
  inline ::google::protobuf::int32 shapetype() const;
  inline void set_shapetype(::google::protobuf::int32 value);

  // optional int32 isNotice = 5;
  inline bool has_isnotice() const;
  inline void clear_isnotice();
  static const int kIsNoticeFieldNumber = 5;
  inline ::google::protobuf::int32 isnotice() const;
  inline void set_isnotice(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.areaarea)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_subtype();
  inline void clear_has_subtype();
  inline void set_has_belongtosceneid();
  inline void clear_has_belongtosceneid();
  inline void set_has_shapetype();
  inline void clear_has_shapetype();
  inline void set_has_isnotice();
  inline void clear_has_isnotice();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 belongtosceneid_;
  ::google::protobuf::int32 subtype_;
  ::google::protobuf::int32 shapetype_;
  ::google::protobuf::int32 isnotice_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(5 + 31) / 32];

  friend void  protobuf_AddDesc_area_2eproto();
  friend void protobuf_AssignDesc_area_2eproto();
  friend void protobuf_ShutdownFile_area_2eproto();

  void InitAsDefaultInstance();
  static areaarea* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_areaarea : public ::google::protobuf::Message {
 public:
  Sheet_areaarea();
  virtual ~Sheet_areaarea();

  Sheet_areaarea(const Sheet_areaarea& from);

  inline Sheet_areaarea& operator=(const Sheet_areaarea& from) {
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
  static const Sheet_areaarea& default_instance();

  void Swap(Sheet_areaarea* other);

  // implements Message ----------------------------------------------

  Sheet_areaarea* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_areaarea& from);
  void MergeFrom(const Sheet_areaarea& from);
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

  // repeated .proto_ff.areaarea areaarea_List = 1;
  inline int areaarea_list_size() const;
  inline void clear_areaarea_list();
  static const int kAreaareaListFieldNumber = 1;
  inline const ::proto_ff::areaarea& areaarea_list(int index) const;
  inline ::proto_ff::areaarea* mutable_areaarea_list(int index);
  inline ::proto_ff::areaarea* add_areaarea_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::areaarea >&
      areaarea_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::areaarea >*
      mutable_areaarea_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_areaarea)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::areaarea > areaarea_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_area_2eproto();
  friend void protobuf_AssignDesc_area_2eproto();
  friend void protobuf_ShutdownFile_area_2eproto();

  void InitAsDefaultInstance();
  static Sheet_areaarea* default_instance_;
};
// -------------------------------------------------------------------

class areapath : public ::google::protobuf::Message {
 public:
  areapath();
  virtual ~areapath();

  areapath(const areapath& from);

  inline areapath& operator=(const areapath& from) {
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
  static const areapath& default_instance();

  void Swap(areapath* other);

  // implements Message ----------------------------------------------

  areapath* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const areapath& from);
  void MergeFrom(const areapath& from);
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

  // optional int64 belongToSceneID = 2;
  inline bool has_belongtosceneid() const;
  inline void clear_belongtosceneid();
  static const int kBelongToSceneIDFieldNumber = 2;
  inline ::google::protobuf::int64 belongtosceneid() const;
  inline void set_belongtosceneid(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:proto_ff.areapath)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_belongtosceneid();
  inline void clear_has_belongtosceneid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int64 belongtosceneid_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_area_2eproto();
  friend void protobuf_AssignDesc_area_2eproto();
  friend void protobuf_ShutdownFile_area_2eproto();

  void InitAsDefaultInstance();
  static areapath* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_areapath : public ::google::protobuf::Message {
 public:
  Sheet_areapath();
  virtual ~Sheet_areapath();

  Sheet_areapath(const Sheet_areapath& from);

  inline Sheet_areapath& operator=(const Sheet_areapath& from) {
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
  static const Sheet_areapath& default_instance();

  void Swap(Sheet_areapath* other);

  // implements Message ----------------------------------------------

  Sheet_areapath* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_areapath& from);
  void MergeFrom(const Sheet_areapath& from);
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

  // repeated .proto_ff.areapath areapath_List = 1;
  inline int areapath_list_size() const;
  inline void clear_areapath_list();
  static const int kAreapathListFieldNumber = 1;
  inline const ::proto_ff::areapath& areapath_list(int index) const;
  inline ::proto_ff::areapath* mutable_areapath_list(int index);
  inline ::proto_ff::areapath* add_areapath_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::areapath >&
      areapath_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::areapath >*
      mutable_areapath_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_areapath)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::areapath > areapath_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_area_2eproto();
  friend void protobuf_AssignDesc_area_2eproto();
  friend void protobuf_ShutdownFile_area_2eproto();

  void InitAsDefaultInstance();
  static Sheet_areapath* default_instance_;
};
// ===================================================================


// ===================================================================

// areaarea

// optional int64 id = 1;
inline bool areaarea::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void areaarea::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void areaarea::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void areaarea::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 areaarea::id() const {
  return id_;
}
inline void areaarea::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int32 subType = 2;
inline bool areaarea::has_subtype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void areaarea::set_has_subtype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void areaarea::clear_has_subtype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void areaarea::clear_subtype() {
  subtype_ = 0;
  clear_has_subtype();
}
inline ::google::protobuf::int32 areaarea::subtype() const {
  return subtype_;
}
inline void areaarea::set_subtype(::google::protobuf::int32 value) {
  set_has_subtype();
  subtype_ = value;
}

// optional int64 belongToSceneID = 3;
inline bool areaarea::has_belongtosceneid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void areaarea::set_has_belongtosceneid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void areaarea::clear_has_belongtosceneid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void areaarea::clear_belongtosceneid() {
  belongtosceneid_ = GOOGLE_LONGLONG(0);
  clear_has_belongtosceneid();
}
inline ::google::protobuf::int64 areaarea::belongtosceneid() const {
  return belongtosceneid_;
}
inline void areaarea::set_belongtosceneid(::google::protobuf::int64 value) {
  set_has_belongtosceneid();
  belongtosceneid_ = value;
}

// optional int32 shapeType = 4;
inline bool areaarea::has_shapetype() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void areaarea::set_has_shapetype() {
  _has_bits_[0] |= 0x00000008u;
}
inline void areaarea::clear_has_shapetype() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void areaarea::clear_shapetype() {
  shapetype_ = 0;
  clear_has_shapetype();
}
inline ::google::protobuf::int32 areaarea::shapetype() const {
  return shapetype_;
}
inline void areaarea::set_shapetype(::google::protobuf::int32 value) {
  set_has_shapetype();
  shapetype_ = value;
}

// optional int32 isNotice = 5;
inline bool areaarea::has_isnotice() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void areaarea::set_has_isnotice() {
  _has_bits_[0] |= 0x00000010u;
}
inline void areaarea::clear_has_isnotice() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void areaarea::clear_isnotice() {
  isnotice_ = 0;
  clear_has_isnotice();
}
inline ::google::protobuf::int32 areaarea::isnotice() const {
  return isnotice_;
}
inline void areaarea::set_isnotice(::google::protobuf::int32 value) {
  set_has_isnotice();
  isnotice_ = value;
}

// -------------------------------------------------------------------

// Sheet_areaarea

// repeated .proto_ff.areaarea areaarea_List = 1;
inline int Sheet_areaarea::areaarea_list_size() const {
  return areaarea_list_.size();
}
inline void Sheet_areaarea::clear_areaarea_list() {
  areaarea_list_.Clear();
}
inline const ::proto_ff::areaarea& Sheet_areaarea::areaarea_list(int index) const {
  return areaarea_list_.Get(index);
}
inline ::proto_ff::areaarea* Sheet_areaarea::mutable_areaarea_list(int index) {
  return areaarea_list_.Mutable(index);
}
inline ::proto_ff::areaarea* Sheet_areaarea::add_areaarea_list() {
  return areaarea_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::areaarea >&
Sheet_areaarea::areaarea_list() const {
  return areaarea_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::areaarea >*
Sheet_areaarea::mutable_areaarea_list() {
  return &areaarea_list_;
}

// -------------------------------------------------------------------

// areapath

// optional int64 id = 1;
inline bool areapath::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void areapath::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void areapath::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void areapath::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 areapath::id() const {
  return id_;
}
inline void areapath::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int64 belongToSceneID = 2;
inline bool areapath::has_belongtosceneid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void areapath::set_has_belongtosceneid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void areapath::clear_has_belongtosceneid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void areapath::clear_belongtosceneid() {
  belongtosceneid_ = GOOGLE_LONGLONG(0);
  clear_has_belongtosceneid();
}
inline ::google::protobuf::int64 areapath::belongtosceneid() const {
  return belongtosceneid_;
}
inline void areapath::set_belongtosceneid(::google::protobuf::int64 value) {
  set_has_belongtosceneid();
  belongtosceneid_ = value;
}

// -------------------------------------------------------------------

// Sheet_areapath

// repeated .proto_ff.areapath areapath_List = 1;
inline int Sheet_areapath::areapath_list_size() const {
  return areapath_list_.size();
}
inline void Sheet_areapath::clear_areapath_list() {
  areapath_list_.Clear();
}
inline const ::proto_ff::areapath& Sheet_areapath::areapath_list(int index) const {
  return areapath_list_.Get(index);
}
inline ::proto_ff::areapath* Sheet_areapath::mutable_areapath_list(int index) {
  return areapath_list_.Mutable(index);
}
inline ::proto_ff::areapath* Sheet_areapath::add_areapath_list() {
  return areapath_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::areapath >&
Sheet_areapath::areapath_list() const {
  return areapath_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::areapath >*
Sheet_areapath::mutable_areapath_list() {
  return &areapath_list_;
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

#endif  // PROTOBUF_area_2eproto__INCLUDED
