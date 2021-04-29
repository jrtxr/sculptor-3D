#include <iostream>
#ifndef SCULPTOR_HPP
#define SCULPTOR_HPP
#include "voxel.h"
using namespace std;

/**
 * @brief A classe Sculptor desempenha o papel de realizar esculturas em blocos tridimensionais representados por matrizes digitais
 * - Para isso, a classe conta com uma matriz tridimensional de voxels que possui dimensão [nx,ny,nz]; cor r, g ou b e transparência a. Cada uma das cores citadas representam as dosagens de vermelho (r), verde (g) e azul (b) usadas para compor uma cor específica ou uma composição das três.
 */
class Sculptor {
protected:
/**
 * @brief  Cria uma matriz tridimensional do tipo voxel
 * 
 */
  Voxel ***v;
/**
   * @brief armazena a dimensão x da matriz de voxel
   * 
   */
  int nx;
  /**
   * @brief armazena a dimensão y da matriz de voxel
   * 
   */
  int ny;
  /**
   * @brief armazena a dimensão z da matriz de voxel
   * 
   */
  int nz; 
  /**
   * @brief armazena o valor correspondente a cor vermelha 
   * 
   */
  float r;
  /**
   * @brief armazena o valor correspondente a cor verde 
   * 
   */
  float g;
  /**
   * @brief armazena o valor correspondente a cor azul 
   * 
   */
  float b;
  /**
   * @brief armazena o valor correspondente a transparência do desenho 
   * 
   */
  float a; 

public:
/**
 * @brief Construtor da classe Sculptor
 * - O construtor dessa classe aloca memória para matriz de voxels e inicializa os objetos da classe.
 * @param _nx é o valor inicial da dimensão nx
 * @param _ny é o valor inicial da dimensão ny
 * @param _nz é o valor inicial da dimensão nz
 */
  Sculptor(int _nx, int _ny, int _nz);
  /**
   * @brief Destrutor da classe Sculptor
   * - O destrutor dessa classe libera a memória alocada para matriz de voxels e zera os objetos da classe.
   * 
   */
  ~Sculptor();
  /**
   * @brief Função membro que atribui cor ao desenho
   * 
   * @param r é o valor atribuído ao objeto r, manipulando a cor vermelha do desenho
   * @param g é o valor atribuído ao objeto g, manipulando a cor verde do desenho
   * @param b é o valor atribuído ao objeto b, manipulando a cor azul do desenho
   * @param alpha é o valor atribuído ao objeto a, manipulando a transparência do desenho
   */
  void setColor(float r, float g, float b, float alpha);
  /**
   * @brief Função membro que \b ativa o voxel na posição (x,y,z) e atribui a cor atual do desenho a ele
   * 
   * @param x armazena a posição x onde se pretende ativar o voxel v 
   * @param y armazena a posição y onde se pretende ativar do voxel v
   * @param z armazena a posição z onde se pretende ativar do voxel v
   */
  void putVoxel(int x, int y, int z);
  /**
   * @brief Função membro que \b desativa o voxel na posição (x,y,z)
   * 
   * @param x armazena a posição x onde se pretende desativar o voxel v 
   * @param y armazena a posição y onde se pretende desativar o voxel v 
   * @param z armazena a posição z onde se pretende desativar o voxel v 
   */
  void cutVoxel(int x, int y, int z);
  /**
   * @brief Função membro que \b ativa todos os voxels no intervalo [x0,x1], [y0,y1], [z0,z1] criando um cubo com a cor atual do desenho
   * 
   * @param x0 armazena a posição inicial de x no intervalo
   * @param x1 armazena a posição final de x no intervalo
   * @param y0 armazena a posição inicial de y no intervalo
   * @param y1 armazena a posição final de y no intervalo
   * @param z0 armazena a posição inicial de z no intervalo
   * @param z1 armazena a posição final de z no intervalo
   */
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief Função membro que \b desativa  todos os voxels no intervalo [x0,x1], [y0,y1], [z0,z1]
   * @param x0 armazena a posição inicial de x no intervalo
   * @param x1 armazena a posição final de x no intervalo
   * @param y0 armazena a posição inicial de y no intervalo
   * @param y1 armazena a posição final de y no intervalo
   * @param z0 armazena a posição inicial de z no intervalo
   * @param z1 armazena a posição final de z no intervalo
   */
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  /**
   * @brief Função membro que \b ativa os voxels que satisfazem à equação da esfera e atribui a eles a cor atual do desenho
   * - A equação da esfera obedece a equação (x-x0)²+(y-y0)²+(z-z0)²= r², onde P[x0,y0,z0] é o ponto na qual a esfera está centralizada. 
   * @param xcenter armazena a posição x do ponto em que a esfera está centralizada
   * @param ycenter armazena a posição y do ponto em que a esfera está centralizada
   * @param zcenter armazena a posição z do ponto em que a esfera está centralizada
   * @param radius armazena o valor do raio da esfera
   */
  void putSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief Função membro que \b desativa os voxels que satisfazem à equação da esfera
   * 
   * @param xcenter armazena a posição x do ponto em que a esfera está centralizada
   * @param ycenter armazena a posição y do ponto em que a esfera está centralizada
   * @param zcenter armazena a posição z do ponto em que a esfera está centralizada
   * @param radius armazena o valor do raio da esfera
   */
  void cutSphere(int xcenter, int ycenter, int zcenter, int radius);
  /**
   * @brief Função membro que \b ativa todos os voxels que satisfazem à equação do elipsóide e atribui a eles a cor atual de desenho
   * - A equação da esfera obedece a equação (x-x0)²+(y-y0)²+(z-z0)²= r², onde P[x0,y0,z0] é o ponto na qual a esfera está centralizada.
   * -rx, ry e rz são valores que determinam as dimensões e forma do elipsóide.
   * @param xcenter armazena a posição x do ponto em que o elipsóide está centralizado
   * @param ycenter armazena a posição y do ponto em que o elipsóide está centralizado
   * @param zcenter armazena a posição z do ponto em que o elipsóide está centralizado
   * @param rx determina a dimensão do elipsóide em x
   * @param ry determina a dimensão do elipsóide em y
   * @param rz determina a dimensão do elipsóide em z
   */
  void putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief Função membro que \b desativa todos os voxels que satisfazem à equação do elipsóide
   * @param xcenter armazena a posição x do ponto em que o elipsóide está centralizado
   * @param ycenter armazena a posição y do ponto em que o elipsóide está centralizado
   * @param zcenter armazena a posição z do ponto em que o elipsóide está centralizado
   * @param rx determina a dimensão do elipsóide em x
   * @param ry determina a dimensão do elipsóide em y
   * @param rz determina a dimensão do elipsóide em z
   */
  void cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz);
  /**
   * @brief Função membro que grava a escultura no arquivo filename com formato OFF
   * - Para isso, um laço de repetição será criado para determinar as coordenadas que serão gravadas no arquivo off. Após determinar as coordenadas será definido como as faces do voxel serão desenhadas, seguindo a regra da mão direita. E por último a cor será atribuída. 
   * - Com o arquivo off será possível visualizar a escultura digital em um software de visualização.
   * @param filename nome do arquivo que irá conter a escultura 3D
   */
  void writeOFF(char* filename);
};

#endif // SCULPTOR_HPP