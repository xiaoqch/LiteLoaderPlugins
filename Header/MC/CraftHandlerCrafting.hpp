// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class CraftHandlerCrafting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRAFTHANDLERCRAFTING
public:
    class CraftHandlerCrafting& operator=(class CraftHandlerCrafting const&) = delete;
    CraftHandlerCrafting(class CraftHandlerCrafting const&) = delete;
    CraftHandlerCrafting() = delete;
#endif

public:
    /*0*/ virtual ~CraftHandlerCrafting();
    /*1*/ virtual int /*enum enum ItemStackNetResult*/ handleConsumedItem(int /*enum enum ContainerEnumName*/, unsigned char, class ItemStack const&);
    /*2*/ virtual int /*enum enum ItemStackNetResult*/ preHandleAction(int /*enum enum ItemStackRequestActionType*/);
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual int /*enum enum ItemStackNetResult*/ _handleCraftAction(class ItemStackRequestActionCraftBase const&);
    /*5*/ virtual void __unk_vfn_1();
    /*6*/ virtual class Recipes const* _getLevelRecipes() const;

protected:

private:
    MCAPI enum ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const&);
    MCAPI enum ItemStackNetResult _handleCraftOutput(class ItemStackRequestActionCraft<class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0>, 10> const&);

};