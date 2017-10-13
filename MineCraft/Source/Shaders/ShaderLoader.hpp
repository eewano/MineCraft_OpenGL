#ifndef ShaderLoader_hpp
#define ShaderLoader_hpp

#include <string>
#include <GL/glew.h>

GLuint loadShaders(const std::string &vertexShader, const std::string &fragmentShader);

#endif /* ShaderLoader_hpp */
