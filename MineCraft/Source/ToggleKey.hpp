#ifndef ToggleKey_hpp
#define ToggleKey_hpp

#include <SFML/Graphics.hpp>

class ToggleKey {
public:
    ToggleKey(sf::Keyboard::Key);

    bool isKeyPressed();

private:
    sf::Keyboard::Key m_key;
    sf::Clock m_delayTimer;
};

#endif /* ToggleKey_hpp */
