#ifndef IChunk_h
#define IChunk_h

#import "ChunkBlock.hpp"

struct IChunk {
    virtual ~IChunk() = default;

    virtual ChunkBlock getBlock(int x, int y, int z) const = 0;

    virtual void setBlock(int x, int y, int z, ChunkBlock block) = 0;
};


#endif /* IChunk_h */
