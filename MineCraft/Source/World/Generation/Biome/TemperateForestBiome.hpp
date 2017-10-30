#ifndef TemperateForestBiome_hpp
#define TemperateForestBiome_hpp

#include "Biome.hpp"

class TemperateForestBiome : public Biome {
public:
    TemperateForestBiome(int seed);

    ChunkBlock getPlant(Rand &rand) const override;

    ChunkBlock getTopBlock(Rand &rand) const override;

    ChunkBlock getUnderWaterBlock(Rand &rand) const override;

    void makeTree(Rand &rand, Chunk &chunk, int x, int y, int z) const override;

private:
    NoiseParameters getNoiseParameters() override;
};

#endif /* TemperateForestBiome_hpp */
