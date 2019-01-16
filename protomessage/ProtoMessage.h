#ifndef PROTOMESSAGE_H
#define PROTOMESSAGE_H

#include <cstddef>
#include <string>

class ProtoMessage
{
  public:
    enum
    {
        HEADER_LENGTH = 4,      // 定义报长度
        PMD_LENGTH    = 4,      // 定义主协议号
        PARAM_LENGTH  = 4,      // 定义子协议号
        MAX_BODY_LENGTH = 512
    };

  private:
    char data_[HEADER_LENGTH + PMD_LENGTH + PARAM_LENGTH + MAX_BODY_LENGTH];
    std::size_t body_length_;
    int pmd_;
    int param_;

  public:
    ProtoMessage(/* args */);
    ~ProtoMessage();

    const char *data() const;
    char *data();
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