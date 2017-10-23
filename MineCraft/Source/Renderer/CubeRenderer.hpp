#ifndef CubeRenderer_hpp
#define CubeRenderer_hpp

#include <vector>

#include "../Model.hpp"
#include "../Maths/glm.h"
#include "../Shaders/BasicShader.hpp"
#include "../Texture/BasicTexture.hpp"
#include "../Texture/TextureAtlas.hpp"

class Camera;

struct Entity;

class CubeRenderer {
public:
    CubeRenderer();

    void add(const Entity &entity);

    void render(const Camera &camera);

private:
    std::vector<const Entity *> m_cubes;

    Model m_cubeModel;
    BasicShader m_shader;
    BasicTexture m_basicTexture;

    TextureAtlas m_atlasTest;
};

#endif /* CubeRenderer_hpp */
