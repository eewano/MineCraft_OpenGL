#include "ChunkShader.hpp"

ChunkShader::ChunkShader()
        : BasicShader("ChunkVertex", "ChunkFragment") {
    getUniforms();
}

void ChunkShader::getUniforms() {
    BasicShader::getUniforms();
}
