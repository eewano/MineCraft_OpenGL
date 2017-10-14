#ifndef RenderMaster_hpp
#define RenderMaster_hpp

#include <SFML/Graphics.hpp>

#include "QuadRenderer.hpp"
#include "CubeRenderer.hpp"
#include "ChunkRenderer.hpp"

class Camera;

class ChunkMesh;

class RenderMaster {
public:
    void drawQuad(const glm::vec3 &pos);

    void drawCube(const glm::vec3 &pos);

    void drawChunk(const ChunkMesh &mesh);

    void finishRender(sf::RenderWindow &window, const Camera &camera);

private:
    QuadRenderer m_quadRenderer;
    CubeRenderer m_cubeRenderer;
    ChunkRenderer m_chunkRenderer;
};

#endif /* RenderMaster_hpp */
