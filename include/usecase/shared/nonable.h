#pragma once

#include "stdbool.h"

typedef bool Bool;

#define GENERIC_NONABLE(t)          \
    typedef struct  {               \
        Bool ok;                    \
        const t data;               \
    } NONABLE_##t                   \

#define GENERIC_NONABLE_LIST(t)     \
    typedef struct  {               \
        Bool ok;                    \
        const t* const data;        \
        const int size;             \
    } NONABLE_LIST_##t              \

#define NONABLE(t) NONABLE_##t
#define NONABLE_LIST(t) NONABLE_LIST_##t
