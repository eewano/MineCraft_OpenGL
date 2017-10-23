#ifndef RenderInfo_h
#define RenderInfo_h

struct RenderInfo {
    GLuint vao = 0;
    GLuint indicesCount = 0;

    inline void reset() {
        vao = 0;
        indicesCount = 0;
    }
};

#endif /* RenderInfo_h */
