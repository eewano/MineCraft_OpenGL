#ifndef PostProcessShader_hpp
#define PostProcessShader_hpp

#include "BasicShader.hpp"

class PostProcessShader : public BasicShader {
public:
    PostProcessShader();

    void loadContrast(float c);

    void loadGamma(float g);

    void loadBrightness(float b);

    void loadPostProcess(float p);

    void loadResolution(glm::vec2 resolution);

private:
    void getUniforms() override;

    GLuint m_c;
    GLuint m_b;
    GLuint m_g;
    GLuint m_p;
    GLuint m_res;
};

#endif /* PostProcessShader_hpp */
