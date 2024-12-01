#pragma once

#include "../entity/group.h"
#include "../entity/user.h"
#include "../entity/item.h"

#include "shared/protocol.h"
#include "shared/option.h"
#include "shared/nonable.h"

GENERIC_USECASE_OPTIONED(Group);
GENERIC_USECASE_OPTIONED_LIST(Group);
GENERIC_USECASE_OPTIONED(Item);
GENERIC_USECASE_OPTIONED_LIST(Item);

GENERIC_NONABLE(User);

PROTOCOL(TaskUsecase,
    INIT();

    FN(OPTIONED(Group), CreateGroup)(
        // ...
    );

    FN(OPTIONED_LIST(Group), ReadGroups)(
        // ...
    );

    FN(OPTIONED(Group), DeprecateGroup)(
        // ...
    );

    FN(OPTIONED(Item), CreateItem)(
        // ...
    );

    FN(OPTIONED_LIST(Item), ReadItemsAtGroup)(
        // ...
    );

    FN(OPTIONED_LIST(Item), ReadItemsWithHead)(
        // ...
    );

    FN(OPTIONED_LIST(Item), ReadItemsWithBody)(
        // ...
    );

    FN(OPTIONED(Item), DeprecateItem)(
        // ...
    );

    FN(OPTIONED(Item), ForkItemFrom)(
        // ...
    );

    FN(OPTIONED(Item), MoveItemTo)(
        // ...
    );
);
