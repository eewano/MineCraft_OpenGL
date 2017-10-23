#ifndef RenderMaster_hpp
#define RenderMaster_hpp

#include <SFML/Graphics.hpp>

#include "QuadRenderer.hpp"
#include "CubeRenderer.hpp"
#include "ChunkRenderer.hpp"
#include "SFMLRenderer.hpp"
#include "WaterRenderer.hpp"
#include "FloraRenderer.hpp"
#include "../Config.h"
#include "../Sky/SkyManager.hpp"

#include "../States/PlayingState.hpp"

class Camera;

class ChunkSection;

class RenderMaster {
public:
    RenderMaster();

    void drawSFML(const sf::Drawable &drawable);

    void drawQuad(const glm::vec3 &pos);

    void drawCube(const Entity &cube);

    void drawChunk(const ChunkSection &chunk);

    void drawSky();

    void setConfig(const Config &con);

    void finishRender(sf::RenderWindow &window, const Camera &camera);

private:
    bool setupFrameBuffers();

    //Primitives
    QuadRenderer m_quadRenderer;
    CubeRenderer m_cubeRenderer;

    //Chunks
    ChunkRenderer m_chunkRenderer;
    WaterRenderer m_waterRenderer;
    FloraRenderer m_floraRenderer;

    //Detail
    SFMLRenderer m_sfmlRenderer;

    //Other
    Config m_conf;

    GLuint m_fbo;
    GLuint m_fboTex;
    GLuint m_fboRbo;

    bool m_drawBox = false;
};

#endif /* RenderMaster_hpp */
