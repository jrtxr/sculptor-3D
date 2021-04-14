#include "cutellipsoid.h"
#include "sculptor.h"

Cutellipsoid::Cutellipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_)
{
    xcenter = xcenter_;
    ycenter = ycenter_;
    zcenter = zcenter_;
    rx = rx_;
    ry = ry_;
    rz = rz_;
}

Cutellipsoid::~Cutellipsoid()
{

}

void Cutellipsoid::Cutellipsoid::draw(Sculptor &t)
{

    for(int i = xcenter-rx; i<=xcenter+rx; i++)
    {
        for(int j = ycenter-ry; j<=ycenter+ry; j++)
        {
            for(int k = zcenter-rz; k<=zcenter+rz; k++)
            {
               if((((float)((i-xcenter)*(i-xcenter))/(float)(rx*rx))+((float)((j-ycenter)*(j-ycenter))/(float)(ry*ry))+((float)((k-zcenter)*(k-zcenter))/(float)(rz*rz)))<=1.0){

                    t.cutVoxel(i,j,k);

                }
            }
        }
    }

}
