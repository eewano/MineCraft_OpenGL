#ifndef PlayingState_hpp
#define PlayingState_hpp

#include "StateBase.h"
#include "../Player/Player.hpp"

#include "../World/Chunk/Chunk.hpp"
#include "../World/World.hpp"
#include "../Util/FPSCounter.hpp"

#include "../Tick/TickManager.hpp"
#include <thread>
#include <memory>
#include "../Sky/SkyManager.hpp"

extern std::shared_ptr<SkyManager> m_sky;

class StatePlaying : public StateBase {
public:
    StatePlaying(Application &app, const Config &config);

    ~StatePlaying();

    void handleEvent(sf::Event e) override;

    void handleInput() override;

    void update(float deltaTime) override;

    void render(RenderMaster &renderer) override;

    void onOpen() override;

private:
    Player m_player;
    World m_world;

    sf::RectangleShape m_crosshair;
    sf::Texture m_chTexture;

    FPSCounter m_fpsCounter;

    std::unique_ptr<TickManager> m_tickManager;
    std::unique_ptr<std::thread> m_tickThread;
};

#endif /* PlayingState_hpp */
