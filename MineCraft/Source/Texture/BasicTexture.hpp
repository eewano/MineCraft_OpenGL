#ifndef BasicTexture_hpp
#define BasicTexture_hpp

#include <GL/glew.h>
#include <string>

#include "../Util/NonCopyable.h"

class BasicTexture {
public:
    BasicTexture() = default;

    BasicTexture(const std::string &file);

    ~BasicTexture();

    void loadFromFile(const std::string &file);

    void bindTexture() const;

private:
    GLuint m_id;
};

#endif /* BasicTexture_hpp */
