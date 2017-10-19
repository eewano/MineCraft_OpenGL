#ifndef CloudShader_hpp
#define CloudShader_hpp

#include "BasicShader.hpp"

class CloudShader : public BasicShader {
public:
    CloudShader();

    void loadLighting(float light);

private:
    void getUniforms() override;

    GLuint lighting;
};

#endif /* CloudShader_hpp */
