#ifndef PUTELLIPSOID_H
#define PUTELLIPSOID_H
#include "Figura_Geometrica.h"


class putellipsoid : public Figura_Geometrica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
    float r,g,b,a;
public:
    putellipsoid(int xcenter_,int ycenter_,int zcenter_,int rx_,int ry_,int rz_,float r_,float g_,float b_,float a_);
    ~putellipsoid();
    void draw(Sculptor &t);

};


#endif // PUTELLIPSOID_H
