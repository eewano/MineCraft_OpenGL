#ifndef PlayerDigEvent_hpp
#define PlayerDigEvent_hpp

#include <SFML/Graphics.hpp>

#include "IWorldEvent.h"
#include "../../Maths/glm.h"

class Player;

class PlayerDigEvent : public IWorldEvent {
public:
    PlayerDigEvent(sf::Mouse::Button button, const glm::vec3 &location, Player &player);

    void handle(World &world);

private:
    void dig(World &world);

    sf::Mouse::Button m_buttonPress;
    glm::vec3 m_digSpot;
    Player *m_pPlayer;
};

#endif /* PlayerDigEvent_hpp */
