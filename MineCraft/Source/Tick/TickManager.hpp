#ifndef TickManager_hpp
#define TickManager_hpp

#include "TickObject.h"
#include <vector>
#include <memory>
#include "../Context.hpp"

class TickManager {
public:
    TickManager();

    void add(std::shared_ptr<TickObject> tick);

    void run();

    int getTickTime();

private:
    std::vector<std::shared_ptr<TickObject>> m_tickObjects;
    unsigned int m_tickTime;
};

#endif /* TickManager_hpp */
