#ifndef StateBase_h
#define StateBase_h

#include <SFML/Graphics.hpp>

class RenderMaster;

class Application;

class StateBase {
public:
    StateBase(Application &app) : m_pApplication(&app) {

    }

    virtual ~StateBase() noexcept = default;

    virtual void handleEvent(sf::Event e) = 0;

    virtual void handleInput() = 0;

    virtual void update(float deltaTime) = 0;

    virtual void render(RenderMaster &renderer) = 0;

protected:
    Application *m_pApplication;
};

#endif /* StateBase_h */
