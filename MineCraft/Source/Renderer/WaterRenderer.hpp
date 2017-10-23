#ifndef WaterRenderer_hpp
#define WaterRenderer_hpp

#include <vector>
#include <SFML/Graphics.hpp>

#include "../Shaders/WaterShader.hpp"
#include "../Config.h"
#include "../GlobalInfo.hpp"

struct RenderInfo;

class ChunkMesh;

class Camera;

class WaterRenderer {
public:
    void add(const ChunkMesh &mesh);

    void render(const Camera &camera, Config *conf);

private:
    std::vector<const RenderInfo *> m_chunks;

    WaterShader m_shader;
};

#endif /* WaterRenderer_hpp */
