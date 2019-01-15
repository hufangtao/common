// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Pmd.proto

#include "Pmd.pb.h"

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

namespace PlatPmd {
}  // namespace PlatPmd
namespace protobuf_Pmd_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "Pmd.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\tPmd.proto\022\007PlatPmd\032\013Types.proto*\336\002\n\013Pl"
      "atCommand\022\027\n\023PlatCommand_NullPmd\020\000\022\026\n\022Pl"
      "atCommand_AccPmd\020\001\022\031\n\025PlatCommand_Player"
      "Pmd\020\002\022\027\n\023PlatCommand_RoomPmd\020\003\022\033\n\027PlatCo"
      "mmand_ActivityPmd\020\004\022\027\n\023PlatCommand_ChatP"
      "md\020\005\022\030\n\024PlatCommand_GoodsPmd\020\006\022\027\n\023PlatCo"
      "mmand_TaskPmd\020\007\022\030\n\024PlatCommand_AwardPmd\020"
      "\010\022\032\n\026PlatCommand_PaymentPmd\020\t\022\027\n\023PlatCom"
      "mand_RankPmd\020\n\022\027\n\023PlatCommand_PlayPmd\020\013\022"
      "\031\n\025PlatCommand_SignInPmd\020\014b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 394);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Pmd.proto", &protobuf_RegisterTypes);
  ::protobuf_Types_2eproto::AddDescriptors();
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
}  // namespace protobuf_Pmd_2eproto
namespace PlatPmd {
const ::google::protobuf::EnumDescriptor* PlatCommand_descriptor() {
  protobuf_Pmd_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Pmd_2eproto::file_level_enum_descriptors[0];
}
bool PlatCommand_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace PlatPmd
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)