#ifndef ChunkShader_hpp
#define ChunkShader_hpp

#include "BasicShader.hpp"

class ChunkShader : public BasicShader {
public:
    ChunkShader();

private:
    void getUniforms() override;
};

#endif /* ChunkShader_hpp */
