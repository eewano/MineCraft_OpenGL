#ifndef Array2D_h
#define Array2D_h

#include <array>
#include <algorithm>

template<typename T, int WIDTH>
class Array2D {
    using Array = std::array<T, WIDTH * WIDTH>;

public:
    T &get(int x, int z) {
        return m_array[x * WIDTH + z];
    }

    const T &get(int x, int z) const {
        return m_array[x * WIDTH + z];
    }

    T &getMaxValue() {
        return *std::max_element(m_array.begin(), m_array.end());
    }

    void setAll(T val) {
        m_array.fill(val);
    }

private:
    Array m_array;
};

#endif /* Array2D_h */
