#include "MessageSerializer.h"

MessageSerializer::MessageSerializer()
{
    memset(m_unserializeTable, 0, sizeof(m_unserializeTable));
}

const google::protobuf::Message* MessageSerializer::getMessageByCmdParam(unsigned char byCmd, unsigned char byParam)
{
    unsigned int uMsgID = (byCmd << 8) + byParam;
    return m_unserializeTable[uMsgID];
}

bool MessageSerializer::Register(const google::protobuf::EnumDescriptor *byCmdEnum, const std::string ns)
{
    if(byCmdEnum == NULL)
    {
        ERROR("MessageSerializer::Register inset err");
        return false;
    }

    for(int i=0; i< byCmdEnum->value_count(); i++)
    {
        const google::protobuf::EnumValueDescriptor* item = byCmdEnum->value(i);
    }
    return true;
}

bool MessageSerializer::Register(unsigned char byCmd, unsigned char byParam, const google::protobuf::Descriptor* typeDescriptor)
{
    if(typeDescriptor == NULL)
    {
        printError("MessageSerializer::Register err");
        return false;
    }
    return true;
}
