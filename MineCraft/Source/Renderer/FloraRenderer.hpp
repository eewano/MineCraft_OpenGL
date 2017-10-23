#ifndef FloraRenderer_hpp
#define FloraRenderer_hpp

#include <vector>
#include <SFML/Graphics.hpp>

#include "../Shaders/FloraShader.hpp"
#include "../Config.h"
#include "../GlobalInfo.hpp"

struct RenderInfo;

class ChunkMesh;

class Camera;

class FloraRenderer {
public:
    void add(const ChunkMesh &mesh);

    void render(const Camera &camera, Config *conf);

private:
    std::vector<const RenderInfo *> m_chunks;

    FloraShader m_shader;
};

#endif /* FloraRenderer_hpp */
