#ifndef RenderMaster_hpp
#define RenderMaster_hpp

#include "QuadRenderer.hpp"

#include <SFML/Graphics.hpp>

class Camera;

class RenderMaster {
public:
    void drawQuad(const glm::vec3 &pos);

    void finishRender(sf::RenderWindow &window, const Camera &camera);

private:
    QuadRenderer m_quadRenderer;
};

#endif /* RenderMaster_hpp */
