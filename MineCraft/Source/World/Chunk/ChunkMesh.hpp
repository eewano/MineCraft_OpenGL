#ifndef ChunkMesh_hpp
#define ChunkMesh_hpp

#include "../../Model.hpp"

#include <vector>
#include <SFML/Graphics.hpp>

class ChunkMesh {
public:
    ChunkMesh();

    void addFace(const std::vector<GLfloat> &blockFace,
            const std::vector<GLfloat> &textureCoords,
            const sf::Vector3i &chunkPosition,
            const sf::Vector3i &blockPosition);

    void bufferMesh();

    const Model &getModel() const;

private:
    Mesh m_mesh;
    Model m_model;
    GLuint m_indexIndex = 0;
};

#endif /* ChunkMesh_hpp */
