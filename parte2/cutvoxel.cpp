#include "cutvoxel.h"
#include "sculptor.h"


Cutvoxel::Cutvoxel(int x_, int y_, int z_)
{
    x = x_;
    y = y_;
    z = z_;
}

Cutvoxel::~Cutvoxel()
{

}

void Cutvoxel::draw(Sculptor &t)
{
    t.cutVoxel(x,y,z);
}
