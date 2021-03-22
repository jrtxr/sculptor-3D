#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <math.h>
#include "escultor.h"

using namespace std;

//Cria o construtor da classe Sculptor
Sculptor::Sculptor(int _nx, int _ny, int _nz)
{
    //Inicializa as dimensões da matriz de voxel
    nx=_nx, ny=_ny, nz=_nz;
    //Alocação dinâmica de memória do ponteiro para ponteiro para ponteiro para voxel.
    v= new Voxel **[nx];
    for(int i=0; i<nx; i++)
    {
        v[i]= new Voxel *[ny];
        for(int j=0; j<ny; j++)
            v[i][j]= new Voxel [nz];
    }
    //Inicializa o ponteiro que aponta para um ponteiro que aponta para outro ponteiro que aponta para voxel com valor nulo.
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                v[i][j][k].isOn=false;
            }
        }
    }
}
//Cria o destrutor da classe Sculptor
Sculptor::~Sculptor()
{
    //Libera a memória alocada para matriz de voxels
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            delete [] v[i][j];
        }
        delete [] v[i];
    }
    delete [] v;
    //Zera o restante dos objetos da classe
    nx=ny=nz=0;
    r=g=b=a=0;
}

//Define a cor do desenho
void Sculptor::setColor(float r, float g, float b, float alpha)
{
    this->r=r;
    this->g=g;
    this->b=b;
    a=alpha;
}

void Sculptor::putVoxel(int x, int y, int z)
{
    //Para ativar o voxel na posição (x,y,z) é feito isOn=true.
     if (x>=0 && x<nx && y>=0 && y<ny && z>=0 && z<nz)
    {
        v[x][y][z].isOn=true;
        v[x][y][z].r=r;
        v[x][y][z].g=g;
        v[x][y][z].b=b;
        v[x][y][z].a=a;
    }
}

void Sculptor::cutVoxel(int x, int y, int z)
{
    //Para desativar o voxel na posição (x,y,z) é feito isOn=false.
     if (x>=0 && x<nx && y>=0 && y<ny && z>=0 && z<nz)
    {
        v[x][y][z].isOn=false;
    }
}

void Sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    /*Para isso, temos 3 estruturas de repetição que varrem do menor ao maior valor do intervalo. Na estrutura de repetição
     mais interna a função putVoxel é chamada, assim são ativados os voxels que irão formar o cubo. */
    for(int i=x0; i<x1; i++)
    {
        for(int j=y0; j<y1; j++)
        {
            for(int k=z0; k<z1; k++)
            {
                putVoxel(i,j,k);
            }
        }
    }
}

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1)
{
    /*Para isso, temos 3 estruturas de repetição que varrem do menor ao maior valor do intervalo. Ao contrário do caso anterior,
    na estrutura de repetição mais interna a função cutVoxel é chamada, assim são desativados os voxels no intervalo definido. */
    for(int i=x0; i<x1; i++)
    {
        for(int j=y0; j<y1; j++)
        {
            for(int k=z0; k<z1; k++)
            {
                cutVoxel(i,j,k);
            }
        }
    }

}

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    /*Para isso as variáveis auxiliares px, py e pz foram criadas. Elas são utilizadas dentro do laço de repetição e exercem o
    papel de guardar os valores da diferença entre os pontos contidos no R³ e o centro da esfera, seguindo a equação:
    (x-x0)²+(y-y0)²+(z-z0)²= raio². Dessa forma, a esfera é desenhada mediante duas condições: 1) satisfazer a equação da esfera,
    2) está contida na matriz tridimensional de voxels. */

    int px=0,py=0,pz=0;
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                px=i-xcenter;
                py=j-ycenter;
                pz=k-zcenter;
                if(pow(px,2)+pow(py,2)+pow(pz,2)<=pow(radius,2))
                    {
                        if(i<nx && j<ny && k<nz && i>0 && j>0 && k>0)
                            putVoxel(i,j,k);
                    }
            }
        }
    }
}

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    /*Seguindo a mesma lógica do putSphere, a diferença entre as funções é que o cutSphere remove os voxels seguindo as
    mesmas duas condições. */

    int px=0,py=0,pz=0;
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                px=i-xcenter;
                py=j-ycenter;
                pz=k-zcenter;
                if(pow(px,2)+pow(py,2)+pow(pz,2)<=pow(radius,2))
                    {
                        if(i<nx && j<ny && k<nz && i>0 && j>0 && k>0)
                            cutVoxel(i,j,k);
                    }
            }
        }
    }
}

void Sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    /*De forma semelhante ao putSphere, as variáveis auxiliares px, py e pz foram criadas. Elas são utilizadas dentro do laço de repetição e exercem o
    papel de guardar os valores da diferença entre os pontos contidos no R³ e o centro do elipsóide, seguindo a equação:
    (x-x0)²/rx²+(y-y0)²/ry²+(z-z0)²/rz²= 1. Dessa forma, a esfera é desenhada mediante duas condições: 1) satisfazer a equação do elipsóide,
    2) está contida na matriz tridimensional de voxels. */
    int px=0,py=0,pz=0;
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                px=i-xcenter;
                py=j-ycenter;
                pz=k-zcenter;
                if((pow(px,2)/pow(rx,2))+(pow(py,2)/pow(ry,2))+(pow(pz,2)/pow(rz,2))<=1)
                    {
                        if(i<nx && j<ny && k<nz && i>0 && j>0 && k>0)
                            putVoxel(i,j,k);
                    }
            }
        }
    }
}

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    /*Seguindo a mesma lógica do putEllipsoid, a diferença entre as funções é que o cutEllipsoid remove os voxels seguindo as
    mesmas duas condições. */
    int px=0,py=0,pz=0;
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                px=i-xcenter;
                py=j-ycenter;
                pz=k-zcenter;
                if((pow(px,2)/pow(rx,2))+(pow(py,2)/pow(ry,2))+(pow(pz,2)/pow(rz,2))<=1)
                    {
                        if(i<nx && j<ny && k<nz && i>0 && j>0 && k>0)
                            cutVoxel(i,j,k);
                    }
            }
        }
    }
}
// Função membro que grava a escultura no arquivo filename com formato OFF
void Sculptor::writeOFF(char* filename)
{
    // Primeiramente, é atribuido um nome ao fluxo de saída
    ofstream fout;
    //Depois, conecta-se o fluxo de saída fout com o arquivo filename
    fout.open(filename);
    // Verifica se o fluxo foi aberto
    if (!fout.is_open())
    {
        exit(0);
    }
    //Cria as variáveis auxiliares
    int P0,P1,P2,P3,P4,P5,P6,P7,n=0,nv=0;
    P0=0;
    P1=1;
    P2=2;
    P3=3;
    P4=4;
    P5=5;
    P6=6;
    P7=7;
    //Um laço de repetição é criado para verificar o número de voxels ativados no desenho
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if (v[i][j][k].isOn==true)
                    nv++;
            }
        }
    }
    //Início o preenchimento do arquivo filename
    fout << "OFF" << endl;
    /*O número de voxels contabilizados é utilizado para determinar quantos vértices e faces há na escultura digital, ao número de arestas é atribuído o valor 0*/
    fout << 8*nv << " " << 6*nv << " 0" <<endl;

    /*Laço de repetição criado para determinar as coordenadas que serão gravadas no arquivo off. Como o desenho é feito em relação a um ponto na posição [0,0,0] e um voxel possuem lado=1. Primeiramente será verificado se o voxel está ativado nas posições [i,j,k], se sim, a coordenada do desenho será feita acrescendo ou descrecendo 0.5 de cada posição, isso se dá pois os voxels estarão centralizados no ponto [0,0,0] assim, ficará metade do voxel em -0.5 e a outra em +0.5, seguindo esse raciocínio todas as possibilidades de coordenadas foram feitas no for. */
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if (v[i][j][k].isOn==true)
                {
                    float xmin,xmax,ymin,ymax,zmin,zmax;
                    xmin=i-0.5;
                    xmax=i+0.5;
                    ymin=j-0.5;
                    ymax=j+0.5;
                    zmin=k-0.5;
                    zmax=k+0.5;

                    fout << xmin << " " << ymax << " " << zmin <<endl;
                    fout << xmin << " " << ymin << " " << zmin <<endl;
                    fout << xmax << " " << ymin << " " << zmin <<endl;
                    fout << xmax << " " << ymax << " " << zmin <<endl;
                    fout << xmin << " " << ymax << " " << zmax <<endl;
                    fout << xmin << " " << ymin << " " << zmax <<endl;
                    fout << xmax << " " << ymin << " " << zmax <<endl;
                    fout << xmax << " " << ymax << " " << zmax <<endl;
                }
            }
        }
    }
    /*Após determinar as coordenadas será definido como as faces do voxel serão desenhadas. Primeiramente, O número 4 está
    fixado pois representa o número de vértices que é imutável. Depois dele, seguindo a regra da mão direita, a sequência de
    vértices que formará as faces estão representadas no laço de repetição através das variáveis auxiliares. Elas irão, de
    acordo com seu índice, na linha do arquivo off coletar a coordenada em que o voxel deverá ser desenhado.  Ao lado disso, estão as as cores que deverão ser atribuídas a esse voxel. Dessa forma será possível desenhar qualquer uma das figuras das funções membro*/
    for(int i=0; i<nx; i++)
    {
        for(int j=0; j<ny; j++)
        {
            for(int k=0; k<nz; k++)
            {
                if (v[i][j][k].isOn==true)
                {
                    fout.setf(std::ios::showpoint);
                    fout << 4 << " " << P0+n << " " << P3+n << " " << P2+n << " " << P1+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << 4 << " " << P4+n << " " << P5+n << " " << P6+n << " " << P7+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << 4 << " " << P0+n << " " << P1+n << " " << P5+n << " " << P4+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << 4 << " " << P0+n << " " << P4+n << " " << P7+n << " " << P3+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << 4 << " " << P7+n << " " << P6+n << " " << P2+n << " " << P3+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    fout << 4 << " " << P1+n << " " << P2+n << " " << P6+n << " " << P5+n << " " << v[i][j][k].r << " " << v[i][j][k].g << " " << v[i][j][k].b << " " << v[i][j][k].a << endl;
                    n+=8;

                }
            }
        }
    }
    //encerra o fluxo
    fout.close();
}