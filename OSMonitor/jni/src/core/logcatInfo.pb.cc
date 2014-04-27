// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: logcatInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "logcatInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

namespace {

const ::google::protobuf::Descriptor* logcatInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  logcatInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* logcatInfo_logPriority_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_logcatInfo_2eproto() {
  protobuf_AddDesc_logcatInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "logcatInfo.proto");
  GOOGLE_CHECK(file != NULL);
  logcatInfo_descriptor_ = file->message_type(0);
  static const int logcatInfo_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, priority_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, nanoseconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, pid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, tid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, tag_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, message_),
  };
  logcatInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      logcatInfo_descriptor_,
      logcatInfo::default_instance_,
      logcatInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(logcatInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(logcatInfo));
  logcatInfo_logPriority_descriptor_ = logcatInfo_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_logcatInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    logcatInfo_descriptor_, &logcatInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_logcatInfo_2eproto() {
  delete logcatInfo::default_instance_;
  delete logcatInfo_reflection_;
}

void protobuf_AddDesc_logcatInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020logcatInfo.proto\022\032com.eolwral.osmonito"
    "r.core\"\260\002\n\nlogcatInfo\022M\n\010priority\030\001 \002(\0162"
    "2.com.eolwral.osmonitor.core.logcatInfo."
    "logPriority:\007UNKNOWN\022\017\n\007seconds\030\002 \002(\004\022\023\n"
    "\013nanoSeconds\030\003 \002(\004\022\013\n\003pid\030\004 \002(\r\022\013\n\003tid\030\005"
    " \002(\r\022\013\n\003tag\030\006 \002(\t\022\017\n\007message\030\007 \002(\t\"u\n\013lo"
    "gPriority\022\013\n\007UNKNOWN\020\000\022\013\n\007DEFAULT\020\001\022\013\n\007V"
    "ERBOSE\020\002\022\t\n\005DEBUG\020\003\022\010\n\004INFO\020\004\022\010\n\004WARN\020\005\022"
    "\t\n\005ERROR\020\006\022\t\n\005FATAL\020\007\022\n\n\006SILENT\020\010", 353);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "logcatInfo.proto", &protobuf_RegisterTypes);
  logcatInfo::default_instance_ = new logcatInfo();
  logcatInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_logcatInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_logcatInfo_2eproto {
  StaticDescriptorInitializer_logcatInfo_2eproto() {
    protobuf_AddDesc_logcatInfo_2eproto();
  }
} static_descriptor_initializer_logcatInfo_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* logcatInfo_logPriority_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return logcatInfo_logPriority_descriptor_;
}
bool logcatInfo_logPriority_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const logcatInfo_logPriority logcatInfo::UNKNOWN;
const logcatInfo_logPriority logcatInfo::DEFAULT;
const logcatInfo_logPriority logcatInfo::VERBOSE;
const logcatInfo_logPriority logcatInfo::DEBUG;
const logcatInfo_logPriority logcatInfo::INFO;
const logcatInfo_logPriority logcatInfo::WARN;
const logcatInfo_logPriority logcatInfo::ERROR;
const logcatInfo_logPriority logcatInfo::FATAL;
const logcatInfo_logPriority logcatInfo::SILENT;
const logcatInfo_logPriority logcatInfo::logPriority_MIN;
const logcatInfo_logPriority logcatInfo::logPriority_MAX;
const int logcatInfo::logPriority_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int logcatInfo::kPriorityFieldNumber;
const int logcatInfo::kSecondsFieldNumber;
const int logcatInfo::kNanoSecondsFieldNumber;
const int logcatInfo::kPidFieldNumber;
const int logcatInfo::kTidFieldNumber;
const int logcatInfo::kTagFieldNumber;
const int logcatInfo::kMessageFieldNumber;
#endif  // !_MSC_VER

logcatInfo::logcatInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void logcatInfo::InitAsDefaultInstance() {
}

