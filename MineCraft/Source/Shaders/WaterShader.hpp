#ifndef WaterShader_hpp
#define WaterShader_hpp

#include "BasicShader.hpp"

class WaterShader : public BasicShader {
public:
    WaterShader();

    void loadTime(const float &time);

    void loadLighting(float light);

private:
    void getUniforms() override;

    GLuint m_time;
    GLuint lighting;
};

#endif /* WaterShader_hpp */
