#ifndef ChunkRenderer_hpp
#define ChunkRenderer_hpp

#include <vector>

#include "../Shaders/ChunkShader.hpp"
#include "../Config.h"

struct RenderInfo;

class ChunkMesh;

class Camera;

class ChunkRenderer {
public:
    void add(const ChunkMesh &mesh);

    void render(const Camera &camera, Config *conf);

private:
    std::vector<const RenderInfo *> m_chunks;

    ChunkShader m_shader;
};

#endif /* ChunkRenderer_hpp */
