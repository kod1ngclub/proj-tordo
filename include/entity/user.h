#pragma once

typedef const char* const UserUID;
typedef const char* const UserName;
typedef const char* const Password;

typedef struct {
    UserUID uid;

    UserName name;
    Password password;
} User;
