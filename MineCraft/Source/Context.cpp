#include "Context.hpp"
#include "GlobalInfo.hpp"
#include <GL/glew.h>

sf::RenderWindow *g_window;

Context::Context(const Config &config) {
    sf::ContextSettings settings;
    settings.antialiasingLevel = 0;
    settings.majorVersion = 3;
    settings.minorVersion = 3;
    settings.depthBits = 24;
    settings.stencilBits = 8;
//    settings.attributeFlags = sf::ContextSettings::Core;
    //This is no longer necessary due to the Mac support update.

    if (config.isFullscreen) {
        window.create(sf::VideoMode::getDesktopMode(), "MineCraft Week", sf::Style::Fullscreen, settings);
        g_info.resolutionX = sf::VideoMode::getDesktopMode().width;
        g_info.resolutionY = sf::VideoMode::getDesktopMode().height;
    } else {
        sf::VideoMode winMode(config.windowX, config.windowY);
        window.create(winMode, "MineCraft Week", sf::Style::Close, settings);
        g_info.resolutionX = config.windowX;
        g_info.resolutionY = config.windowY;
    }

    g_window = &window;
    glewExperimental = GL_TRUE;
    GLenum err = glewInit();

    if (err != GLEW_OK) {
        throw std::runtime_error("GLEW Init failed.");
    }

    glViewport(0, 0, window.getSize().x, window.getSize().y);

    glCullFace(GL_BACK);
    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
}
