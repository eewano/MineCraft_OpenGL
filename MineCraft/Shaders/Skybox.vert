#version 330

layout (location = 0) in vec3 inVertexPosision;

out vec3 passTextureCoord;

uniform mat4 projectionMatrix;
uniform mat4 viewMatrix;

void main() {
    gl_Position = projectionMatrix * viewMatrix * vec4(inVertexPosision, 1.0);

    passTextureCoord = inVertexPosision;
}
