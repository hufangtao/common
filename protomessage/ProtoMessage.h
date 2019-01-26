#ifndef PROTOMESSAGE_H
#define PROTOMESSAGE_H

#include <cstddef>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <google/protobuf/message.h>
#include <google/protobuf/descriptor.h>

#include "common/utils/common.h"
#include "common/utils/ProtoUtils.h"

class ProtoMessage
{
public:
  enum
  {
    HEADER_LENGTH = 4, // 定义报长度
    PMD_LENGTH = 1,    // 定义主协议号
    PARAM_LENGTH = 1,  // 定义子协议号
    MAX_BODY_LENGTH = 512
  };

private:
  char data_[HEADER_LENGTH + PMD_LENGTH + PARAM_LENGTH + MAX_BODY_LENGTH];
  std::size_t body_length_;
  unsigned char pmd_;
  unsigned char param_;

public:
  ProtoMessage();
  ProtoMessage(google::protobuf::Message &message);
  ~ProtoMessage();

  /** 消息的整体信息
   * @return 指向消息头的数组
  */
  const char *data() const;
  char *data();
  /** 消息总长度
   * @return 指向消息头的数组
  */
  std::size_t length() const;
  const char *body() const;
  char *body();
  std::size_t body_length() const;
  void body_length(std::size_t new_length);
  int pmd();
  int param();
  bool decode_header();
  void encode_header();
};

#endif