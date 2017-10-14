#ifndef Model_hpp
#define Model_hpp

#include "Mesh.h"

#include "Util/NonCopyable.h"

class Model : public NonCopyable {
public:
    Model() = default;

    Model(const Mesh &mesh);

    ~Model();

    void addData(const Mesh &mesh);

    void deleteData();

    void addVBO(int dimensions, const std::vector<GLfloat> &data);

    void bindVAO() const;

    int getIndicesCount() const;

private:
    void addEBO(const std::vector<GLuint> &indices);

    GLuint m_vao = 0;
    int m_vboCount = 0;
    int m_indicesCount = 0;
    std::vector<GLuint> m_buffers;
};

#endif /* Model_hpp */
