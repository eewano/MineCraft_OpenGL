#ifndef BasicShader_hpp
#define BasicShader_hpp

#include "Shader.hpp"

class BasicShader : public Shader {
public:
    BasicShader(const std::string &vertexFile = "BasicVertex",
            const std::string &fragmentFile = "BasicFragment");

    void loadProjectionViewMatrix(const glm::mat4 &pvMatrix);

    void loadModelMatrix(const glm::mat4 &matrix);

private:
    virtual void getUniforms() override;

    GLuint m_locationProjectionViewMatrix;
    GLuint m_locationModelMatrix;
};

#endif /* BasicShader_hpp */
