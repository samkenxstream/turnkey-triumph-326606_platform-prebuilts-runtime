// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/process_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class ProcessDescriptor;
class ProcessDescriptorDefaultTypeInternal;
extern ProcessDescriptorDefaultTypeInternal _ProcessDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ProcessDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::ProcessDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

enum ProcessDescriptor_ChromeProcessType : int {
  ProcessDescriptor_ChromeProcessType_PROCESS_UNSPECIFIED = 0,
  ProcessDescriptor_ChromeProcessType_PROCESS_BROWSER = 1,
  ProcessDescriptor_ChromeProcessType_PROCESS_RENDERER = 2,
  ProcessDescriptor_ChromeProcessType_PROCESS_UTILITY = 3,
  ProcessDescriptor_ChromeProcessType_PROCESS_ZYGOTE = 4,
  ProcessDescriptor_ChromeProcessType_PROCESS_SANDBOX_HELPER = 5,
  ProcessDescriptor_ChromeProcessType_PROCESS_GPU = 6,
  ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_PLUGIN = 7,
  ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_BROKER = 8
};
bool ProcessDescriptor_ChromeProcessType_IsValid(int value);
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor_ChromeProcessType_ChromeProcessType_MIN = ProcessDescriptor_ChromeProcessType_PROCESS_UNSPECIFIED;
constexpr ProcessDescriptor_ChromeProcessType ProcessDescriptor_ChromeProcessType_ChromeProcessType_MAX = ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_BROKER;
constexpr int ProcessDescriptor_ChromeProcessType_ChromeProcessType_ARRAYSIZE = ProcessDescriptor_ChromeProcessType_ChromeProcessType_MAX + 1;

const std::string& ProcessDescriptor_ChromeProcessType_Name(ProcessDescriptor_ChromeProcessType value);
template<typename T>
inline const std::string& ProcessDescriptor_ChromeProcessType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProcessDescriptor_ChromeProcessType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProcessDescriptor_ChromeProcessType_Name.");
  return ProcessDescriptor_ChromeProcessType_Name(static_cast<ProcessDescriptor_ChromeProcessType>(enum_t_value));
}
bool ProcessDescriptor_ChromeProcessType_Parse(
    const std::string& name, ProcessDescriptor_ChromeProcessType* value);
// ===================================================================

class ProcessDescriptor :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ProcessDescriptor) */ {
 public:
  ProcessDescriptor();
  virtual ~ProcessDescriptor();

  ProcessDescriptor(const ProcessDescriptor& from);
  ProcessDescriptor(ProcessDescriptor&& from) noexcept
    : ProcessDescriptor() {
    *this = ::std::move(from);
  }

