// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/system_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
namespace perfetto {
namespace protos {
class SystemInfo;
class SystemInfoDefaultTypeInternal;
extern SystemInfoDefaultTypeInternal _SystemInfo_default_instance_;
class Utsname;
class UtsnameDefaultTypeInternal;
extern UtsnameDefaultTypeInternal _Utsname_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::SystemInfo* Arena::CreateMaybeMessage<::perfetto::protos::SystemInfo>(Arena*);
template<> ::perfetto::protos::Utsname* Arena::CreateMaybeMessage<::perfetto::protos::Utsname>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class Utsname :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.Utsname) */ {
 public:
  Utsname();
  virtual ~Utsname();

  Utsname(const Utsname& from);
  Utsname(Utsname&& from) noexcept
    : Utsname() {
    *this = ::std::move(from);
  }

  inline Utsname& operator=(const Utsname& from) {
    CopyFrom(from);
    return *this;
  }
  inline Utsname& operator=(Utsname&& from) noexcept {
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

  static const Utsname& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Utsname* internal_default_instance() {
    return reinterpret_cast<const Utsname*>(
               &_Utsname_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Utsname& a, Utsname& b) {
    a.Swap(&b);
  }
  inline void Swap(Utsname* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Utsname* New() const final {
    return CreateMaybeMessage<Utsname>(nullptr);
  }

  Utsname* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Utsname>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const Utsname& from);
  void MergeFrom(const Utsname& from);
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
  void InternalSwap(Utsname* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.Utsname";
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

  // accessors -------------------------------------------------------

  enum : int {
    kSysnameFieldNumber = 1,
    kVersionFieldNumber = 2,
    kReleaseFieldNumber = 3,
    kMachineFieldNumber = 4,
  };
  // optional string sysname = 1;
  bool has_sysname() const;
  void clear_sysname();
  const std::string& sysname() const;
  void set_sysname(const std::string& value);
  void set_sysname(std::string&& value);
  void set_sysname(const char* value);
  void set_sysname(const char* value, size_t size);
  std::string* mutable_sysname();
  std::string* release_sysname();
  void set_allocated_sysname(std::string* sysname);

  // optional string version = 2;
  bool has_version() const;
  void clear_version();
  const std::string& version() const;
  void set_version(const std::string& value);
  void set_version(std::string&& value);
  void set_version(const char* value);
  void set_version(const char* value, size_t size);
  std::string* mutable_version();
  std::string* release_version();
  void set_allocated_version(std::string* version);

  // optional string release = 3;
  bool has_release() const;
  void clear_release();
  const std::string& release() const;
  void set_release(const std::string& value);
  void set_release(std::string&& value);
  void set_release(const char* value);
  void set_release(const char* value, size_t size);
  std::string* mutable_release();
  std::string* release_release();
  void set_allocated_release(std::string* release);

  // optional string machine = 4;
  bool has_machine() const;
  void clear_machine();
  const std::string& machine() const;
  void set_machine(const std::string& value);
  void set_machine(std::string&& value);
  void set_machine(const char* value);
  void set_machine(const char* value, size_t size);
  std::string* mutable_machine();
  std::string* release_machine();
  void set_allocated_machine(std::string* machine);

  // @@protoc_insertion_point(class_scope:perfetto.protos.Utsname)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sysname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr version_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr release_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr machine_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto;
};
// -------------------------------------------------------------------

class SystemInfo :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.SystemInfo) */ {
 public:
  SystemInfo();
  virtual ~SystemInfo();

  SystemInfo(const SystemInfo& from);
  SystemInfo(SystemInfo&& from) noexcept
    : SystemInfo() {
    *this = ::std::move(from);
  }

  inline SystemInfo& operator=(const SystemInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline SystemInfo& operator=(SystemInfo&& from) noexcept {
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

  static const SystemInfo& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SystemInfo* internal_default_instance() {
    return reinterpret_cast<const SystemInfo*>(
               &_SystemInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SystemInfo& a, SystemInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(SystemInfo* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline SystemInfo* New() const final {
    return CreateMaybeMessage<SystemInfo>(nullptr);
  }

  SystemInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<SystemInfo>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)
    final;
  void CopyFrom(const SystemInfo& from);
  void MergeFrom(const SystemInfo& from);
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
  void InternalSwap(SystemInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.SystemInfo";
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

  // accessors -------------------------------------------------------

  enum : int {
    kAndroidBuildFingerprintFieldNumber = 2,
    kUtsnameFieldNumber = 1,
    kHzFieldNumber = 3,
  };
  // optional string android_build_fingerprint = 2;
  bool has_android_build_fingerprint() const;
  void clear_android_build_fingerprint();
  const std::string& android_build_fingerprint() const;
  void set_android_build_fingerprint(const std::string& value);
  void set_android_build_fingerprint(std::string&& value);
  void set_android_build_fingerprint(const char* value);
  void set_android_build_fingerprint(const char* value, size_t size);
  std::string* mutable_android_build_fingerprint();
  std::string* release_android_build_fingerprint();
  void set_allocated_android_build_fingerprint(std::string* android_build_fingerprint);

  // optional .perfetto.protos.Utsname utsname = 1;
  bool has_utsname() const;
  void clear_utsname();
  const ::perfetto::protos::Utsname& utsname() const;
  ::perfetto::protos::Utsname* release_utsname();
  ::perfetto::protos::Utsname* mutable_utsname();
  void set_allocated_utsname(::perfetto::protos::Utsname* utsname);

  // optional int64 hz = 3;
  bool has_hz() const;
  void clear_hz();
  ::PROTOBUF_NAMESPACE_ID::int64 hz() const;
  void set_hz(::PROTOBUF_NAMESPACE_ID::int64 value);

  // @@protoc_insertion_point(class_scope:perfetto.protos.SystemInfo)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr android_build_fingerprint_;
  ::perfetto::protos::Utsname* utsname_;
  ::PROTOBUF_NAMESPACE_ID::int64 hz_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Utsname

// optional string sysname = 1;
inline bool Utsname::has_sysname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Utsname::clear_sysname() {
  sysname_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Utsname::sysname() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.Utsname.sysname)
  return sysname_.GetNoArena();
}
inline void Utsname::set_sysname(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  sysname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.Utsname.sysname)
}
inline void Utsname::set_sysname(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  sysname_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.Utsname.sysname)
}
inline void Utsname::set_sysname(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  sysname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.Utsname.sysname)
}
inline void Utsname::set_sysname(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  sysname_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.Utsname.sysname)
}
inline std::string* Utsname::mutable_sysname() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.Utsname.sysname)
  return sysname_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Utsname::release_sysname() {
  // @@protoc_insertion_point(field_release:perfetto.protos.Utsname.sysname)
  if (!has_sysname()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return sysname_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Utsname::set_allocated_sysname(std::string* sysname) {
  if (sysname != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  sysname_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sysname);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.Utsname.sysname)
}

// optional string version = 2;
inline bool Utsname::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Utsname::clear_version() {
  version_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Utsname::version() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.Utsname.version)
  return version_.GetNoArena();
}
inline void Utsname::set_version(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.Utsname.version)
}
inline void Utsname::set_version(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  version_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.Utsname.version)
}
inline void Utsname::set_version(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.Utsname.version)
}
inline void Utsname::set_version(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  version_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.Utsname.version)
}
inline std::string* Utsname::mutable_version() {
  _has_bits_[0] |= 0x00000002u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.Utsname.version)
  return version_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Utsname::release_version() {
  // @@protoc_insertion_point(field_release:perfetto.protos.Utsname.version)
  if (!has_version()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return version_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Utsname::set_allocated_version(std::string* version) {
  if (version != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  version_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), version);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.Utsname.version)
}

