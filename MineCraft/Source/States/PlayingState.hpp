#ifndef PlayingState_hpp
#define PlayingState_hpp

#include "StateBase.h"
#include "../Player/Player.hpp"

class StatePlaying : public StateBase {
public:
    StatePlaying(Application &app);

    void handleEvent(sf::Event e);

    void handleInput();

    void update(float deltaTime);

    void render(RenderMaster &renderer);

private:
    Player m_player;
};

#endif /* PlayingState_hpp */
