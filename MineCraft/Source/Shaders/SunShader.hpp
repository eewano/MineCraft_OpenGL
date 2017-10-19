#ifndef SunShader_hpp
#define SunShader_hpp

#include "BasicShader.hpp"

class SunShader : public BasicShader {
public:
    SunShader();

    void loadTime(float ticks);

private:
    void getUniforms() override;

    GLuint m_day;
};

#endif /* SunShader_hpp */
