#include <iostream>
#ifndef VOXEL_H
#define VOXEL_H

// A struct Voxel desempenha o papel de um pixel 3D
struct Voxel {

  float r; // armazena o valor correspondente a cor vermelha
  float g; // armazena o valor correspondente a cor verde
  float b; // armazena o valor correspondente a cor azul

  float a;//armazena o valor correspondente a transparência do desenho

  bool isOn; // define se o voxel correspondente deve ser incluído no arquivo digital 
};
#endif // VOXEL_H