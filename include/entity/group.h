#pragma once

typedef const char* const GroupUID;
typedef const char* const GroupName;
typedef const char* const GroupDescription;

typedef struct {
    GroupUID uid;

    GroupName name;
    GroupDescription description;
} Group;
