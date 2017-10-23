#ifndef QuadRenderer_hpp
#define QuadRenderer_hpp

#include <vector>

#include "../Model.hpp"
#include "../Maths/glm.h"
#include "../Shaders/PostProcessShader.hpp"
#include "../Texture/BasicTexture.hpp"
#include "../Config.h"

class Camera;

class QuadRenderer {
public:
    QuadRenderer();

    void add(const glm::vec3 &position);

    void render(const Camera &camera, Config *conf);

private:
    std::vector<glm::vec3> m_quads;

    Model m_quadModel;
    PostProcessShader m_shader;
    BasicTexture m_basicTexture;
};

#endif /* QuadRenderer_hpp */
