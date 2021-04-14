#ifndef CUTVOXEL_H
#define CUTVOXEL_H
#include "figura_geometrica.h"
#include "sculptor.h"
/** @brief Classe herdeira de FiguraGeometrica,
* responsável por remover pontos em nossa escultura.
*/

class Cutvoxel : public Figura_Geometrica
{
protected:
    int x,y,z;

public:
    Cutvoxel(int x_, int y_, int z_);
   
    ~Cutvoxel();
    
    void draw(Sculptor &t);

};

#endif // CUTVOXEL_H
