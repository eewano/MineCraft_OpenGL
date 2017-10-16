#ifndef SuperFlatGenerator_hpp
#define SuperFlatGenerator_hpp

#include "TerrainGenerator.h"

class SuperFlatGenerator : public TerrainGenerator {
public:
    void generateTerrainFor(Chunk &chunk) override;

    int getMinimumSpawnHeight() const noexcept override;
};

#endif /* SuperFlatGenerator_hpp */
