// -------------------------------------------------------------------------
//    @FileName         :    NFZeroCopyStreamWriter.h
//    @Author           :    Gao.Yi
//    @Date             :   2022-09-18
//    @Email			:    445267987@qq.com
//    @Module           :    NFPluginModule
//
// -------------------------------------------------------------------------

#pragma once

#include "NFComm/NFCore/NFPlatform.h"
#include <google/protobuf/io/zero_copy_stream.h> // ZeroCopyOutputStream
#include <iostream>

//class IOBufAsZeroCopyOutputStream
//    : public google::protobuf::io::ZeroCopyOutputStream {
//public:
//    explicit IOBufAsZeroCopyOutputStream(IOBuf*);
//
//    // Interfaces of ZeroCopyOutputStream
//    bool Next(void** data, int* size);
//    void BackUp(int count);
//    google::protobuf::int64 ByteCount() const;
//
//private:
//    IOBuf* _buf;
//    size_t _initial_length;
//};

namespace NFJson2PB {

class NFZeroCopyStreamWriter {
public:
    typedef char Ch;
    NFZeroCopyStreamWriter(google::protobuf::io::ZeroCopyOutputStream *stream)
        : _stream(stream), _data(NULL), 
          _cursor(NULL), _data_size(0) {
    }
    ~NFZeroCopyStreamWriter() {
        if (_stream && _data) {
            _stream->BackUp(RemainSize());
        }
        _stream = NULL;
    }

    void Put(char c) {
        if (__builtin_expect(AcquireNextBuf(), 1)) {
            *_cursor = c;
            ++_cursor;
        }
    }
    void PutN(char c, size_t n) {
        while (AcquireNextBuf() && n > 0) {
            size_t remain_size = RemainSize();
            size_t to_write = n > remain_size ? remain_size : n;
            memset(_cursor, c, to_write);
            _cursor += to_write;
            n -= to_write;
        }
    }
    void Puts(const char* str, size_t length) {
        while (AcquireNextBuf() && length > 0) {
            size_t remain_size = RemainSize();
            size_t to_write = length > remain_size ? remain_size : length;
            memcpy(_cursor, str, to_write);
            _cursor += to_write;
            str += to_write;
            length -= to_write;
        }
    }

    void Flush() {}

    // TODO: Add BIADU_CHECK
    char Peek() { return 0; }
    char Take() { return 0; }
    size_t Tell() { return 0; }
    char *PutBegin() { return NULL; }
    size_t PutEnd(char *) { return 0; }
private:
    bool AcquireNextBuf() {
        if (__builtin_expect(!_stream, 0)) {
            return false;
        }
        if (_data == NULL || _cursor == _data + _data_size) {
            if (!_stream->Next((void **)&_data, &_data_size)) {
                return false;
            } 
            _cursor = _data;
        }
        return true;
    }
    size_t RemainSize() {
        return _data_size - (_cursor - _data);
    }

    google::protobuf::io::ZeroCopyOutputStream *_stream;
    char *_data;
    char *_cursor;
    int _data_size;
};

}  // namespace NFJson2PB