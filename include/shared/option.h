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

#define OPTIONED(t, e) e##Optioned##t
#define OPTIONED_LIST(t, e) e##OptionedList##t
#define OPTIONED_VOID(e) e##Optioned
