#ifndef BlockType_hpp
#define BlockType_hpp

#include "../BlockData.hpp"

class BlockType : public NonCopyable {
public:
    BlockType(const std::string &fileName);

    virtual ~BlockType() = default;

    const BlockData &getData() const;

private:
    BlockData m_data;
};

class DefaultBlock : public BlockType {
public:
    DefaultBlock(const std::string &fileName) : BlockType(fileName) {

    }
};

#endif /* BlockType_hpp */
