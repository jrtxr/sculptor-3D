#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "escultor.cpp"

using namespace std;

int main()
{

  Sculptor *coracao = new Sculptor(40, 40, 40);
  coracao->setColor(1,1,1,1);
  coracao->putVoxel(25,25,25);
  coracao->putVoxel(24,25,24);
  coracao->putVoxel(23,25,23);
  coracao->putVoxel(22,25,23);
  coracao->putVoxel(21,25,23);
  coracao->putVoxel(27,25,23);
  coracao->putVoxel(28,25,23);
  coracao->putVoxel(29,25,23);
  coracao->putVoxel(20,25,24);
  coracao->putVoxel(19,25,25);
  coracao->putVoxel(19,25,26);
  coracao->putVoxel(19,25,27);
  coracao->putVoxel(20,25,28);
  coracao->putVoxel(21,25,29);
  coracao->putVoxel(22,25,30);
  coracao->putVoxel(23,25,31);
  coracao->putVoxel(24,25,32);
  coracao->putVoxel(25,25,33);
  coracao->putVoxel(30,25,24);
  coracao->putVoxel(31,25,25);
  coracao->putVoxel(31,25,26);
  coracao->putVoxel(31,25,27);
  coracao->putVoxel(30,25,28);
  coracao->putVoxel(29,25,29);
  coracao->putVoxel(28,25,30);
  coracao->putVoxel(27,25,31);
  coracao->putVoxel(26,25,32);
  coracao->putVoxel(26,25,24);

  coracao->setColor(1,0,0.5,1);
  coracao->putVoxel(23,25,24);
  coracao->putVoxel(22,25,24);
  coracao->putVoxel(21,25,24);
  coracao->putVoxel(24,25,25);
  coracao->putVoxel(23,25,25);
  coracao->putVoxel(22,25,25);
  coracao->putVoxel(21,25,25);
  coracao->putVoxel(20,25,25);
  coracao->putVoxel(30,25,26);
  coracao->putVoxel(29,25,26);
  coracao->putVoxel(28,25,26);
  coracao->putVoxel(27,25,26);
  coracao->putVoxel(26,25,26);
  coracao->putVoxel(25,25,26);
  coracao->putVoxel(24,25,26);
  coracao->putVoxel(23,25,26);
  coracao->putVoxel(22,25,26);
  coracao->putVoxel(21,25,26);
  coracao->putVoxel(20,25,26);
  coracao->putVoxel(30,25,27);
  coracao->putVoxel(29,25,27);
  coracao->putVoxel(28,25,27);
  coracao->putVoxel(27,25,27);
  coracao->putVoxel(26,25,27);
  coracao->putVoxel(25,25,27);
  coracao->putVoxel(24,25,27);
  coracao->putVoxel(23,25,27);
  coracao->putVoxel(22,25,27);
  coracao->putVoxel(21,25,27);
  coracao->putVoxel(20,25,27);
  coracao->putVoxel(29,25,28);
  coracao->putVoxel(28,25,28);
  coracao->putVoxel(27,25,28);
  coracao->putVoxel(26,25,28);
  coracao->putVoxel(25,25,28);
  coracao->putVoxel(24,25,28);
  coracao->putVoxel(23,25,28);
  coracao->putVoxel(22,25,28);
  coracao->putVoxel(21,25,28);
  coracao->putVoxel(28,25,29);
  coracao->putVoxel(27,25,29);
  coracao->putVoxel(26,25,29);
  coracao->putVoxel(25,25,29);
  coracao->putVoxel(24,25,29);
  coracao->putVoxel(23,25,29);
  coracao->putVoxel(22,25,29);
  coracao->putVoxel(27,25,30);
  coracao->putVoxel(26,25,30);
  coracao->putVoxel(25,25,30);
  coracao->putVoxel(24,25,30);
  coracao->putVoxel(23,25,30);
  coracao->putVoxel(26,25,31);
  coracao->putVoxel(25,25,31);
  coracao->putVoxel(24,25,31);
  coracao->putVoxel(25,25,32);
  coracao->putVoxel(27,25,24);
  coracao->putVoxel(28,25,24);
  coracao->putVoxel(29,25,24);
  coracao->putVoxel(26,25,25);
  coracao->putVoxel(27,25,25);
  coracao->putVoxel(28,25,25);
  coracao->putVoxel(29,25,25);
  coracao->putVoxel(30,25,25);

  coracao->cutVoxel(22,22,22);

  coracao->writeOFF((char*)"coracao.off");

  return 0;
}
