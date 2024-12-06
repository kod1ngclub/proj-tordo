#pragma once

#include "stdbool.h"

typedef bool Bool;

#define MACRO_NONABLE(t)            \
    typedef struct  {               \
        Bool ok;                    \
        const t data;               \
    } Nonable##t                    \

#define MACRO_NONABLE_LIST(t)       \
    typedef struct  {               \
        Bool ok;                    \
        const t* const data;        \
        const int size;             \
    } NonableList##t                \

#define Nonable(t) Nonable##t
#define NonableList(t) NonableList##t