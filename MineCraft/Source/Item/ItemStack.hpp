#ifndef ItemStack_hpp
#define ItemStack_hpp

#include "Material.hpp"

class ItemStack {
public:
    ItemStack(const Material &material, int amount);

    int add(int amount);

    void remove();

    int getNumInStack() const;

    const Material &getMaterial() const;

private:
    const Material *m_pMaterial = &Material::NOTHING;
    int m_numInStack = 0;
};

#endif /* ItemStack_hpp */
