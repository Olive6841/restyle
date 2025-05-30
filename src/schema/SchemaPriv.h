#pragma once

#include "RestyleBase.h"

namespace Restyle
{

enum TmSchemaPriv
{
    TMT_DIBDATA = 2, // Exposed in vmsys32.h, but not tmschema.h
    TMT_GLYPHDIBDATA = 8, // Exposed in vmsys32.h, but not tmschema.h
    TMT_ENUMDEF, // Referenced in schemadef.h, but not public.
    TMT_ENUMVAL, // Referenced in schemadef.h, but not public.
    TMT_ANIMATIONSET, // Unique; used for special parsing purposes by Restyle.
    TMT_COMMENT, // Unique; used for special parsing purposes by Restyle.
};

typedef BYTE PRIMVAL;

}