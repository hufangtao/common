#ifndef PROTOUTILS_H
#define PROTOUTILS_H

#include "common/protomessage/MessageSerializer.h"

class ProtoUtils
{
public:
    static MessageSerializer* msgDecode;

public:
    ProtoUtils(/* args */);
    ~ProtoUtils();
};

#endif