#define MACRO_OPTIONED(t, e)            \
    typedef struct  {                   \
        e err;                          \
        const t data;                   \
    } e##Optioned##t                    \

#define MACRO_OPTIONED_LIST(t, e)       \
    typedef struct  {                   \
        e err;                          \
        const t* const data;            \
        const int size;                 \
    } e##OptionedList##t                \

#define MACRO_OPTIONED_VOID(e)          \
    typedef struct  {                   \
        e err;                          \
    } e##Optioned                       \

#define Optioned(t, e) e##Optioned##t
#define OptionedList(t, e) e##OptionedList##t
#define OptionedVoid(e) e##Optioned
