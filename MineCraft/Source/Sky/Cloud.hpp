#ifndef Cloud_hpp
#define Cloud_hpp

#include "../Shaders/CloudShader.hpp"
#include "../Model.hpp"
#include "../Camera.hpp"
#include "../Texture/BasicTexture.hpp"

class Camera;

class Clouds {
public:
    Clouds();

    void Render(const Camera &camera, glm::vec3 position);

private:
    CloudShader m_shader;
    Model m_cloud;
    BasicTexture cloud;

    glm::vec3 oldPos;
    float movement;
};

#endif /* Cloud_hpp */
