#include "ProtoMessage.h"

ProtoMessage::ProtoMessage(google::protobuf::Message message) : body_length_(0), pmd_(0), param_(0) {
    const google::protobuf::Descriptor *descriptor = message.GetDescriptor();
    std::cout<<"get Message"<<descriptor->name()<<std::endl;
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

    char pmdHeader[PMD_LENGTH + 1] = "";
    std::strncat(pmdHeader, data_ + HEADER_LENGTH, PMD_LENGTH);
    pmd_ = std::atoi(pmdHeader);

    char paramHeader[PARAM_LENGTH + 1] = "";
    std::strncat(paramHeader, data_ + HEADER_LENGTH + PMD_LENGTH, PARAM_LENGTH);
    param_ = std::atoi(paramHeader);

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
    std::sprintf(header, "%4d", static_cast<int>(body_length_ + PMD_LENGTH + PARAM_LENGTH));
    std::memcpy(data_, header, HEADER_LENGTH);
}
