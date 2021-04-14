#include "cutbox.h"
#include "sculptor.h"

Cutbox:: Cutbox(int x_0, int x_1, int y_0, int y_1, int z_0, int z_1)
{
     x0 = x_0;
     x1 = x_1;
     y0 = y_0;
     y1 = y_1;
     z0 = z_0;
     z1 = z_1;

}

Cutbox::~Cutbox()
{

}

void Cutbox:: Cutbox::draw(Sculptor &t)
{
           for (int i = x0; i<x1; i++){
             for (int j = y0; j<y1; j++){
                 for (int k = z0; k<z1; k++){
                     t.cutVoxel(i,j,k);
                 }
             }
         }


}
