#ifndef GlobalInfo_hpp
#define GlobalInfo_hpp

struct GlobalInfo {
    int resolutionX;
    int resolutionY;
    float lighting;
    int tickTime;
    int dayTime;
    float elapsedTime;
    float deltaTime;
};

extern GlobalInfo g_info;

#endif /* GlobalInfo_hpp */
