#ifndef ChunkBlock_hpp
#define ChunkBlock_hpp

#include "BlockId.h"

struct BlockDataHolder;

class BlockType;

struct ChunkBlock {
    ChunkBlock() = default;

    ChunkBlock(Block_t id);

    ChunkBlock(BlockId id);

    const BlockDataHolder &getData() const;

    const BlockType &getType() const;

    bool operator==(ChunkBlock other) const {
        return id == other.id;
    }

    bool operator!=(ChunkBlock other) const {
        return id != other.id;
    }

    Block_t id = 0;
};

#endif /* ChunkBlock_hpp */
