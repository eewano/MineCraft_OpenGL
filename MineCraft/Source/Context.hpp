#ifndef Context_hpp
#define Context_hpp

#include <SFML/Graphics.hpp>

#include "Config.h"

extern sf::RenderWindow *g_window;

struct Context {
    Context(const Config &config);

    sf::RenderWindow window;
};

#endif /* Context_hpp */
