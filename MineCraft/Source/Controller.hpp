#ifndef Controller_hpp
#define Controller_hpp

#include "Maths/glm.h"
#include <SFML/Graphics.hpp>

//WIP
class Controller {
    glm::vec3 translateInput();

    sf::Vector2i mouseInput();
};

#endif /* Controller_hpp */
