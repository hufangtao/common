// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Types.proto

#include "Types.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace Types {
class P_PlayerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<P_Player>
      _instance;
} _P_Player_default_instance_;
}  // namespace Types
namespace protobuf_Types_2eproto {
static void InitDefaultsP_Player() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::Types::_P_Player_default_instance_;
    new (ptr) ::Types::P_Player();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::Types::P_Player::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_P_Player =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsP_Player}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_P_Player.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Types::P_Player, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Types::P_Player, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Types::P_Player, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Types::P_Player, sex_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::Types::P_Player, head_img_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::Types::P_Player)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::Types::_P_Player_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Types.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013Types.proto\022\005Types\"C\n\010P_Player\022\n\n\002id\030\001"
      " \001(\005\022\014\n\004name\030\002 \001(\t\022\013\n\003sex\030\003 \001(\005\022\020\n\010head_"
      "img\030\004 \001(\tb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 97);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Types.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Types_2eproto
namespace Types {

// ===================================================================

void P_Player::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int P_Player::kIdFieldNumber;
const int P_Player::kNameFieldNumber;
const int P_Player::kSexFieldNumber;
const int P_Player::kHeadImgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

P_Player::P_Player()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_Types_2eproto::scc_info_P_Player.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:Types.P_Player)
}
P_Player::P_Player(const P_Player& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  head_img_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.head_img().size() > 0) {
    head_img_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.head_img_);
  }
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&sex_) -
    reinterpret_cast<char*>(&id_)) + sizeof(sex_));
  // @@protoc_insertion_point(copy_constructor:Types.P_Player)
}

void P_Player::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  head_img_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&id_)) + sizeof(sex_));
}

P_Player::~P_Player() {
  // @@protoc_insertion_point(destructor:Types.P_Player)
  SharedDtor();
}

void P_Player::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  head_img_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void P_Player::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* P_Player::descriptor() {
  ::protobuf_Types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Types_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const P_Player& P_Player::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_Types_2eproto::scc_info_P_Player.base);
  return *internal_default_instance();
}


void P_Player::Clear() {
// @@protoc_insertion_point(message_clear_start:Types.P_Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  head_img_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sex_) -
      reinterpret_cast<char*>(&id_)) + sizeof(sex_));
  _internal_metadata_.Clear();
}

bool P_Player::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Types.P_Player)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int32 id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string name = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Types.P_Player.name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sex = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sex_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string head_img = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_head_img()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->head_img().data(), static_cast<int>(this->head_img().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Types.P_Player.head_img"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Types.P_Player)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Types.P_Player)
  return false;
#undef DO_
}

void P_Player::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Types.P_Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Types.P_Player.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // int32 sex = 3;
  if (this->sex() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sex(), output);
  }

  // string head_img = 4;
  if (this->head_img().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->head_img().data(), static_cast<int>(this->head_img().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Types.P_Player.head_img");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->head_img(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:Types.P_Player)
}

::google::protobuf::uint8* P_Player::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:Types.P_Player)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // string name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Types.P_Player.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // int32 sex = 3;
  if (this->sex() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sex(), target);
  }

  // string head_img = 4;
  if (this->head_img().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->head_img().data(), static_cast<int>(this->head_img().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Types.P_Player.head_img");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->head_img(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Types.P_Player)
  return target;
}

size_t P_Player::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Types.P_Player)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // string head_img = 4;
  if (this->head_img().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->head_img());
  }

  // int32 id = 1;
  if (this->id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  // int32 sex = 3;
  if (this->sex() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sex());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void P_Player::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:Types.P_Player)
  GOOGLE_DCHECK_NE(&from, this);
  const P_Player* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const P_Player>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:Types.P_Player)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:Types.P_Player)
    MergeFrom(*source);
  }
}

void P_Player::MergeFrom(const P_Player& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Types.P_Player)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.head_img().size() > 0) {

    head_img_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.head_img_);
  }
  if (from.id() != 0) {
    set_id(from.id());
  }
  if (from.sex() != 0) {
    set_sex(from.sex());
  }
}

void P_Player::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:Types.P_Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void P_Player::CopyFrom(const P_Player& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Types.P_Player)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool P_Player::IsInitialized() const {
  return true;
}

void P_Player::Swap(P_Player* other) {
  if (other == this) return;
  InternalSwap(other);
}
void P_Player::InternalSwap(P_Player* other) {
  using std::swap;
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  head_img_.Swap(&other->head_img_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
  swap(sex_, other->sex_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata P_Player::GetMetadata() const {
  protobuf_Types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_Types_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Types
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::Types::P_Player* Arena::CreateMaybeMessage< ::Types::P_Player >(Arena* arena) {
  return Arena::CreateInternal< ::Types::P_Player >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
