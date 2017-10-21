#ifndef TickObject_h
#define TickObject_h

class TickObject {
public:
    virtual ~TickObject() = default;

    virtual void TickUpdate(unsigned int tickTime) = 0;
};


#endif /* TickObject_h */
