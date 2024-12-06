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

    FN(Optioned(Group, UsecaseError), CreateGroup)(
        SELF(TaskService),
        Nonable(User) user,

        GroupName name,
        GroupDescription description
    );

    FN(OptionedList(Group, UsecaseError), ReadGroups)(
        SELF(TaskService),
        Nonable(User) user
    );

    FN(Optioned(Group, UsecaseError), DeprecateGroup)(
        SELF(TaskService),
        Nonable(User) user,

        GroupUID uid
    );

    FN(Optioned(Item, UsecaseError), CreateItem)(
        SELF(TaskService),
        Nonable(User) user,

        ItemHead head,
        ItemBody body
    );

    FN(OptionedList(Item, UsecaseError), ReadItemsAtGroup)(
        SELF(TaskService),
        Nonable(User) user,

        GroupUID at
    );

    FN(OptionedList(Item, UsecaseError), ReadItemsWithHead)(
        SELF(TaskService),
        Nonable(User) user,

        ItemHead head
    );

    FN(OptionedList(Item, UsecaseError), ReadItemsWithBody)(
        SELF(TaskService),
        Nonable(User) user,

        ItemBody body
    );

    FN(Optioned(Item, UsecaseError), DeprecateItem)(
        SELF(TaskService),
        Nonable(User) user,

        ItemUID uid
    );

    FN(Optioned(Item, UsecaseError), ForkItemFrom)(
        SELF(TaskService),
        Nonable(User) user,

        ItemUID origin,
        ItemHead head,
        ItemBody body
    );

    FN(Optioned(Item, UsecaseError), MoveItemTo)(
        SELF(TaskService),
        Nonable(User) user,

        ItemUID target,
        GroupUID to
    );
);

MODULE_RAII(TaskUsecase);
