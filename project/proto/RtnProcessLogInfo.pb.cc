// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RtnProcessLogInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "RtnProcessLogInfo.pb.h"

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

namespace machine {

namespace {

const ::google::protobuf::Descriptor* ProcessLogInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProcessLogInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_RtnProcessLogInfo_2eproto() {
  protobuf_AddDesc_RtnProcessLogInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "RtnProcessLogInfo.proto");
  GOOGLE_CHECK(file != NULL);
  ProcessLogInfo_descriptor_ = file->message_type(0);
  static const int ProcessLogInfo_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, machine_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, process_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, userid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, loginfo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, loglevel_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, ticktime_),
  };
  ProcessLogInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProcessLogInfo_descriptor_,
      ProcessLogInfo::default_instance_,
      ProcessLogInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProcessLogInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProcessLogInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_RtnProcessLogInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProcessLogInfo_descriptor_, &ProcessLogInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_RtnProcessLogInfo_2eproto() {
  delete ProcessLogInfo::default_instance_;
  delete ProcessLogInfo_reflection_;
}

void protobuf_AddDesc_RtnProcessLogInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::machine::protobuf_AddDesc_basehead_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\027RtnProcessLogInfo.proto\022\007machine\032\016base"
    "head.proto\"\243\001\n\016ProcessLogInfo\022%\n\007machine"
    "\030\001 \002(\0132\024.machine.MachineHead\022%\n\007process\030"
    "\002 \002(\0132\024.machine.ProcessHead\022\016\n\006userid\030\003 "
    "\001(\t\022\017\n\007logInfo\030\004 \003(\014\022\020\n\010loglevel\030\005 \001(\005\022\020"
    "\n\010tickTime\030\006 \001(\t", 216);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "RtnProcessLogInfo.proto", &protobuf_RegisterTypes);
  ProcessLogInfo::default_instance_ = new ProcessLogInfo();
  ProcessLogInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_RtnProcessLogInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_RtnProcessLogInfo_2eproto {
  StaticDescriptorInitializer_RtnProcessLogInfo_2eproto() {
    protobuf_AddDesc_RtnProcessLogInfo_2eproto();
  }
} static_descriptor_initializer_RtnProcessLogInfo_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProcessLogInfo::kMachineFieldNumber;
const int ProcessLogInfo::kProcessFieldNumber;
const int ProcessLogInfo::kUseridFieldNumber;
const int ProcessLogInfo::kLogInfoFieldNumber;
const int ProcessLogInfo::kLoglevelFieldNumber;
const int ProcessLogInfo::kTickTimeFieldNumber;
#endif  // !_MSC_VER

ProcessLogInfo::ProcessLogInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:machine.ProcessLogInfo)
}

void ProcessLogInfo::InitAsDefaultInstance() {
  machine_ = const_cast< ::machine::MachineHead*>(&::machine::MachineHead::default_instance());
  process_ = const_cast< ::machine::ProcessHead*>(&::machine::ProcessHead::default_instance());
}

ProcessLogInfo::ProcessLogInfo(const ProcessLogInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:machine.ProcessLogInfo)
}

void ProcessLogInfo::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  machine_ = NULL;
  process_ = NULL;
  userid_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  loglevel_ = 0;
  ticktime_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProcessLogInfo::~ProcessLogInfo() {
  // @@protoc_insertion_point(destructor:machine.ProcessLogInfo)
  SharedDtor();
}

void ProcessLogInfo::SharedDtor() {
  if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete userid_;
  }
  if (ticktime_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete ticktime_;
  }
  if (this != default_instance_) {
    delete machine_;
    delete process_;
  }
}

void ProcessLogInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProcessLogInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProcessLogInfo_descriptor_;
}

const ProcessLogInfo& ProcessLogInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_RtnProcessLogInfo_2eproto();
  return *default_instance_;
}

ProcessLogInfo* ProcessLogInfo::default_instance_ = NULL;

ProcessLogInfo* ProcessLogInfo::New() const {
  return new ProcessLogInfo;
}

