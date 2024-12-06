#pragma once

#include "../entity/group.h"
#include "../entity/user.h"
#include "../entity/item.h"

#include "../service/task.h"
#include "../service/item.h"
#include "../service/conf.h"
#include "../service/user.h"

#include "shared/error.h"

#include "../shared/module.h"
#include "../shared/option.h"
#include "../shared/nonable.h"

MACRO_OPTIONED(Group, UsecaseError);
MACRO_OPTIONED_LIST(Group, UsecaseError);
MACRO_OPTIONED(Item, UsecaseError);
MACRO_OPTIONED_LIST(Item, UsecaseError);

MACRO_NONABLE(User);

MODULE(TaskUsecase,
    DEP(TaskService, task);
    DEP(ItemService, item);
    DEP(UserService, user);
    DEP(ConfService, conf);

    INIT();

    FN(OPTIONED(Group, UsecaseError), CreateGroup)(
        SELF(TaskService),
        NONABLE(User) user,

        GroupName name,
        GroupDescription description
    );

    FN(OPTIONED_LIST(Group, UsecaseError), ReadGroups)(
        SELF(TaskService),
        NONABLE(User) user
    );

    FN(OPTIONED(Group, UsecaseError), DeprecateGroup)(
        SELF(TaskService),
        NONABLE(User) user,

        GroupUID uid
    );

    FN(OPTIONED(Item, UsecaseError), CreateItem)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemHead head,
        ItemBody body
    );

    FN(OPTIONED_LIST(Item, UsecaseError), ReadItemsAtGroup)(
        SELF(TaskService),
        NONABLE(User) user,

        GroupUID at
    );

    FN(OPTIONED_LIST(Item, UsecaseError), ReadItemsWithHead)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemHead head
    );

    FN(OPTIONED_LIST(Item, UsecaseError), ReadItemsWithBody)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemBody body
    );

    FN(OPTIONED(Item, UsecaseError), DeprecateItem)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemUID uid
    );

    FN(OPTIONED(Item, UsecaseError), ForkItemFrom)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemUID origin,
        ItemHead head,
        ItemBody body
    );

    FN(OPTIONED(Item, UsecaseError), MoveItemTo)(
        SELF(TaskService),
        NONABLE(User) user,

        ItemUID target,
        GroupUID to
    );
);

MODULE_RAII(TaskUsecase);
