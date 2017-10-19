#ifndef ChunkShader_hpp
#define ChunkShader_hpp

#include "BasicShader.hpp"

class ChunkShader : public BasicShader {
public:
    ChunkShader();

    void loadLighting(float light);

private:
    void getUniforms() override;

    GLuint lighting;
};

#endif /* ChunkShader_hpp */
