#ifndef ChunkSection_hpp
#define ChunkSection_hpp

#include <array>
#include <SFML/Graphics.hpp>

#include "../WorldConstants.h"
#include "../Block/ChunkBlock.hpp"
#include "ChunkMesh.hpp"

class ChunkSection {
public:
    ChunkSection();

    void setBlock(int x, int y, int z, ChunkBlock block);

    ChunkBlock getBlock(int x, int y, int z) const;

    const sf::Vector3i getLocation() const;

    ///@TODO make private
    ChunkMesh mesh;

private:
    static bool outOfBounds(int value);

    static int getIndex(int x, int y, int z);

    std::array<ChunkBlock, CHUNK_VOLUME> m_blocks;

    sf::Vector3i m_location;
};

#endif /* ChunkSection_hpp */
