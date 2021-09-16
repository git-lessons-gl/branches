#ifndef BRANCHES_CUP_H
#define BRANCHES_CUP_H

typedef enum
{
    GLASS,
    METAL,
    CERAMIC,
    PLASTIC,

    CUP_MATERIAL_ENUM_SIZE

} cup_materal_t;

typedef enum
{
    XS,
    S,
    M,
    L,
    XL,
    XXL,

} cup_size_t;

class Cup
{
private:
    cup_materal_t material;
    int volume;
    cup_size_t size;

public:
    Cup(cup_materal_t mat, int vol, cup_size_t sz);
};

#endif // BRANCHES_CUP_H
