#pragma once

#define VAL(t) const t
#define REF(t) const t* const

#define FN(r, n) const r (*n)
#define INIT(...) void (*Init)
#define SELF(t) t* const self

#define PROTOCOL_TYPE_DEFINATION(n)             \
    typedef struct n##_t n;                     \
    typedef REF(n) n##Instance;                 \

#define PROTOCOL_PROPERTY_DEFINATION(n, ...)    \
    struct n##_t {                              \
        __VA_ARGS__                             \
    };                                          \

#define PROTOCOL_INITOR_DEFINATION(n)           \
    n##Instance New##n();                       \
    void Delete##n();                           \

#define PROTOCOL(n, ...)                            \
    PROTOCOL_TYPE_DEFINATION(n);                    \
    PROTOCOL_PROPERTY_DEFINATION(n, __VA_ARGS__);   \
    PROTOCOL_INITOR_DEFINATION(n);                  \
