#ifndef CUTELLIPSOID_H
#define CUTELLIPSOID_H
#include "figura_geometrica.h"
#include "sculptor.h"


/** @brief Classe herdeira de FiguraGeometrica,
* responsável por adicionar elipsoides em nossa escultura.
*/

class Cutellipsoid : public Figura_Geometrica
{
protected:
    int xcenter,ycenter,zcenter,rx,ry,rz;
public:
    Cutellipsoid(int xcenter_, int ycenter_, int zcenter_, int rx_, int ry_, int rz_);
    
    ~Cutellipsoid();
    
    void draw(Sculptor &t);
};

#endif // CUTELLIPSOID_H
