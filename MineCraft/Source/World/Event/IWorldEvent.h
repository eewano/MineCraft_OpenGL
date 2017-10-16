#ifndef IWorldEvent_h
#define IWorldEvent_h

class World;

struct IWorldEvent {
    virtual ~IWorldEvent() = default;

    virtual void handle(World &world) = 0;
};

#endif /* IWorldEvent_h */
