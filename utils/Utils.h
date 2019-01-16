#ifndef UTILS_H
#define UTILS_H

#include "common/protomessage/MessageSerializer.h"

class Utils
{
public:
    static MessageSerializer* msgDecode;

public:
    Utils(/* args */);
    ~Utils();
};

#endif