#include "Chunk.hpp"

#include "../../Renderer/RenderMaster.hpp"
#include "../../Util/Random.hpp"
#include "../../Maths/NoiseGenerator.hpp"
#include "../../Camera.hpp"
#include "../World.hpp"
#include "../Generation/Terrain/TerrainGenerator.h"

Chunk::Chunk(World &world, const sf::Vector2i &location)
        : m_location(location), m_pWorld(&world) {
    m_highestBlocks.setAll(0);
}

bool Chunk::makeMesh(const Camera &camera) {
    for (auto &chunk : m_chunks) {
        if (!chunk.hasMesh() && camera.) {
            ChunkMeshBuilder(chunk, chunk.m_mesh).buildMesh();
            chunk.m_mesh.bufferMesh();
            chunk.m_hasMesh = true;
        }
    }
}

void Chunk::setBlock(int x, int y, int z, ChunkBlock block) {
    if (outOfBound(x, y, z)) {
        return;
    }

    int bY = y % CHUNK_SIZE;
    m_chunks.at(y / CHUNK_SIZE).setBlock(x, bY, z, block);
}

//Chunk block to SECTION BLOCK positions
ChunkBlock Chunk::getBlock(int x, int y, int z) const {
    if (outOfBound(x, y, z)) {
        return BlockId::Air;
    }

    int bY = y % CHUNK_SIZE;

    return m_chunks.at(y / CHUNK_SIZE).getBlock(x, bY, z);
}

bool Chunk::outOfBound(int x, int y, int z) const {
    if (x >= CHUNK_SIZE) {
        return true;
    }
    if (z >= CHUNK_SIZE) {
        return true;
    }

    if (x < 0) {
        return true;
    }
    if (y < 0) {
        return true;
    }
    if (z < 0) {
        return true;
    }

    if (y >= (int) m_chunks.size() * CHUNK_SIZE) {
        return true;
    }

    return false;
}

void Chunk::drawChunks(RenderMaster &renderer) {
    for (auto &chunk : m_chunks) {
        if (chunk.hasMesh()) {
            renderer.drawChunk(chunk.m_mesh);
        }
    }
}