  inline ProcessDescriptor& operator=(const ProcessDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProcessDescriptor& operator=(ProcessDescriptor&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ProcessDescriptor& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProcessDescriptor* internal_default_instance() {
    return reinterpret_cast<const ProcessDescriptor*>(
               &_ProcessDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProcessDescriptor& a, ProcessDescriptor& b) {
    a.Swap(&b);
  }
  inline void Swap(ProcessDescriptor* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ProcessDescriptor* New() const final {
    return CreateMaybeMessage<ProcessDescriptor>(nullptr);
  }

  ProcessDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProcessDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const ProcessDescriptor& from);
  void MergeFrom(const ProcessDescriptor& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  void DiscardUnknownFields();
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ProcessDescriptor* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ProcessDescriptor";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ProcessDescriptor_ChromeProcessType ChromeProcessType;
  static constexpr ChromeProcessType PROCESS_UNSPECIFIED =
    ProcessDescriptor_ChromeProcessType_PROCESS_UNSPECIFIED;
  static constexpr ChromeProcessType PROCESS_BROWSER =
    ProcessDescriptor_ChromeProcessType_PROCESS_BROWSER;
  static constexpr ChromeProcessType PROCESS_RENDERER =
    ProcessDescriptor_ChromeProcessType_PROCESS_RENDERER;
  static constexpr ChromeProcessType PROCESS_UTILITY =
    ProcessDescriptor_ChromeProcessType_PROCESS_UTILITY;
  static constexpr ChromeProcessType PROCESS_ZYGOTE =
    ProcessDescriptor_ChromeProcessType_PROCESS_ZYGOTE;
  static constexpr ChromeProcessType PROCESS_SANDBOX_HELPER =
    ProcessDescriptor_ChromeProcessType_PROCESS_SANDBOX_HELPER;
  static constexpr ChromeProcessType PROCESS_GPU =
    ProcessDescriptor_ChromeProcessType_PROCESS_GPU;
  static constexpr ChromeProcessType PROCESS_PPAPI_PLUGIN =
    ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_PLUGIN;
  static constexpr ChromeProcessType PROCESS_PPAPI_BROKER =
    ProcessDescriptor_ChromeProcessType_PROCESS_PPAPI_BROKER;
  static inline bool ChromeProcessType_IsValid(int value) {
    return ProcessDescriptor_ChromeProcessType_IsValid(value);
  }
  static constexpr ChromeProcessType ChromeProcessType_MIN =
    ProcessDescriptor_ChromeProcessType_ChromeProcessType_MIN;
  static constexpr ChromeProcessType ChromeProcessType_MAX =
    ProcessDescriptor_ChromeProcessType_ChromeProcessType_MAX;
  static constexpr int ChromeProcessType_ARRAYSIZE =
    ProcessDescriptor_ChromeProcessType_ChromeProcessType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& ChromeProcessType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ChromeProcessType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ChromeProcessType_Name.");
    return ProcessDescriptor_ChromeProcessType_Name(enum_t_value);
  }
  static inline bool ChromeProcessType_Parse(const std::string& name,
      ChromeProcessType* value) {
    return ProcessDescriptor_ChromeProcessType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCmdlineFieldNumber = 2,
    kProcessNameFieldNumber = 6,
    kPidFieldNumber = 1,
    kLegacySortIndexFieldNumber = 3,
    kChromeProcessTypeFieldNumber = 4,
    kProcessPriorityFieldNumber = 5,
    kStartTimestampNsFieldNumber = 7,
  };
  // repeated string cmdline = 2;
  int cmdline_size() const;
  void clear_cmdline();
  const std::string& cmdline(int index) const;
  std::string* mutable_cmdline(int index);
  void set_cmdline(int index, const std::string& value);
  void set_cmdline(int index, std::string&& value);
  void set_cmdline(int index, const char* value);
  void set_cmdline(int index, const char* value, size_t size);
  std::string* add_cmdline();
  void add_cmdline(const std::string& value);
  void add_cmdline(std::string&& value);
  void add_cmdline(const char* value);
  void add_cmdline(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& cmdline() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_cmdline();

  // optional string process_name = 6;
  bool has_process_name() const;
  void clear_process_name();
  const std::string& process_name() const;
  void set_process_name(const std::string& value);
  void set_process_name(std::string&& value);
  void set_process_name(const char* value);
  void set_process_name(const char* value, size_t size);
  std::string* mutable_process_name();
  std::string* release_process_name();
  void set_allocated_process_name(std::string* process_name);

  // optional int32 pid = 1;
  bool has_pid() const;
  void clear_pid();
  ::PROTOBUF_NAMESPACE_ID::int32 pid() const;
  void set_pid(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int32 legacy_sort_index = 3;
  bool has_legacy_sort_index() const;
  void clear_legacy_sort_index();
  ::PROTOBUF_NAMESPACE_ID::int32 legacy_sort_index() const;
  void set_legacy_sort_index(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
  bool has_chrome_process_type() const;
  void clear_chrome_process_type();
  ::perfetto::protos::ProcessDescriptor_ChromeProcessType chrome_process_type() const;
  void set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value);

  // optional int32 process_priority = 5;
  bool has_process_priority() const;
  void clear_process_priority();
  ::PROTOBUF_NAMESPACE_ID::int32 process_priority() const;
  void set_process_priority(::PROTOBUF_NAMESPACE_ID::int32 value);

  // optional int64 start_timestamp_ns = 7;
  bool has_start_timestamp_ns() const;
  void clear_start_timestamp_ns();
  ::PROTOBUF_NAMESPACE_ID::int64 start_timestamp_ns() const;
  void set_start_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.ProcessDescriptor)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> cmdline_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr process_name_;
  ::PROTOBUF_NAMESPACE_ID::int32 pid_;
  ::PROTOBUF_NAMESPACE_ID::int32 legacy_sort_index_;
  int chrome_process_type_;
  ::PROTOBUF_NAMESPACE_ID::int32 process_priority_;
  ::PROTOBUF_NAMESPACE_ID::int64 start_timestamp_ns_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProcessDescriptor

// optional int32 pid = 1;
inline bool ProcessDescriptor::has_pid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ProcessDescriptor::clear_pid() {
  pid_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ProcessDescriptor::pid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.pid)
  return pid_;
}
inline void ProcessDescriptor::set_pid(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  pid_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.pid)
}

// repeated string cmdline = 2;
inline int ProcessDescriptor::cmdline_size() const {
  return cmdline_.size();
}
inline void ProcessDescriptor::clear_cmdline() {
  cmdline_.Clear();
}
inline const std::string& ProcessDescriptor::cmdline(int index) const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.cmdline)
  return cmdline_.Get(index);
}
inline std::string* ProcessDescriptor::mutable_cmdline(int index) {
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ProcessDescriptor.cmdline)
  return cmdline_.Mutable(index);
}
inline void ProcessDescriptor::set_cmdline(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.cmdline)
  cmdline_.Mutable(index)->assign(value);
}
inline void ProcessDescriptor::set_cmdline(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.cmdline)
  cmdline_.Mutable(index)->assign(std::move(value));
}
inline void ProcessDescriptor::set_cmdline(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  cmdline_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::set_cmdline(int index, const char* value, size_t size) {
  cmdline_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ProcessDescriptor.cmdline)
}
inline std::string* ProcessDescriptor::add_cmdline() {
  // @@protoc_insertion_point(field_add_mutable:perfetto.protos.ProcessDescriptor.cmdline)
  return cmdline_.Add();
}
inline void ProcessDescriptor::add_cmdline(const std::string& value) {
  cmdline_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(std::string&& value) {
  cmdline_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  cmdline_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:perfetto.protos.ProcessDescriptor.cmdline)
}
inline void ProcessDescriptor::add_cmdline(const char* value, size_t size) {
  cmdline_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:perfetto.protos.ProcessDescriptor.cmdline)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ProcessDescriptor::cmdline() const {
  // @@protoc_insertion_point(field_list:perfetto.protos.ProcessDescriptor.cmdline)
  return cmdline_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ProcessDescriptor::mutable_cmdline() {
  // @@protoc_insertion_point(field_mutable_list:perfetto.protos.ProcessDescriptor.cmdline)
  return &cmdline_;
}

// optional string process_name = 6;
inline bool ProcessDescriptor::has_process_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ProcessDescriptor::clear_process_name() {
  process_name_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ProcessDescriptor::process_name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.process_name)
  return process_name_.GetNoArena();
}
inline void ProcessDescriptor::set_process_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  process_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_name)
}
inline void ProcessDescriptor::set_process_name(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  process_name_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.ProcessDescriptor.process_name)
}
inline void ProcessDescriptor::set_process_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  process_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.ProcessDescriptor.process_name)
}
inline void ProcessDescriptor::set_process_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  process_name_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.ProcessDescriptor.process_name)
}
inline std::string* ProcessDescriptor::mutable_process_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.ProcessDescriptor.process_name)
  return process_name_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* ProcessDescriptor::release_process_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.ProcessDescriptor.process_name)
  if (!has_process_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return process_name_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void ProcessDescriptor::set_allocated_process_name(std::string* process_name) {
  if (process_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  process_name_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), process_name);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.ProcessDescriptor.process_name)
}

