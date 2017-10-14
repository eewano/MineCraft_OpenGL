#ifndef ChunkRenderer_hpp
#define ChunkRenderer_hpp

#include <vector>

#include "../Shaders/ChunkShader.hpp"

class ChunkMesh;

class Camera;

class ChunkRenderer {
public:
    void add(const ChunkMesh &mesh);

    void render(const Camera &camera);

private:
    std::vector<const ChunkMesh *> m_chunks;

    ChunkShader m_shader;
};

#endif /* ChunkRenderer_hpp */
