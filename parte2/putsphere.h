#ifndef PUTSPHERE_H
#define PUTSPHERE_H
#include "Figura_Geometrica.h"



class putsphere : public Figura_Geometrica
{
protected:
    int xcenter,ycenter,zcenter,radius;
    float r,g,b,a;
public:
    putsphere(int xcenter_,int ycenter_,int zcenter_,int radius_,float r_,float g_,float b_,float a_);
    ~putsphere();

    void draw(Sculptor &t);
};

#endif // PUTSPHERE_H
