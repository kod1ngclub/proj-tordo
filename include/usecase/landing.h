#pragma once

#include "../entity/landing.h"

#include "shared/protocol.h"
#include "shared/option.h"
#include "shared/nonable.h"

PROTOCOL(LandingUsecase,
    INIT();

    FN(Landing, ReadLanding)(
        // ...
    );
);
