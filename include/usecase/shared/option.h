#pragma once

typedef enum {
    USECASE_ERROR_CODE_NONE,
} UsecaseErrorCode;

typedef const char* const UsecaseErrorBody;

typedef struct {
    const UsecaseErrorCode code;
    const UsecaseErrorBody body;
} UsecaseError;

#define GENERIC_USECASE_OPTIONED(t)         \
    typedef struct  {                       \
        UsecaseError err;                   \
        const t data;                       \
    } USECASE_OPTIONED_##t                  \

#define GENERIC_USECASE_OPTIONED_LIST(t)    \
    typedef struct  {                       \
        UsecaseError err;                   \
        const t* const data;                \
        const int size;                     \
    } USECASE_OPTIONED_LIST_##t             \


#define OPTIONED(t) USECASE_OPTIONED_##t
#define OPTIONED_LIST(t) USECASE_OPTIONED_LIST_##t

typedef struct { UsecaseError err; } USECASE_OPTIONED_VOID;
#define OPTION USECASE_OPTIONED_VOID
