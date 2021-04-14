#ifndef CUTSPHERE_H
#define CUTSPHERE_H
#include "figura_geometrica.h"
#include "sculptor.h"

/** @brief Classe herdeira de FiguraGeometrica,
* responsável por remover esferas em nossa escultura.
*/

class Cutsphere : public Figura_Geometrica
{
protected:
    int xcenter,ycenter,zcenter,radius;

public:
    Cutsphere(int xcenter_, int ycenter_, int zcenter_, int radius_);
   
    ~Cutsphere();
    
    void draw(Sculptor &t);
};

#endif // CUTSPHERE_H
