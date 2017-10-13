#ifndef BlockId_h
#define BlockId_h

#include <cstdint>

using Block_t = uint8_t;

enum class BlockId : Block_t {
    Air = 0,
    Grass,
    Dirt,
    Stone,

    NUM_TYPES
};

#endif /* BlockId_h */
