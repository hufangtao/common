// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Error.proto

#ifndef PROTOBUF_INCLUDED_Error_2eproto
#define PROTOBUF_INCLUDED_Error_2eproto

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
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Error_2eproto 

namespace protobuf_Error_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Error_2eproto
namespace ErrorCode {
}  // namespace ErrorCode
namespace ErrorCode {

enum Error {
  E_OK = 0,
  E_UNKNOWN = 1,
  Error_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Error_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Error_IsValid(int value);
const Error Error_MIN = E_OK;
const Error Error_MAX = E_UNKNOWN;
const int Error_ARRAYSIZE = Error_MAX + 1;

const ::google::protobuf::EnumDescriptor* Error_descriptor();
inline const ::std::string& Error_Name(Error value) {
  return ::google::protobuf::internal::NameOfEnum(
    Error_descriptor(), value);
}
inline bool Error_Parse(
    const ::std::string& name, Error* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Error>(
    Error_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace ErrorCode

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::ErrorCode::Error> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ErrorCode::Error>() {
  return ::ErrorCode::Error_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Error_2eproto