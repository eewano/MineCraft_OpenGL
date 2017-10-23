#ifndef TextureAtlas_hpp
#define TextureAtlas_hpp

#include "BasicTexture.hpp"

class TextureAtlas : public BasicTexture {
public:
    TextureAtlas(const std::string &textureFileName);

    std::array<GLfloat, 8> getTexture(const sf::Vector2i &coords);

private:
    int m_imageSize;
    int m_individualTextureSize;
};

#endif /* TextureAtlas_hpp */