// optional string release = 3;
inline bool Utsname::has_release() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Utsname::clear_release() {
  release_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Utsname::release() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.Utsname.release)
  return release_.GetNoArena();
}
inline void Utsname::set_release(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  release_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.Utsname.release)
}
inline void Utsname::set_release(std::string&& value) {
  _has_bits_[0] |= 0x00000004u;
  release_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.Utsname.release)
}
inline void Utsname::set_release(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000004u;
  release_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.Utsname.release)
}
inline void Utsname::set_release(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000004u;
  release_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.Utsname.release)
}
inline std::string* Utsname::mutable_release() {
  _has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.Utsname.release)
  return release_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Utsname::release_release() {
  // @@protoc_insertion_point(field_release:perfetto.protos.Utsname.release)
  if (!has_release()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  return release_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Utsname::set_allocated_release(std::string* release) {
  if (release != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  release_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), release);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.Utsname.release)
}

// optional string machine = 4;
inline bool Utsname::has_machine() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Utsname::clear_machine() {
  machine_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000008u;
}
inline const std::string& Utsname::machine() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.Utsname.machine)
  return machine_.GetNoArena();
}
inline void Utsname::set_machine(const std::string& value) {
  _has_bits_[0] |= 0x00000008u;
  machine_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.Utsname.machine)
}
inline void Utsname::set_machine(std::string&& value) {
  _has_bits_[0] |= 0x00000008u;
  machine_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.Utsname.machine)
}
inline void Utsname::set_machine(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000008u;
  machine_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.Utsname.machine)
}
inline void Utsname::set_machine(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000008u;
  machine_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.Utsname.machine)
}
inline std::string* Utsname::mutable_machine() {
  _has_bits_[0] |= 0x00000008u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.Utsname.machine)
  return machine_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Utsname::release_machine() {
  // @@protoc_insertion_point(field_release:perfetto.protos.Utsname.machine)
  if (!has_machine()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000008u;
  return machine_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Utsname::set_allocated_machine(std::string* machine) {
  if (machine != nullptr) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  machine_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), machine);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.Utsname.machine)
}

