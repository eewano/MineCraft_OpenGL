#include "FloraRenderer.hpp"

#include "../World/Chunk/ChunkMesh.hpp"
#include "../World/Block/BlockDatabase.hpp"
#include "../Application.hpp"
#include "../Camera.hpp"

#include "../Sky/SkyManager.hpp"

#include <iostream>

void FloraRenderer::add(const ChunkMesh &mesh) {
    m_chunks.push_back(&mesh.getModel().getRenderInfo());
}

void FloraRenderer::render(const Camera &camera, Config *conf) {
    if (m_chunks.empty()) {
        return;
    }

    glDisable(GL_BLEND);
    glDisable(GL_CULL_FACE);
    m_shader.useProgram();

    m_shader.loadProjectionViewMatrix(camera.getProjectionViewMatrix());
    m_shader.loadTime(g_info.elapsedTime);
    m_shader.loadLight(g_info.lighting);

    for (auto mesh : m_chunks) {
        GL::bindVAO(mesh->vao);
        GL::drawElements(mesh->indicesCount);
    }

    m_chunks.clear();
}