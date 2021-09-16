#include "cup.h"

class Cup
{
private:
    cup_materal_t material;
    int volume;
    cup_size_t size;

public:
    Cup(cup_materal_t mat, int vol, cup_size_t sz)
    {
        material = mat;
        volume = vol;
        size = sz;
    }
};
