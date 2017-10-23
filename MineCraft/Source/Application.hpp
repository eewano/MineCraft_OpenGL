#ifndef Application_hpp
#define Application_hpp

#include <vector>
#include <memory>

#include "States/StateBase.h"
#include "Renderer/RenderMaster.hpp"

#include "Context.hpp"
#include "Camera.hpp"
#include "GlobalInfo.hpp"

class Application {
public:
    Application(const Config &config);

    void runLoop();

    template<typename T, typename... Args>
    void pushState(Args &&... args) {
        m_states.push_back(std::make_unique<T>(std::forward<Args>(args)...));
        auto &s = m_states.back();
        s->onOpen();
    }

    void popState();

    Camera &getCamera() {
        return m_camera;
    }

    const sf::RenderWindow &getWindow() const {
        return m_context.window;
    }

    void turnOffMouse();

    void turnOnMouse();

private:
    void handleEvents();

    std::vector<std::unique_ptr<StateBase>> m_states;

    Context m_context;
    RenderMaster m_masterRenderer;
    Camera m_camera;

    const Config &m_config;

    bool m_isPopState = false;
};

#endif /* Application_hpp */
