#ifndef DesertBiome_hpp
#define DesertBiome_hpp

#include "Biome.hpp"

class DesertBiome : public Biome {
public:
    DesertBiome(int seed);

    ChunkBlock getPlant(Rand &rand) const override;

    ChunkBlock getTopBlock(Rand &rand) const override;

    ChunkBlock getUnderWaterBlock(Rand &rand) const override;

    void makeTree(Rand &rand, Chunk &chunk, int x, int y, int z) const override;

private:
    NoiseParameters getNoiseParameters() override;
};

#endif /* DesertBiome_hpp */
