#ifndef Chunk_hpp
#define Chunk_hpp

#include <vector>
#include "ChunkSection.hpp"
#include "../../Util/Array2D.h"
#include "../../Util/NonCopyable.h"

class RenderMaster;

class Camera;

class TerrainGenerator;

class Chunk : public IChunk {
public:
    Chunk() = default;

    Chunk(World &world, const sf::Vector2i &location);

    bool makeMesh(const Camera &camera);

    void setBlock(int x, int y, int z, ChunkBlock block) override;

    ChunkBlock getBlock(int x, int y, int z) const override;

    int getHeightAt(int x, int z);

    void drawChunks(RenderMaster &renderer, const Camera &camera);

    bool hasLoaded() const noexcept;

    void load(TerrainGenerator &generator);

    ChunkSection &getSection(int index);

    const sf::Vector2i &getLocation() const {
        return m_location;
    }

    void deleteMeshes();

private:
    void addSection();

    void addSectionsBlockTarget(int blockY);

    void addSectionsIndexTarget(int index);

    bool outOfBound(int x, int y, int z) const noexcept;

    std::vector<ChunkSection> m_chunks;
    Array2D<int, CHUNK_SIZE> m_highestBlocks;
    sf::Vector2i m_location;

    World *m_pWorld;

    bool m_isLoaded = false;
};

#endif /* Chunk_hpp */