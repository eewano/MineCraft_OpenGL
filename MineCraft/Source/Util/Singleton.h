#ifndef Singleton_h
#define Singleton_h

#include "NonCopyable.h"
#include "NonMovable.h"

class Singleton : public NonMovable, public NonCopyable {

};

#endif /* Singleton_h */
