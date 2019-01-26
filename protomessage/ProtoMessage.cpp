#include "ProtoMessage.h"

ProtoMessage::ProtoMessage() : body_length_(0), pmd_(0), param_(0)
{
}

ProtoMessage::ProtoMessage(google::protobuf::Message &message) : body_length_(0), pmd_(0), param_(0)
{
    const google::protobuf::Descriptor *descriptor = message.GetDescriptor();
    std::cout << "send Message " << descriptor->name() << std::endl;
    ProtoUtils::msgDecode->getCmdParamByDescriptor(descriptor, pmd_, param_);
    INFO("Message decode Cmd", static_cast<int>(pmd_), " : Param", static_cast<int>(param_));
    int msgSize = message.ByteSizeLong();
    body_length(msgSize);
    message.SerializeToArray(body(), body_length());
    encode_header();
}

ProtoMessage::~ProtoMessage() {}

const char *ProtoMessage::data() const
{
    return data_;
}
char *ProtoMessage::data()
{
    return data_;
}

std::size_t ProtoMessage::length() const
{
    return HEADER_LENGTH + PMD_LENGTH + PARAM_LENGTH + body_length_;
}

const char *ProtoMessage::body() const
{
    return data_ + HEADER_LENGTH + PMD_LENGTH + PARAM_LENGTH;
}
char *ProtoMessage::body()
{
    return data_ + HEADER_LENGTH + PMD_LENGTH + PARAM_LENGTH;
}

std::size_t ProtoMessage::body_length() const
{
    return body_length_;
}
void ProtoMessage::body_length(std::size_t new_length)
{
    body_length_ = new_length;
    if (body_length_ > MAX_BODY_LENGTH)
    {
        body_length_ = MAX_BODY_LENGTH;
    }
}

int ProtoMessage::pmd()
{
    return pmd_;
}
int ProtoMessage::param()
{
    return param_;
}

bool ProtoMessage::decode_header()
{
    char header[HEADER_LENGTH + 1] = "";
    std::strncat(header, data_, HEADER_LENGTH);
    body_length_ = std::atoi(header);

    pmd_ = data_[HEADER_LENGTH];
    param_ = data_[HEADER_LENGTH+1];

    if (body_length_ > MAX_BODY_LENGTH)
    {
        body_length_ = 0;
        return false;
    }
    return true;
}
void ProtoMessage::encode_header()
{
    char header[HEADER_LENGTH + 1] = "";
    std::sprintf(header, "%4d", static_cast<int>(body_length_));
    std::memcpy(data_, header, HEADER_LENGTH);
    data_[HEADER_LENGTH] = pmd_;
    data_[HEADER_LENGTH + 1] = param_;
}
