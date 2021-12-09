// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "PoolElementStructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class BastionPiece : public PoolElementStructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BASTIONPIECE
public:
    class BastionPiece& operator=(class BastionPiece const&) = delete;
    BastionPiece(class BastionPiece const&) = delete;
    BastionPiece() = delete;
#endif

public:
    /*0*/ virtual ~BastionPiece();
    /*1*/ virtual class PoolElementStructurePiece* asPoolElement();
    /*2*/ virtual int /*enum enum StructurePieceType*/ getType() const;
    /*3*/ virtual void addChildren(class StructurePiece&, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&);
    /*4*/ virtual bool canBeReplaced(class BlockSource&, int, int, int, class BoundingBox const&);
    /*5*/ virtual void addHardcodedSpawnAreas(class LevelChunk&) const;
    /*6*/ virtual int generateHeightAtPosition(class BlockPos const&, class Dimension&, class BlockVolume&, class std::unordered_map<class ChunkPos, std::unique_ptr<std::vector<short>>, struct std::hash<class ChunkPos>, struct std::equal_to<class ChunkPos>, class std::allocator<struct std::pair<class ChunkPos const, std::unique_ptr<std::vector<short>> > > >&) const;
    /*7*/ virtual class Block const* getSupportBlock(class BlockSource&, class BlockPos const&, class Block const&) const;
    /*8*/ virtual class Block const& getBeardStabilizeBlock(class Block const&) const;
    /*9*/ virtual int /*enum enum AdjustmentEffect*/ getTerrainAdjustmentEffect() const;
    /*10*/ virtual bool _needsPostProcessing(class BlockSource&);
    MCAPI static void addPieces(class BlockPos, std::vector<std::unique_ptr<class StructurePiece>>&, class Random&, class JigsawStructureRegistry&, enum VanillaBiomeTypes, class Dimension&);

protected:

private:

};