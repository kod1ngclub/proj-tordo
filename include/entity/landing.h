#pragma once

typedef const char* const Text;

typedef struct {
    Text href;
    Text name;
} Link;

typedef struct {
    Text welcome;
    Text description;

    Link discord;
    Link email;
    Link homepage;
} Landing;
