#include "putvoxel.h"
#include "sculptor.h"

putvoxel::putvoxel(int x_,int y_,int z_, float r_,float g_, float b_,float a_)
{
    x=x_;
    y=y_;
    z=z_;
    r=r_;
    g=g_;
    b=b_;
    a=a_;

}
putvoxel::~putvoxel(){

}

void putvoxel::draw(Sculptor &t){
    t.setColor(r,g,b,a);
    t.putVoxel(x,y,z);

}
