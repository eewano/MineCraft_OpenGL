#ifndef BlockDatabase_hpp
#define BlockDatabase_hpp

#include <memory>
#include <array>

#include "../../Util/Singleton.h"

#include "BlockTypes/BlockType.hpp"
#include "BlockId.h"

#include "../../Texture/TextureAtlas.hpp"

class BlockDatabase : public Singleton {
public:
    static BlockDatabase &get();

    const BlockType &getBlock(BlockId id) const;

    const BlockData &getData(BlockId id) const;

    TextureAtlas textureAtlas;

private:
    BlockDatabase();

    std::array<std::unique_ptr<BlockType>,
            (unsigned) BlockId::NUM_TYPES> m_blocks;
};

#endif /* BlockDatabase_hpp */
