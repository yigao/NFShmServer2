// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ui.proto

#ifndef PROTOBUF_ui_2eproto__INCLUDED
#define PROTOBUF_ui_2eproto__INCLUDED

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
void  protobuf_AddDesc_ui_2eproto();
void protobuf_AssignDesc_ui_2eproto();
void protobuf_ShutdownFile_ui_2eproto();

class uieffect;
class Sheet_uieffect;

// ===================================================================

class uieffect : public ::google::protobuf::Message {
 public:
  uieffect();
  virtual ~uieffect();

  uieffect(const uieffect& from);

  inline uieffect& operator=(const uieffect& from) {
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
  static const uieffect& default_instance();

  void Swap(uieffect* other);

  // implements Message ----------------------------------------------

  uieffect* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const uieffect& from);
  void MergeFrom(const uieffect& from);
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

  // optional int32 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:proto_ff.uieffect)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int64 id_;
  ::google::protobuf::int32 time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_ui_2eproto();
  friend void protobuf_AssignDesc_ui_2eproto();
  friend void protobuf_ShutdownFile_ui_2eproto();

  void InitAsDefaultInstance();
  static uieffect* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_uieffect : public ::google::protobuf::Message {
 public:
  Sheet_uieffect();
  virtual ~Sheet_uieffect();

  Sheet_uieffect(const Sheet_uieffect& from);

  inline Sheet_uieffect& operator=(const Sheet_uieffect& from) {
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
  static const Sheet_uieffect& default_instance();

  void Swap(Sheet_uieffect* other);

  // implements Message ----------------------------------------------

  Sheet_uieffect* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_uieffect& from);
  void MergeFrom(const Sheet_uieffect& from);
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

  // repeated .proto_ff.uieffect uieffect_List = 1;
  inline int uieffect_list_size() const;
  inline void clear_uieffect_list();
  static const int kUieffectListFieldNumber = 1;
  inline const ::proto_ff::uieffect& uieffect_list(int index) const;
  inline ::proto_ff::uieffect* mutable_uieffect_list(int index);
  inline ::proto_ff::uieffect* add_uieffect_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::uieffect >&
      uieffect_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::uieffect >*
      mutable_uieffect_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_uieffect)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::uieffect > uieffect_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_ui_2eproto();
  friend void protobuf_AssignDesc_ui_2eproto();
  friend void protobuf_ShutdownFile_ui_2eproto();

  void InitAsDefaultInstance();
  static Sheet_uieffect* default_instance_;
};
// ===================================================================


// ===================================================================

// uieffect

// optional int64 id = 1;
inline bool uieffect::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void uieffect::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void uieffect::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void uieffect::clear_id() {
  id_ = GOOGLE_LONGLONG(0);
  clear_has_id();
}
inline ::google::protobuf::int64 uieffect::id() const {
  return id_;
}
inline void uieffect::set_id(::google::protobuf::int64 value) {
  set_has_id();
  id_ = value;
}

// optional int32 time = 2;
inline bool uieffect::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void uieffect::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void uieffect::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void uieffect::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 uieffect::time() const {
  return time_;
}
inline void uieffect::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
}

// -------------------------------------------------------------------

// Sheet_uieffect

// repeated .proto_ff.uieffect uieffect_List = 1;
inline int Sheet_uieffect::uieffect_list_size() const {
  return uieffect_list_.size();
}
inline void Sheet_uieffect::clear_uieffect_list() {
  uieffect_list_.Clear();
}
inline const ::proto_ff::uieffect& Sheet_uieffect::uieffect_list(int index) const {
  return uieffect_list_.Get(index);
}
inline ::proto_ff::uieffect* Sheet_uieffect::mutable_uieffect_list(int index) {
  return uieffect_list_.Mutable(index);
}
inline ::proto_ff::uieffect* Sheet_uieffect::add_uieffect_list() {
  return uieffect_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::uieffect >&
Sheet_uieffect::uieffect_list() const {
  return uieffect_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::uieffect >*
Sheet_uieffect::mutable_uieffect_list() {
  return &uieffect_list_;
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

#endif  // PROTOBUF_ui_2eproto__INCLUDED
