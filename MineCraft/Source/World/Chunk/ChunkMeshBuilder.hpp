#ifndef ChunkMeshBuilder_hpp
#define ChunkMeshBuilder_hpp

#include <vector>
#include <SFML/Graphics.hpp>
#include <GL/glew.h>

class ChunkSection;

class ChunkMesh;

class BlockData;

class BlockDataHolder;

class ChunkMeshBuilder {
public:
    ChunkMeshBuilder(ChunkSection &chunk);

    void buildMesh(ChunkMesh &mesh);

private:
    void tryAddFaceToMesh(const std::vector<GLfloat> &blockFace,
            const sf::Vector2i &textureCoords,
            const sf::Vector3i &blockPosition,
            const sf::Vector3i &blockFacing);

    bool shouldMakeFace(const sf::Vector3i &blockPosition,
            const BlockDataHolder &blockData);

    ChunkSection *m_pChunk = nullptr;
    ChunkMesh *m_pMesh = nullptr;
    const BlockDataHolder *m_pBlockData = nullptr;
};

#endif /* ChunkMeshBuilder_hpp */
