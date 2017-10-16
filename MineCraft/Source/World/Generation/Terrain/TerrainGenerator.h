#ifndef TerrainGenerator_h
#define TerrainGenerator_h

class Chunk;

class TerrainGenerator {
public:
    virtual void generateTerrainFor(Chunk &chunk) = 0;

    virtual int getMinimumSpawnHeight() const noexcept = 0;

    virtual ~TerrainGenerator() = default;
};

#endif /* TerrainGenerator_h */
