#ifndef PUTVOXEL_H
#define PUTVOXEL_H
#include "Figura_Geometrica.h"


class putvoxel: public Figura_Geometrica
{
protected:
    int x,y,z;
    float r,g,b,a;

public:
    putvoxel(int x_,int y_,int z_, float r_,float g_, float b_,float a_);
    ~putvoxel();

    void draw(Sculptor &t);

};

#endif // PUTVOXEL_H
