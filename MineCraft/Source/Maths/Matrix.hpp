#ifndef Matrix_hpp
#define Matrix_hpp

#include "glm.h"

class Camera;

class Entity;

glm::mat4 makeModelMatrix(const Entity &entity);

glm::mat4 makeViewMatrix(const Camera &camera);

glm::mat4 makeProjectionMatrix(float fov);

#endif /* Matrix_hpp */
