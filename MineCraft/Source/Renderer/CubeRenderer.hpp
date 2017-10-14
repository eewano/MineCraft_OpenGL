#ifndef CubeRenderer_hpp
#define CubeRenderer_hpp

#include <vector>

#include "../Model.hpp"
#include "../Maths/glm.h"
#include "../Shaders/BasicShader.hpp"
#include "../Texture/BasicTexture.hpp"
#include "../Texture/TextureAtlas.hpp"

class Camera;

class CubeRenderer {
public:
    CubeRenderer();

    void add(const glm::vec3 &position);

    void render(const Camera &camera);

private:
    std::vector<glm::vec3> m_quads;

    Model m_cubeModel;
    BasicShader m_shader;
    BasicTexture m_basicTexture;

    TextureAtlas m_atlasTest;
};

#endif /* CubeRenderer_hpp */
