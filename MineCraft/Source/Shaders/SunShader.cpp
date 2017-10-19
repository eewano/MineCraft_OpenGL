#include "SunShader.hpp"

SunShader::SunShader()
        : BasicShader("Sun", "Sun") {
    getUniforms();
}

void SunShader::loadTime(float ticks) {
    loadFloat(m_day, ticks);
}

void SunShader::getUniforms() {
    BasicShader::getUniforms();
    m_day = glGetUniformLocation(m_id, "dayTime");
}