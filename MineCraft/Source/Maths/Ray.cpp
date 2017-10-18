#include "Ray.hpp"

Ray::Ray(const glm::vec3 &position, const glm::vec3 &direction)
        : m_rayStart(position), m_rayEnd(position), m_direction(direction) {

}

void Ray::step(float scale) {
    float yaw = glm::radians(m_direction.y + 90);
    float pitch = glm::radians(m_direction.x);

    auto &p = m_rayEnd;

    p.x -= glm::cos(yaw) * scale;
    p.y -= glm::sin(yaw) * scale;
    p.z -= glm::tan(pitch) * scale;
}

const glm::vec3 &Ray::getend() const {
    return m_rayEnd;
}

float Ray::getLength() const {
    return glm::distance(m_rayStart, m_rayEnd);
}
