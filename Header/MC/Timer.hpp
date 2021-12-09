// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Timer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TIMER
public:
    class Timer& operator=(class Timer const&) = delete;
    Timer(class Timer const&) = delete;
    Timer() = delete;
#endif

public:
    MCAPI Timer(float, class std::function<__int64 (void)>);
    MCAPI void advanceTime(float);
    MCAPI unsigned __int64 getTicks() const;
    MCAPI float getTimeScale() const;
    MCAPI void resetTimePassed();
    MCAPI void setTimeScale(float);
    MCAPI void stepTick(int);
    MCAPI bool stepping() const;

protected:

private:

};