#ifndef Player_hpp
#define Player_hpp

#include <SFML/Graphics.hpp>

#include "../Entity.h"

class Player : public Entity {
public:
    Player();

    void handleInput(const sf::RenderWindow &window);

    void update(float dt);

private:
    void keyboardInput();

    void mouseInput(const sf::RenderWindow &window);

    glm::vec3 m_velocity;
};

#endif /* Player_hpp */
