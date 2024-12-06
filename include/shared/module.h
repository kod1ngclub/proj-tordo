#pragma once

// data defination
#define PUBLIC(t, n) t n
#define PRIVATE(t, n) t __##n##__
#define DEP(t, n) const t* const __##n##__

// function defination
#define INIT(...) void (*Init)
#define FN(r, n) const r (*n)

// function argument
#define VAL(t) const t
#define REF(t) const t* const
#define SELF(t) t* const self

// module defination
#define MODULE(n, ...)                      \
    typedef struct n##_t n;                 \
    struct n##_t {                          \
        __VA_ARGS__                         \
    };                                      \

// module RAII
#define MODULE_RAII(n)                      \
    REF(n) Alloc##n();                      \
    void Free##n();                         \