// -------------------------------------------------------------------

// SystemInfo

// optional .perfetto.protos.Utsname utsname = 1;
inline bool SystemInfo::has_utsname() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SystemInfo::clear_utsname() {
  if (utsname_ != nullptr) utsname_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
inline const ::perfetto::protos::Utsname& SystemInfo::utsname() const {
  const ::perfetto::protos::Utsname* p = utsname_;
  // @@protoc_insertion_point(field_get:perfetto.protos.SystemInfo.utsname)
  return p != nullptr ? *p : *reinterpret_cast<const ::perfetto::protos::Utsname*>(
      &::perfetto::protos::_Utsname_default_instance_);
}
inline ::perfetto::protos::Utsname* SystemInfo::release_utsname() {
  // @@protoc_insertion_point(field_release:perfetto.protos.SystemInfo.utsname)
  _has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::Utsname* temp = utsname_;
  utsname_ = nullptr;
  return temp;
}
inline ::perfetto::protos::Utsname* SystemInfo::mutable_utsname() {
  _has_bits_[0] |= 0x00000002u;
  if (utsname_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::Utsname>(GetArenaNoVirtual());
    utsname_ = p;
  }
  // @@protoc_insertion_point(field_mutable:perfetto.protos.SystemInfo.utsname)
  return utsname_;
}
inline void SystemInfo::set_allocated_utsname(::perfetto::protos::Utsname* utsname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete utsname_;
  }
  if (utsname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      utsname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, utsname, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  utsname_ = utsname;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.SystemInfo.utsname)
}

// optional string android_build_fingerprint = 2;
inline bool SystemInfo::has_android_build_fingerprint() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SystemInfo::clear_android_build_fingerprint() {
  android_build_fingerprint_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& SystemInfo::android_build_fingerprint() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SystemInfo.android_build_fingerprint)
  return android_build_fingerprint_.GetNoArena();
}
inline void SystemInfo::set_android_build_fingerprint(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  android_build_fingerprint_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:perfetto.protos.SystemInfo.android_build_fingerprint)
}
inline void SystemInfo::set_android_build_fingerprint(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  android_build_fingerprint_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:perfetto.protos.SystemInfo.android_build_fingerprint)
}
inline void SystemInfo::set_android_build_fingerprint(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  android_build_fingerprint_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:perfetto.protos.SystemInfo.android_build_fingerprint)
}
inline void SystemInfo::set_android_build_fingerprint(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  android_build_fingerprint_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:perfetto.protos.SystemInfo.android_build_fingerprint)
}
inline std::string* SystemInfo::mutable_android_build_fingerprint() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:perfetto.protos.SystemInfo.android_build_fingerprint)
  return android_build_fingerprint_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* SystemInfo::release_android_build_fingerprint() {
  // @@protoc_insertion_point(field_release:perfetto.protos.SystemInfo.android_build_fingerprint)
  if (!has_android_build_fingerprint()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return android_build_fingerprint_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void SystemInfo::set_allocated_android_build_fingerprint(std::string* android_build_fingerprint) {
  if (android_build_fingerprint != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  android_build_fingerprint_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), android_build_fingerprint);
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.SystemInfo.android_build_fingerprint)
}

// optional int64 hz = 3;
inline bool SystemInfo::has_hz() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void SystemInfo::clear_hz() {
  hz_ = PROTOBUF_LONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 SystemInfo::hz() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.SystemInfo.hz)
  return hz_;
}
inline void SystemInfo::set_hz(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _has_bits_[0] |= 0x00000004u;
  hz_ = value;
  // @@protoc_insertion_point(field_set:perfetto.protos.SystemInfo.hz)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2fsystem_5finfo_2eproto