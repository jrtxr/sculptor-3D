#ifndef FIGURA_GEOMETRICA_H
#define FIGURA_GEOMETRICA_H
#include "sculptor.h"

class Figura_Geometrica
{
public:
    Figura_Geometrica();

     virtual void draw(Sculptor &t)=0;

     virtual ~Figura_Geometrica();
};

#endif // FIGURA_GEOMETRICA_H
