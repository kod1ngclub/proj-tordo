#pragma once

#include "group.h"

typedef const char* const ItemUID;
typedef const char* const ItemHead;
typedef const char* const ItemBody;

typedef struct {
    ItemUID uid;

    ItemHead head;
    ItemBody body;

    GroupUID at;
} Item;
