// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg.proto

#ifndef PROTOBUF_msg_2eproto__INCLUDED
#define PROTOBUF_msg_2eproto__INCLUDED

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
void  protobuf_AddDesc_msg_2eproto();
void protobuf_AssignDesc_msg_2eproto();
void protobuf_ShutdownFile_msg_2eproto();

class msgphpmsg;
class Sheet_msgphpmsg;

// ===================================================================

class msgphpmsg : public ::google::protobuf::Message {
 public:
  msgphpmsg();
  virtual ~msgphpmsg();

  msgphpmsg(const msgphpmsg& from);

  inline msgphpmsg& operator=(const msgphpmsg& from) {
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
  static const msgphpmsg& default_instance();

  void Swap(msgphpmsg* other);

  // implements Message ----------------------------------------------

  msgphpmsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const msgphpmsg& from);
  void MergeFrom(const msgphpmsg& from);
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

  // optional string content = 2;
  inline bool has_content() const;
  inline void clear_content();
  static const int kContentFieldNumber = 2;
  inline const ::std::string& content() const;
  inline void set_content(const ::std::string& value);
  inline void set_content(const char* value);
  inline void set_content(const char* value, size_t size);
  inline ::std::string* mutable_content();
  inline ::std::string* release_content();
  inline void set_allocated_content(::std::string* content);

  // optional string note = 3;
  inline bool has_note() const;
  inline void clear_note();
  static const int kNoteFieldNumber = 3;
  inline const ::std::string& note() const;
  inline void set_note(const ::std::string& value);
  inline void set_note(const char* value);
  inline void set_note(const char* value, size_t size);
  inline ::std::string* mutable_note();
  inline ::std::string* release_note();
  inline void set_allocated_note(::std::string* note);

  // @@protoc_insertion_point(class_scope:proto_ff.msgphpmsg)
 private:
  inline void set_has_id();
  inline void clear_has_id();
  inline void set_has_content();
  inline void clear_has_content();
  inline void set_has_note();
  inline void clear_has_note();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* content_;
  ::std::string* note_;
  ::google::protobuf::int32 id_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(3 + 31) / 32];

  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static msgphpmsg* default_instance_;
};
// -------------------------------------------------------------------

class Sheet_msgphpmsg : public ::google::protobuf::Message {
 public:
  Sheet_msgphpmsg();
  virtual ~Sheet_msgphpmsg();

  Sheet_msgphpmsg(const Sheet_msgphpmsg& from);

  inline Sheet_msgphpmsg& operator=(const Sheet_msgphpmsg& from) {
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
  static const Sheet_msgphpmsg& default_instance();

  void Swap(Sheet_msgphpmsg* other);

  // implements Message ----------------------------------------------

  Sheet_msgphpmsg* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Sheet_msgphpmsg& from);
  void MergeFrom(const Sheet_msgphpmsg& from);
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

  // repeated .proto_ff.msgphpmsg msgphpmsg_List = 1;
  inline int msgphpmsg_list_size() const;
  inline void clear_msgphpmsg_list();
  static const int kMsgphpmsgListFieldNumber = 1;
  inline const ::proto_ff::msgphpmsg& msgphpmsg_list(int index) const;
  inline ::proto_ff::msgphpmsg* mutable_msgphpmsg_list(int index);
  inline ::proto_ff::msgphpmsg* add_msgphpmsg_list();
  inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::msgphpmsg >&
      msgphpmsg_list() const;
  inline ::google::protobuf::RepeatedPtrField< ::proto_ff::msgphpmsg >*
      mutable_msgphpmsg_list();

  // @@protoc_insertion_point(class_scope:proto_ff.Sheet_msgphpmsg)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::proto_ff::msgphpmsg > msgphpmsg_list_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_msg_2eproto();
  friend void protobuf_AssignDesc_msg_2eproto();
  friend void protobuf_ShutdownFile_msg_2eproto();

  void InitAsDefaultInstance();
  static Sheet_msgphpmsg* default_instance_;
};
// ===================================================================


// ===================================================================

// msgphpmsg

// optional int32 id = 1;
inline bool msgphpmsg::has_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void msgphpmsg::set_has_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void msgphpmsg::clear_has_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void msgphpmsg::clear_id() {
  id_ = 0;
  clear_has_id();
}
inline ::google::protobuf::int32 msgphpmsg::id() const {
  return id_;
}
inline void msgphpmsg::set_id(::google::protobuf::int32 value) {
  set_has_id();
  id_ = value;
}

