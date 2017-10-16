#ifndef Config_h
#define Config_h

struct Config {
    int windowX = 1280;
    int windowY = 720;
    bool isFullscreen = false;
    int renderDistance = 16;
    int fov = 90;
    float gamma = 1.3f;
    float brightness = 1.15f;
    float contrast = 1.1f;
    bool postProcess = true;
};

#endif /* Config_h */
