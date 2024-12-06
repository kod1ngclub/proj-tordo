#pragma once

#include <stdbool.h>

typedef bool Bool;
typedef int Numeric;

typedef struct {
    const Bool ALLOW_GUEST_READ_LANDING;        // Can guest read landing page?

    const Bool ALLOW_GUEST_READ_GROUP;          // Can guest read group list?
    const Bool ALLOW_GUEST_CREATE_GROUP;        // Can guest create group?
    const Bool ALLOW_GUEST_DEPRECATE_GROUP;     // Can guest deprecate group?

    const Bool ALLOW_GUEST_READ_ITEM;           // Can guest read item?
    const Bool ALLOW_GUEST_CREATE_ITEM;         // Can guest create item?
    const Bool ALLOW_GUEST_DEPRECATE_ITEM;      // Can guest deprecate item?

    const Numeric LOGIN_EXPIRE_TIME;            // How long will the login remain active?

    const Bool LOGIN_USE_LOCK;                  // Should use the login 'temporarily lock' feature?
    const Numeric LOGIN_LOCK_COUNT;             // How many failed login attempts must a user make before a 'temporary lock' is triggered?
    const Numeric LOGIN_LOCK_TIME;              // How many seconds will that 'temporary lock' run for?

    const Bool LOGIN_USE_PROTECT_STATE;         // Should I use the 'Protected State' feature?
    const Numeric LOGIN_PROTECT_STATE_COUNT;    // How many temporary locks must be executed before an app is permanently put into a 'protected state'?
} Config;
