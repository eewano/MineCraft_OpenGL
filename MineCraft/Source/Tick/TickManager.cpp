#include "TickManager.hpp"
#include <SFML/System.hpp>
#include <iostream>

TickManager::TickManager() {
    m_tickTime = 0;
}

void TickManager::add(std::shared_ptr<TickObject> tick) {
    m_tickObjects.push_back(tick);
}

void TickManager::run() {
    sf::Clock clock;
    sf::Time time;

    while (g_window->isOpen()) {
        time = clock.getElapsedTime();

        if ((time.asMilliseconds() / 50) > m_tickTime) {
            if (!m_tickObjects.empty()) {
                for (auto t : m_tickObjects) {
                    t->TickUpdate(m_tickTime);
                }
            }
        }

        m_tickTime = (time.asMilliseconds() / 50);

        if (m_tickTime > 23999) {
            m_tickTime = 0;
            clock.restart();
        }
    }
}

int TickManager::getTickTime() {
    return m_tickTime;
}