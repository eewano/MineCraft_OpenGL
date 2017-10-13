#ifndef QuadRenderer_hpp
#define QuadRenderer_hpp

#include <vector>

#include "../Model.hpp"
#include "../Maths/glm.h"
#include "../Shaders/BasicShader.hpp"
#include "../Texture/BasicTexture.hpp"

class Camera;

class QuadRenderer {
public:
    QuadRenderer();

    void add(const glm::vec3 &position);

    void renderQuads(const Camera &camera);

private:
    std::vector<glm::vec3> m_quads;

    Model m_quadModel;
    BasicShader m_shader;
    BasicTexture m_basicTexture;
};

#endif /* QuadRenderer_hpp */
