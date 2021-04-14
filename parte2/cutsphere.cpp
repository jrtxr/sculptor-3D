#include "cutsphere.h"
#include "sculptor.h"


Cutsphere::Cutsphere(int xcenter_, int ycenter_, int zcenter_, int radius_)
{
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    radius = radius_;

}

Cutsphere::~Cutsphere()
{

}

void Cutsphere::draw(Sculptor &t)
{

    for(int i = xcenter-radius; i<xcenter+radius; i++){
            for(int j = ycenter-radius; j<ycenter+radius; j++){
                for(int k = zcenter-radius; k<zcenter+radius; k++){
                    if(((i-xcenter)*(i-xcenter) + (j-ycenter)*(j-ycenter) + (k-zcenter)*(k-zcenter))<= (radius*radius)){
                       t.cutVoxel(i,j,k);
                    }
                }
            }
        }

    }
