#ifndef SFMLRenderer_hpp
#define SFMLRenderer_hpp

#include <SFML/Graphics.hpp>
#include <vector>

class SFMLRenderer {
public:
    void add(const sf::Drawable &drawable);

    void render(sf::RenderWindow &window);

private:
    std::vector<const sf::Drawable *> m_draws;
};

#endif /* SFMLRenderer_hpp */
