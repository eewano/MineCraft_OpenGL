#include "Context.hpp"

#include <GL/glew.h>

Context::Context() {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 3;
    settings.minorVersion = 3;
    settings.depthBits = 24;
    settings.stencilBits = 8;

    window.create({1280, 720}, "Minecraft", sf::Style::Close, settings);

    glewInit();
    glewExperimental = GL_TRUE;
    glViewport(0, 0, 1280, 720);

//    glCullFace(GL_BACK);

    window.setFramerateLimit(60);
}
