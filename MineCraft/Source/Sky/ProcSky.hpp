#ifndef ProcSky_hpp
#define ProcSky_hpp

#include "../Shaders/ProcSkyShader.hpp"
#include "../Model.hpp"
#include "../Camera.hpp"

class Camera;

class ProcSky {
public:
    ProcSky();

    void Render(const Camera &camera);

private:
    ProcSkyShader m_shader;
    Model m_skybox;
};

#endif /* ProcSky_hpp */
