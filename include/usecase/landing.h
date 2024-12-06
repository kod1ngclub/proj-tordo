#pragma once

#include "../entity/landing.h"
#include "../entity/user.h"

#include "../service/conf.h"
#include "../service/user.h"
#include "../service/landing.h"

#include "../shared/module.h"
#include "../shared/nonable.h"

MACRO_NONABLE(Landing);
MACRO_NONABLE(User);

MODULE(LandingUsecase,
    DEP(LandingService, landing);
    DEP(UserService, user);
    DEP(ConfService, conf);

    INIT();

    FN(NONABLE(Landing), ReadLanding)(
        SELF(LandingUsecase),
        NONABLE(User) user
    );
);

MODULE_RAII(LandingUsecase);