// optional string content = 2;
inline bool msgphpmsg::has_content() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void msgphpmsg::set_has_content() {
  _has_bits_[0] |= 0x00000002u;
}
inline void msgphpmsg::clear_has_content() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void msgphpmsg::clear_content() {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    content_->clear();
  }
  clear_has_content();
}
inline const ::std::string& msgphpmsg::content() const {
  return *content_;
}
inline void msgphpmsg::set_content(const ::std::string& value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void msgphpmsg::set_content(const char* value) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(value);
}
inline void msgphpmsg::set_content(const char* value, size_t size) {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  content_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* msgphpmsg::mutable_content() {
  set_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    content_ = new ::std::string;
  }
  return content_;
}
inline ::std::string* msgphpmsg::release_content() {
  clear_has_content();
  if (content_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = content_;
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void msgphpmsg::set_allocated_content(::std::string* content) {
  if (content_ != &::google::protobuf::internal::kEmptyString) {
    delete content_;
  }
  if (content) {
    set_has_content();
    content_ = content;
  } else {
    clear_has_content();
    content_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// optional string note = 3;
inline bool msgphpmsg::has_note() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void msgphpmsg::set_has_note() {
  _has_bits_[0] |= 0x00000004u;
}
inline void msgphpmsg::clear_has_note() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void msgphpmsg::clear_note() {
  if (note_ != &::google::protobuf::internal::kEmptyString) {
    note_->clear();
  }
  clear_has_note();
}
inline const ::std::string& msgphpmsg::note() const {
  return *note_;
}
inline void msgphpmsg::set_note(const ::std::string& value) {
  set_has_note();
  if (note_ == &::google::protobuf::internal::kEmptyString) {
    note_ = new ::std::string;
  }
  note_->assign(value);
}
inline void msgphpmsg::set_note(const char* value) {
  set_has_note();
  if (note_ == &::google::protobuf::internal::kEmptyString) {
    note_ = new ::std::string;
  }
  note_->assign(value);
}
inline void msgphpmsg::set_note(const char* value, size_t size) {
  set_has_note();
  if (note_ == &::google::protobuf::internal::kEmptyString) {
    note_ = new ::std::string;
  }
  note_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* msgphpmsg::mutable_note() {
  set_has_note();
  if (note_ == &::google::protobuf::internal::kEmptyString) {
    note_ = new ::std::string;
  }
  return note_;
}
inline ::std::string* msgphpmsg::release_note() {
  clear_has_note();
  if (note_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = note_;
    note_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void msgphpmsg::set_allocated_note(::std::string* note) {
  if (note_ != &::google::protobuf::internal::kEmptyString) {
    delete note_;
  }
  if (note) {
    set_has_note();
    note_ = note;
  } else {
    clear_has_note();
    note_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// -------------------------------------------------------------------

// Sheet_msgphpmsg

// repeated .proto_ff.msgphpmsg msgphpmsg_List = 1;
inline int Sheet_msgphpmsg::msgphpmsg_list_size() const {
  return msgphpmsg_list_.size();
}
inline void Sheet_msgphpmsg::clear_msgphpmsg_list() {
  msgphpmsg_list_.Clear();
}
inline const ::proto_ff::msgphpmsg& Sheet_msgphpmsg::msgphpmsg_list(int index) const {
  return msgphpmsg_list_.Get(index);
}
inline ::proto_ff::msgphpmsg* Sheet_msgphpmsg::mutable_msgphpmsg_list(int index) {
  return msgphpmsg_list_.Mutable(index);
}
inline ::proto_ff::msgphpmsg* Sheet_msgphpmsg::add_msgphpmsg_list() {
  return msgphpmsg_list_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::proto_ff::msgphpmsg >&
Sheet_msgphpmsg::msgphpmsg_list() const {
  return msgphpmsg_list_;
}
inline ::google::protobuf::RepeatedPtrField< ::proto_ff::msgphpmsg >*
Sheet_msgphpmsg::mutable_msgphpmsg_list() {
  return &msgphpmsg_list_;
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

#endif  // PROTOBUF_msg_2eproto__INCLUDED
