// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FoliageColor {

#define AFTER_EXTRA
// Add Member There
public:
enum PaletteName;

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOLIAGECOLOR
public:
    class FoliageColor& operator=(class FoliageColor const&) = delete;
    FoliageColor(class FoliageColor const&) = delete;
    FoliageColor() = delete;
#endif

public:
    MCAPI static int getBirchColor(float, float);
    MCAPI static int getDefaultColor();
    MCAPI static int getEvergreenColor(float, float);
    MCAPI static int getFoliageColor(float, float);
    MCAPI static int getFoliageColor(enum FoliageColor::PaletteName, float, float);
    MCAPI static int getMapBirchColor(float, float);
    MCAPI static int getMapEvergreenColor(float, float);
    MCAPI static int getMapFoliageColor(float, float);
    MCAPI static int getMapGrassColor(class BlockSource&, class BlockPos const&);
    MCAPI static int getMapGrassColor(float, float);

protected:

private:
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_LEFT;
    MCAPI static class mce::Color const FOLIAGE_BOTTOM_RIGHT;
    MCAPI static class mce::Color const FOLIAGE_TOP_LEFT;
    MCAPI static class mce::Color const FOLIAGE_TOP_RIGHT;
    MCAPI static class mce::Color const GRASS_BOTTOM_LEFT;
    MCAPI static class mce::Color const GRASS_BOTTOM_RIGHT;
    MCAPI static class mce::Color const GRASS_TOP_LEFT;
    MCAPI static class mce::Color const GRASS_TOP_RIGHT;
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 4> mFoliagePalettes;
    MCAPI static class std::array<std::unique_ptr<class std::array<int, 65536>>, 4> mGrassPalettes;

};