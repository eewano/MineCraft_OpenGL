#ifndef Random_hpp
#define Random_hpp

#include <random>
#include <ctime>

#include "Singleton.h"

class RandomSingleton : public Singleton {
public:
    static RandomSingleton &get();

    template<typename T>
    T intInRange(T low, T high) {
        static_assert(std::is_integral<T>::value, "Not integral type!");
        std::uniform_int_distribution<T> dist(low, high);
        return dist(m_randomEngine);
    }

private:
    RandomSingleton();

    std::mt19937 m_randomEngine;
};

template<typename REngine = std::mt19937>
class Random {
public:
    Random() {
        m_randomEngine.seed(std::time(nullptr));
        for (int i = 0; i < 5; i++) {
            intInRange(i, i * 5);
        }
    }

    template<typename T>
    T intInRange(T low, T high) {
        static_assert(std::is_integral<T>::value, "Not integral type!");
        std::uniform_int_distribution<T> dist(low, high);
        return dist(m_randomEngine);
    }

private:
    REngine m_randomEngine;
};

#endif /* Random_hpp */