void ProcessLogInfo::Clear() {
  if (_has_bits_[0 / 32] & 55) {
    if (has_machine()) {
      if (machine_ != NULL) machine_->::machine::MachineHead::Clear();
    }
    if (has_process()) {
      if (process_ != NULL) process_->::machine::ProcessHead::Clear();
    }
    if (has_userid()) {
      if (userid_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        userid_->clear();
      }
    }
    loglevel_ = 0;
    if (has_ticktime()) {
      if (ticktime_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        ticktime_->clear();
      }
    }
  }
  loginfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProcessLogInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:machine.ProcessLogInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .machine.MachineHead machine = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_machine()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_process;
        break;
      }

      // required .machine.ProcessHead process = 2;
      case 2: {
        if (tag == 18) {
         parse_process:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_process()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_userid;
        break;
      }

      // optional string userid = 3;
      case 3: {
        if (tag == 26) {
         parse_userid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_userid()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->userid().data(), this->userid().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "userid");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_logInfo;
        break;
      }

      // repeated bytes logInfo = 4;
      case 4: {
        if (tag == 34) {
         parse_logInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_loginfo()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_logInfo;
        if (input->ExpectTag(40)) goto parse_loglevel;
        break;
      }

      // optional int32 loglevel = 5;
      case 5: {
        if (tag == 40) {
         parse_loglevel:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &loglevel_)));
          set_has_loglevel();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_tickTime;
        break;
      }

      // optional string tickTime = 6;
      case 6: {
        if (tag == 50) {
         parse_tickTime:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_ticktime()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ticktime().data(), this->ticktime().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ticktime");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:machine.ProcessLogInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:machine.ProcessLogInfo)
  return false;
#undef DO_
}

void ProcessLogInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:machine.ProcessLogInfo)
  // required .machine.MachineHead machine = 1;
  if (has_machine()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->machine(), output);
  }

  // required .machine.ProcessHead process = 2;
  if (has_process()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->process(), output);
  }

  // optional string userid = 3;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "userid");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->userid(), output);
  }

  // repeated bytes logInfo = 4;
  for (int i = 0; i < this->loginfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      4, this->loginfo(i), output);
  }

  // optional int32 loglevel = 5;
  if (has_loglevel()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->loglevel(), output);
  }

  // optional string tickTime = 6;
  if (has_ticktime()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ticktime().data(), this->ticktime().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ticktime");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->ticktime(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:machine.ProcessLogInfo)
}

::google::protobuf::uint8* ProcessLogInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:machine.ProcessLogInfo)
  // required .machine.MachineHead machine = 1;
  if (has_machine()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->machine(), target);
  }

  // required .machine.ProcessHead process = 2;
  if (has_process()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->process(), target);
  }

  // optional string userid = 3;
  if (has_userid()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->userid().data(), this->userid().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "userid");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->userid(), target);
  }

  // repeated bytes logInfo = 4;
  for (int i = 0; i < this->loginfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(4, this->loginfo(i), target);
  }

  // optional int32 loglevel = 5;
  if (has_loglevel()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->loglevel(), target);
  }

  // optional string tickTime = 6;
  if (has_ticktime()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ticktime().data(), this->ticktime().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ticktime");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        6, this->ticktime(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:machine.ProcessLogInfo)
  return target;
}

int ProcessLogInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .machine.MachineHead machine = 1;
    if (has_machine()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->machine());
    }

    // required .machine.ProcessHead process = 2;
    if (has_process()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->process());
    }

    // optional string userid = 3;
    if (has_userid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->userid());
    }

    // optional int32 loglevel = 5;
    if (has_loglevel()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->loglevel());
    }

    // optional string tickTime = 6;
    if (has_ticktime()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->ticktime());
    }

  }
  // repeated bytes logInfo = 4;
  total_size += 1 * this->loginfo_size();
  for (int i = 0; i < this->loginfo_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->loginfo(i));
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

void ProcessLogInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProcessLogInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProcessLogInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProcessLogInfo::MergeFrom(const ProcessLogInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  loginfo_.MergeFrom(from.loginfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_machine()) {
      mutable_machine()->::machine::MachineHead::MergeFrom(from.machine());
    }
    if (from.has_process()) {
      mutable_process()->::machine::ProcessHead::MergeFrom(from.process());
    }
    if (from.has_userid()) {
      set_userid(from.userid());
    }
    if (from.has_loglevel()) {
      set_loglevel(from.loglevel());
    }
    if (from.has_ticktime()) {
      set_ticktime(from.ticktime());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProcessLogInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProcessLogInfo::CopyFrom(const ProcessLogInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProcessLogInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (has_machine()) {
    if (!this->machine().IsInitialized()) return false;
  }
  if (has_process()) {
    if (!this->process().IsInitialized()) return false;
  }
  return true;
}

void ProcessLogInfo::Swap(ProcessLogInfo* other) {
  if (other != this) {
    std::swap(machine_, other->machine_);
    std::swap(process_, other->process_);
    std::swap(userid_, other->userid_);
    loginfo_.Swap(&other->loginfo_);
    std::swap(loglevel_, other->loglevel_);
    std::swap(ticktime_, other->ticktime_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProcessLogInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProcessLogInfo_descriptor_;
  metadata.reflection = ProcessLogInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace machine

// @@protoc_insertion_point(global_scope)
