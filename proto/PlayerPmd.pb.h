// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerPmd.proto

#ifndef PROTOBUF_INCLUDED_PlayerPmd_2eproto
#define PROTOBUF_INCLUDED_PlayerPmd_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "Types.pb.h"
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_PlayerPmd_2eproto 

namespace protobuf_PlayerPmd_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_PlayerPmd_2eproto
namespace PlatPmd {
class PlayerPmd;
class PlayerPmdDefaultTypeInternal;
extern PlayerPmdDefaultTypeInternal _PlayerPmd_default_instance_;
class SelfInfoPlayerPmd_C2S;
class SelfInfoPlayerPmd_C2SDefaultTypeInternal;
extern SelfInfoPlayerPmd_C2SDefaultTypeInternal _SelfInfoPlayerPmd_C2S_default_instance_;
}  // namespace PlatPmd
namespace google {
namespace protobuf {
template<> ::PlatPmd::PlayerPmd* Arena::CreateMaybeMessage<::PlatPmd::PlayerPmd>(Arena*);
template<> ::PlatPmd::SelfInfoPlayerPmd_C2S* Arena::CreateMaybeMessage<::PlatPmd::SelfInfoPlayerPmd_C2S>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace PlatPmd {

enum PlayerPmd_Param {
  PlayerPmd_Param_SelfInfoPlayerPmd_C2S = 0,
  PlayerPmd_Param_PlayerPmd_Param_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  PlayerPmd_Param_PlayerPmd_Param_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool PlayerPmd_Param_IsValid(int value);
const PlayerPmd_Param PlayerPmd_Param_Param_MIN = PlayerPmd_Param_SelfInfoPlayerPmd_C2S;
const PlayerPmd_Param PlayerPmd_Param_Param_MAX = PlayerPmd_Param_SelfInfoPlayerPmd_C2S;
const int PlayerPmd_Param_Param_ARRAYSIZE = PlayerPmd_Param_Param_MAX + 1;

const ::google::protobuf::EnumDescriptor* PlayerPmd_Param_descriptor();
inline const ::std::string& PlayerPmd_Param_Name(PlayerPmd_Param value) {
  return ::google::protobuf::internal::NameOfEnum(
    PlayerPmd_Param_descriptor(), value);
}
inline bool PlayerPmd_Param_Parse(
    const ::std::string& name, PlayerPmd_Param* value) {
  return ::google::protobuf::internal::ParseNamedEnum<PlayerPmd_Param>(
    PlayerPmd_Param_descriptor(), name, value);
}
// ===================================================================

class PlayerPmd : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PlatPmd.PlayerPmd) */ {
 public:
  PlayerPmd();
  virtual ~PlayerPmd();

  PlayerPmd(const PlayerPmd& from);

  inline PlayerPmd& operator=(const PlayerPmd& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  PlayerPmd(PlayerPmd&& from) noexcept
    : PlayerPmd() {
    *this = ::std::move(from);
  }

  inline PlayerPmd& operator=(PlayerPmd&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const PlayerPmd& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const PlayerPmd* internal_default_instance() {
    return reinterpret_cast<const PlayerPmd*>(
               &_PlayerPmd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(PlayerPmd* other);
  friend void swap(PlayerPmd& a, PlayerPmd& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline PlayerPmd* New() const final {
    return CreateMaybeMessage<PlayerPmd>(NULL);
  }

  PlayerPmd* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<PlayerPmd>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const PlayerPmd& from);
  void MergeFrom(const PlayerPmd& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PlayerPmd* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PlayerPmd_Param Param;
  static const Param SelfInfoPlayerPmd_C2S =
    PlayerPmd_Param_SelfInfoPlayerPmd_C2S;
  static inline bool Param_IsValid(int value) {
    return PlayerPmd_Param_IsValid(value);
  }
  static const Param Param_MIN =
    PlayerPmd_Param_Param_MIN;
  static const Param Param_MAX =
    PlayerPmd_Param_Param_MAX;
  static const int Param_ARRAYSIZE =
    PlayerPmd_Param_Param_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Param_descriptor() {
    return PlayerPmd_Param_descriptor();
  }
  static inline const ::std::string& Param_Name(Param value) {
    return PlayerPmd_Param_Name(value);
  }
  static inline bool Param_Parse(const ::std::string& name,
      Param* value) {
    return PlayerPmd_Param_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:PlatPmd.PlayerPmd)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_PlayerPmd_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class SelfInfoPlayerPmd_C2S : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:PlatPmd.SelfInfoPlayerPmd_C2S) */ {
 public:
  SelfInfoPlayerPmd_C2S();
  virtual ~SelfInfoPlayerPmd_C2S();

  SelfInfoPlayerPmd_C2S(const SelfInfoPlayerPmd_C2S& from);

  inline SelfInfoPlayerPmd_C2S& operator=(const SelfInfoPlayerPmd_C2S& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  SelfInfoPlayerPmd_C2S(SelfInfoPlayerPmd_C2S&& from) noexcept
    : SelfInfoPlayerPmd_C2S() {
    *this = ::std::move(from);
  }

  inline SelfInfoPlayerPmd_C2S& operator=(SelfInfoPlayerPmd_C2S&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const SelfInfoPlayerPmd_C2S& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const SelfInfoPlayerPmd_C2S* internal_default_instance() {
    return reinterpret_cast<const SelfInfoPlayerPmd_C2S*>(
               &_SelfInfoPlayerPmd_C2S_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(SelfInfoPlayerPmd_C2S* other);
  friend void swap(SelfInfoPlayerPmd_C2S& a, SelfInfoPlayerPmd_C2S& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline SelfInfoPlayerPmd_C2S* New() const final {
    return CreateMaybeMessage<SelfInfoPlayerPmd_C2S>(NULL);
  }

  SelfInfoPlayerPmd_C2S* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<SelfInfoPlayerPmd_C2S>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const SelfInfoPlayerPmd_C2S& from);
  void MergeFrom(const SelfInfoPlayerPmd_C2S& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(SelfInfoPlayerPmd_C2S* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .Types.P_Player player = 1;
  bool has_player() const;
  void clear_player();
  static const int kPlayerFieldNumber = 1;
  private:
  const ::Types::P_Player& _internal_player() const;
  public:
  const ::Types::P_Player& player() const;
  ::Types::P_Player* release_player();
  ::Types::P_Player* mutable_player();
  void set_allocated_player(::Types::P_Player* player);

  // @@protoc_insertion_point(class_scope:PlatPmd.SelfInfoPlayerPmd_C2S)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::Types::P_Player* player_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_PlayerPmd_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PlayerPmd

// -------------------------------------------------------------------

// SelfInfoPlayerPmd_C2S

// .Types.P_Player player = 1;
inline bool SelfInfoPlayerPmd_C2S::has_player() const {
  return this != internal_default_instance() && player_ != NULL;
}
inline const ::Types::P_Player& SelfInfoPlayerPmd_C2S::_internal_player() const {
  return *player_;
}
inline const ::Types::P_Player& SelfInfoPlayerPmd_C2S::player() const {
  const ::Types::P_Player* p = player_;
  // @@protoc_insertion_point(field_get:PlatPmd.SelfInfoPlayerPmd_C2S.player)
  return p != NULL ? *p : *reinterpret_cast<const ::Types::P_Player*>(
      &::Types::_P_Player_default_instance_);
}
inline ::Types::P_Player* SelfInfoPlayerPmd_C2S::release_player() {
  // @@protoc_insertion_point(field_release:PlatPmd.SelfInfoPlayerPmd_C2S.player)
  
  ::Types::P_Player* temp = player_;
  player_ = NULL;
  return temp;
}
inline ::Types::P_Player* SelfInfoPlayerPmd_C2S::mutable_player() {
  
  if (player_ == NULL) {
    auto* p = CreateMaybeMessage<::Types::P_Player>(GetArenaNoVirtual());
    player_ = p;
  }
  // @@protoc_insertion_point(field_mutable:PlatPmd.SelfInfoPlayerPmd_C2S.player)
  return player_;
}
inline void SelfInfoPlayerPmd_C2S::set_allocated_player(::Types::P_Player* player) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete reinterpret_cast< ::google::protobuf::MessageLite*>(player_);
  }
  if (player) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      player = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, player, submessage_arena);
    }
    
  } else {
    
  }
  player_ = player;
  // @@protoc_insertion_point(field_set_allocated:PlatPmd.SelfInfoPlayerPmd_C2S.player)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace PlatPmd

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::PlatPmd::PlayerPmd_Param> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PlatPmd::PlayerPmd_Param>() {
  return ::PlatPmd::PlayerPmd_Param_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_PlayerPmd_2eproto
