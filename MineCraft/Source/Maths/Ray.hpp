#ifndef Ray_hpp
#define Ray_hpp

#include "glm.h"

class Ray {
public:
    Ray(const glm::vec3 &position, const glm::vec3 &direction);

    void step(float scale);

    const glm::vec3 &getend() const;

    float getLength() const;

private:
    glm::vec3 m_rayStart;
    glm::vec3 m_rayEnd;
    glm::vec3 m_direction;
};

#endif /* Ray_hpp */