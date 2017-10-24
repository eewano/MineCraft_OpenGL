#ifndef ClassicOverWorldGenerator_hpp
#define ClassicOverWorldGenerator_hpp

#include "TerrainGenerator.h"

#include "../../../Util/Array2D.h"
#include "../../../Util/Random.hpp"

#include "../../../Maths/NoiseGenerator.hpp
#include "../../WorldConstants.h"

#include "../Biome/GrasslandBiome.hpp"
#include "../Biome/TemperateForestBiome.hpp"
#include "../Biome/DesertBiome.hpp"
#include "../Biome/OceanBiome.hpp"
#include "../Biome/LightForest.hpp"

class Chunk;

class ClassicOverWorldGenerator : public TerrainGenerator {
public:
    ClassicOverWorldGenerator();

    void generateTerrainFor(Chunk &chunk) override;

    int getMinimumSpawnHeight() const noexcept override;

private:
    static void setUpNoise();

    void setBlocks(int maxHeight);

    void getHeightIn(int xMin, int zMin, int xMax, int zMax);

    void getHeightMap();

    void getBiomeMap();

    const Biome &getBiome(int x, int z) const;

    Array2D<int, CHUNK_SIZE> m_heightMap;
    Array2D<int, CHUNK_SIZE + 1> m_biomeMap;

    Random<std::minstd_rand> m_random;

    static NoiseGenerator m_biomeNoiseGen;

    GrasslandBiome m_grassBiome;
    TemperateForestBiome m_temperateForest;
    DesertBiome m_desertBiome;
    OceanBiome m_oceanBiome;
    LightForest m_lightForest;

    Chunk *m_pChunk = nullptr;
};

#endif /* ClassicOverWorldGenerator_hpp */
