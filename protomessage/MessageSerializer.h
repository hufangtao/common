#ifndef MESSAGESERIALIZER_H
#define MESSAGESERIALIZER_H
#pragma once

#include "utils/common.h"
#include "common/proto/Pmd.pb.h"
#include "common/proto/NullPmd.pb.h"
#include "common/proto/AccPmd.pb.h"

class MessageSerializer
{
  public:
    MessageSerializer(/* args */);

  private:
    // 保存所有协议结构对象
    const google::protobuf::Message *m_unserializeTable[65536];

  public:
    /** 注册proto协议
     * @param byCmdEnum 主协议enum信息 ns 命名空间
     * @return true or false
    */
    bool Register(const google::protobuf::EnumDescriptor *byCmdEnum, const std::string ns);

    /** 注册具体的协议
     * @param byCmd 主协议号 byParam 子协议号 typeDescriptor 具体一条协议信息
     * @return true or false
    */
    bool Register(unsigned char byCmd, unsigned char byParam, const google::protobuf::Descriptor *typeDescriptor);

    /** 通过主、子协议获取协议对象
     * @param byCmd 主协议号 byParam 子协议号
     * @return google::protobuf::Message.
    */
    const google::protobuf::Message* getMessageByCmdParam(unsigned char byCmd, unsigned char byParam);

};

void initParamDescriptor();
bool registerMessage(MessageSerializer* serializer);

#endif