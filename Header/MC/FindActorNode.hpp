// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FindActorNode {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FINDACTORNODE
public:
    class FindActorNode& operator=(class FindActorNode const&) = delete;
    FindActorNode(class FindActorNode const&) = delete;
#endif

public:
    /*0*/ virtual ~FindActorNode();
    /*1*/ virtual int /*enum enum BehaviorStatus*/ tick(class Actor&);
    /*2*/ virtual void initializeFromDefinition(class Actor&);
    MCAPI FindActorNode();

protected:

private:

};