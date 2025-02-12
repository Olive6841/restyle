#pragma once

#include "restyle.h"

typedef enum TA_TRANSFORM_TYPE_PRIV
{
    TATT_ROTATE_2D = 256,
    TATT_SKEW_2D = 257,
    TATT_TRANSLATE_3D = 258,
    TATT_SCALE_3D = 259,
    TATT_ROTATE_3D = 260,
    TATT_SKEW_3D = 261
} TA_TRANSFORM_TYPE_PRIV;

typedef enum TA_PROPERTY_PRIV
{
    TAP_BACKGROUNDPARTID = 256,
    TAP_TUNINGLEVEL = 257,
    TAP_PERSPECTIVE = 258
} TA_PROPERTY_PRIV;

typedef enum TA_TRANSFORM_FLAG_EXT
{
    TATF_USE_X_ONLY = 0x1000,
    TATF_USE_Y_ONLY = 0x2000,
    TATF_USE_Z_ONLY = 0x4000
} TA_TRANSFORM_FLAG_EXT;

typedef struct TA_TRANSFORM_3D
{
    TA_TRANSFORM header;
    float rX;
    float rY;
    float rZ;
    float rInitialX;
    float rInitialY;
    float rInitialZ;
    float rOriginX;
    float rOriginY;
    float rOriginZ;
} TA_TRANSFORM_3D, *PTA_TRANSFORM_3D;

enum class AnimationSymbol : int
{
    TimingFunction,
    Animation,
};

struct AnimationSymbolMap
{
    LPCWSTR szName;
    int eSymbol;
};

extern AnimationSymbolMap g_rgAnimSymbols[];