logcatInfo::logcatInfo(const logcatInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void logcatInfo::SharedCtor() {
  _cached_size_ = 0;
  priority_ = 0;
  seconds_ = GOOGLE_ULONGLONG(0);
  nanoseconds_ = GOOGLE_ULONGLONG(0);
  pid_ = 0u;
  tid_ = 0u;
  tag_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

logcatInfo::~logcatInfo() {
  SharedDtor();
}

void logcatInfo::SharedDtor() {
  if (tag_ != &::google::protobuf::internal::kEmptyString) {
    delete tag_;
  }
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void logcatInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* logcatInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return logcatInfo_descriptor_;
}

const logcatInfo& logcatInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_logcatInfo_2eproto();
  return *default_instance_;
}

logcatInfo* logcatInfo::default_instance_ = NULL;

logcatInfo* logcatInfo::New() const {
  return new logcatInfo;
}

void logcatInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    priority_ = 0;
    seconds_ = GOOGLE_ULONGLONG(0);
    nanoseconds_ = GOOGLE_ULONGLONG(0);
    pid_ = 0u;
    tid_ = 0u;
    if (has_tag()) {
      if (tag_ != &::google::protobuf::internal::kEmptyString) {
        tag_->clear();
      }
    }
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool logcatInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::com::eolwral::osmonitor::core::logcatInfo_logPriority_IsValid(value)) {
            set_priority(static_cast< ::com::eolwral::osmonitor::core::logcatInfo_logPriority >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_seconds;
        break;
      }

      // required uint64 seconds = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seconds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seconds_)));
          set_has_seconds();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_nanoSeconds;
        break;
      }

      // required uint64 nanoSeconds = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_nanoSeconds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &nanoseconds_)));
          set_has_nanoseconds();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_pid;
        break;
      }

      // required uint32 pid = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_pid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &pid_)));
          set_has_pid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_tid;
        break;
      }

      // required uint32 tid = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_tid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &tid_)));
          set_has_tid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(50)) goto parse_tag;
        break;
      }

      // required string tag = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_tag:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tag()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->tag().data(), this->tag().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(58)) goto parse_message;
        break;
      }

      // required string message = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void logcatInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
  if (has_priority()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->priority(), output);
  }

  // required uint64 seconds = 2;
  if (has_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->seconds(), output);
  }

  // required uint64 nanoSeconds = 3;
  if (has_nanoseconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->nanoseconds(), output);
  }

  // required uint32 pid = 4;
  if (has_pid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(4, this->pid(), output);
  }

  // required uint32 tid = 5;
  if (has_tid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->tid(), output);
  }

  // required string tag = 6;
  if (has_tag()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tag().data(), this->tag().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      6, this->tag(), output);
  }

  // required string message = 7;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* logcatInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
  if (has_priority()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->priority(), target);
  }

  // required uint64 seconds = 2;
  if (has_seconds()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->seconds(), target);
  }

  // required uint64 nanoSeconds = 3;
  if (has_nanoseconds()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->nanoseconds(), target);
  }

  // required uint32 pid = 4;
  if (has_pid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(4, this->pid(), target);
  }

  // required uint32 tid = 5;
  if (has_tid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->tid(), target);
  }

  // required string tag = 6;
  if (has_tag()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->tag().data(), this->tag().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->tag(), target);
  }

  // required string message = 7;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int logcatInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .com.eolwral.osmonitor.core.logcatInfo.logPriority priority = 1 [default = UNKNOWN];
    if (has_priority()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->priority());
    }

    // required uint64 seconds = 2;
    if (has_seconds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->seconds());
    }

    // required uint64 nanoSeconds = 3;
    if (has_nanoseconds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->nanoseconds());
    }

    // required uint32 pid = 4;
    if (has_pid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->pid());
    }

    // required uint32 tid = 5;
    if (has_tid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->tid());
    }

    // required string tag = 6;
    if (has_tag()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tag());
    }

    // required string message = 7;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void logcatInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const logcatInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const logcatInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void logcatInfo::MergeFrom(const logcatInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_priority()) {
      set_priority(from.priority());
    }
    if (from.has_seconds()) {
      set_seconds(from.seconds());
    }
    if (from.has_nanoseconds()) {
      set_nanoseconds(from.nanoseconds());
    }
    if (from.has_pid()) {
      set_pid(from.pid());
    }
    if (from.has_tid()) {
      set_tid(from.tid());
    }
    if (from.has_tag()) {
      set_tag(from.tag());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void logcatInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void logcatInfo::CopyFrom(const logcatInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool logcatInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void logcatInfo::Swap(logcatInfo* other) {
  if (other != this) {
    std::swap(priority_, other->priority_);
    std::swap(seconds_, other->seconds_);
    std::swap(nanoseconds_, other->nanoseconds_);
    std::swap(pid_, other->pid_);
    std::swap(tid_, other->tid_);
    std::swap(tag_, other->tag_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata logcatInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = logcatInfo_descriptor_;
  metadata.reflection = logcatInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

// @@protoc_insertion_point(global_scope)