// optional int32 process_priority = 5;
inline bool ProcessDescriptor::has_process_priority() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void ProcessDescriptor::clear_process_priority() {
  process_priority_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ProcessDescriptor::process_priority() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.process_priority)
  return process_priority_;
}
inline void ProcessDescriptor::set_process_priority(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000010u;
  process_priority_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.process_priority)
}

// optional int64 start_timestamp_ns = 7;
inline bool ProcessDescriptor::has_start_timestamp_ns() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void ProcessDescriptor::clear_start_timestamp_ns() {
  start_timestamp_ns_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000020u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 ProcessDescriptor::start_timestamp_ns() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.start_timestamp_ns)
  return start_timestamp_ns_;
}
inline void ProcessDescriptor::set_start_timestamp_ns(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000020u;
  start_timestamp_ns_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.start_timestamp_ns)
}

// optional .perfetto.protos.ProcessDescriptor.ChromeProcessType chrome_process_type = 4;
inline bool ProcessDescriptor::has_chrome_process_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ProcessDescriptor::clear_chrome_process_type() {
  chrome_process_type_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::perfetto::protos::ProcessDescriptor_ChromeProcessType ProcessDescriptor::chrome_process_type() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.chrome_process_type)
  return static_cast< ::perfetto::protos::ProcessDescriptor_ChromeProcessType >(chrome_process_type_);
}
inline void ProcessDescriptor::set_chrome_process_type(::perfetto::protos::ProcessDescriptor_ChromeProcessType value) {
  assert(::perfetto::protos::ProcessDescriptor_ChromeProcessType_IsValid(value));
  _has_bits_[0] |= 0x00000008u;
  chrome_process_type_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.chrome_process_type)
}

// optional int32 legacy_sort_index = 3;
inline bool ProcessDescriptor::has_legacy_sort_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ProcessDescriptor::clear_legacy_sort_index() {
  legacy_sort_index_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 ProcessDescriptor::legacy_sort_index() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ProcessDescriptor.legacy_sort_index)
  return legacy_sort_index_;
}
inline void ProcessDescriptor::set_legacy_sort_index(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000004u;
  legacy_sort_index_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.ProcessDescriptor.legacy_sort_index)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::perfetto::protos::ProcessDescriptor_ChromeProcessType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fprocess_5fdescriptor_2eproto