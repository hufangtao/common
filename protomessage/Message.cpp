#include "common/proto/Pmd.pb.h"
#include "common/proto/NullPmd.pb.h"
#include "common/proto/AccPmd.pb.h"

void initParamDescriptor()
{
    PlatPmd::NullPmd_Param_descriptor();
    PlatPmd::AccPmd_Param_descriptor();
}

bool registerMessage()
{
    initParamDescriptor();
}
