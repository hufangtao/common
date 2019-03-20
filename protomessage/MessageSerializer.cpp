#include "MessageSerializer.h"

MessageSerializer::MessageSerializer()
{
    memset(m_unserializeTable, 0, sizeof(m_unserializeTable));
    registerMessage(this);
}

const google::protobuf::Message *MessageSerializer::getMessageByCmdParam(unsigned char byCmd, unsigned char byParam)
{
    unsigned int uMsgID = (byCmd << 8) + byParam;
    return m_unserializeTable[uMsgID];
}

void MessageSerializer::getCmdParamByDescriptor(const google::protobuf::Descriptor *descriptor, unsigned char &byCmd, unsigned char &byParam)
{
    int index = protoMap[descriptor->name().c_str()];
    INFO("get CmdParam ----", index);
    byParam = index | (0 << 8);
    byCmd = (index >> 8) | (0 << 8);
}

void MessageSerializer::getCmdParamByMessageName(const std::string messageName, int &byCmd, int &byParam)
{
    int index = protoMap[messageName];
    INFO("get CmdParam ----", index);
    byParam = index | (0 << 8);
    byCmd = (index >> 8) | (0 << 8);
}

bool MessageSerializer::Register(const google::protobuf::EnumDescriptor *byCmdEnum, const std::string ns)
{
    if (byCmdEnum == NULL)
    {
        ERROR("MessageSerializer::Register inset err");
        return false;
    }

    for (int i = 0; i < byCmdEnum->value_count(); i++)
    {
        const google::protobuf::EnumValueDescriptor *item = byCmdEnum->value(i);
        const int c = item->number();
        std::size_t found = item->name().find_last_of("_");
        std::string cmdname = item->name().substr(found + 1);
        const std::string paramtype = ns + "." + cmdname + ".Param";
        INFO("MessageSerializer::Register byCmdEnum:", c, paramtype.c_str(), item->name().c_str());

        const google::protobuf::DescriptorPool *descriptorPool = google::protobuf::DescriptorPool::generated_pool();
        const google::protobuf::EnumDescriptor *byParamEnum = descriptorPool->FindEnumTypeByName(paramtype);
        if (NULL == byParamEnum)
        {
            ERROR("MessageSerializer::Register err:", c, paramtype.c_str(), item->name().c_str());
            return false;
        }

        for (int i = 0; i < byParamEnum->value_count(); i++)
        {

            const google::protobuf::EnumValueDescriptor *paramItem = byParamEnum->value(i);
            if (c > 0 && c < 200 && paramItem->name().find(cmdname.c_str()) == std::string::npos)
            {
                ERROR("MessageSerializer::Register name err:", c, cmdname.c_str(), paramItem->name().c_str(), "需要名字严格匹配规则");
                return false;
            }

            const int t = paramItem->number();
            INFO("MessageSerializer::Register byParamEnum:", "[", c, ",", t, "]", byParamEnum->full_name().c_str(), ",", paramItem->name().c_str());

            const google::protobuf::Descriptor *message = google::protobuf::DescriptorPool::generated_pool()->FindMessageTypeByName(ns + "." + paramItem->name());
            if (NULL == message)
            {
                ERROR("MessageSerializer::Register find err:[", c, ", ", t, "]  ", byParamEnum->full_name().c_str(), ", ", (ns + "." + paramItem->name()).c_str());
                return false;
            }

            if (Register(c, t, message) == false)
            {
                ERROR("MessageSerializer::Register insert err:", "[", c, ", ", t, "]  ", byParamEnum->full_name().c_str());
                return false;
            }
        }
    }
    return true;
}

bool MessageSerializer::Register(unsigned char byCmd, unsigned char byParam, const google::protobuf::Descriptor *typeDescriptor)
{
    if (typeDescriptor == NULL)
    {
        ERROR("MessageSerializer::Register err");
        return false;
    }
    const google::protobuf::Message *prototype = google::protobuf::MessageFactory::generated_factory()->GetPrototype(typeDescriptor);
    if (m_unserializeTable[(byCmd << 8) + byParam] != NULL && m_unserializeTable[(byCmd << 8) + byParam] != prototype)
    {
        ERROR("MessageSerializer::Register insert err:", "[", byCmd, "]", byParam, m_unserializeTable[(byCmd << 8) + byParam], prototype);
        return false;
    }
    m_unserializeTable[(byCmd << 8) + byParam] = prototype;
    protoMap[typeDescriptor->name().c_str()] = static_cast<int>((byCmd << 8) + byParam);
    INFO("set Cmd Param ----:", typeDescriptor->name().c_str(), ":->", static_cast<int>((byCmd << 8) + byParam));
    return true;
}

void initParamDescriptor()
{
    PlatPmd::PlatCommand_descriptor();
    PlatPmd::NullPmd_Param_descriptor();
    PlatPmd::AccPmd_Param_descriptor();
    PlatPmd::PlayerPmd_Param_descriptor();
}

bool registerMessage(MessageSerializer *serializer)
{
    initParamDescriptor();

    if (serializer->Register(PlatPmd::PlatCommand_descriptor(), "PlatPmd") == false)
    {
        return false;
    }
    return true;
}
