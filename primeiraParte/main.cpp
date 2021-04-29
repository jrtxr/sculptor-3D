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

  coracao->setColor(1,0,0.5,1);
  coracao->putVoxel(23,24,24);
  coracao->putVoxel(22,24,24);
  coracao->putVoxel(21,24,24);
  coracao->putVoxel(24,24,25);
  coracao->putVoxel(23,24,25);
  coracao->putVoxel(22,24,25);
  coracao->putVoxel(21,24,25);
  coracao->putVoxel(20,24,25);
  coracao->putVoxel(30,24,26);
  coracao->putVoxel(29,24,26);
  coracao->putVoxel(28,24,26);
  coracao->putVoxel(27,24,26);
  coracao->putVoxel(26,24,26);
  coracao->putVoxel(25,24,26);
  coracao->putVoxel(24,24,26);
  coracao->putVoxel(23,24,26);
  coracao->putVoxel(22,24,26);
  coracao->putVoxel(21,24,26);
  coracao->putVoxel(20,24,26);
  coracao->putVoxel(30,24,27);
  coracao->putVoxel(29,24,27);
  coracao->putVoxel(28,24,27);
  coracao->putVoxel(27,24,27);
  coracao->putVoxel(26,24,27);
  coracao->putVoxel(25,24,27);
  coracao->putVoxel(24,24,27);
  coracao->putVoxel(23,24,27);
  coracao->putVoxel(22,24,27);
  coracao->putVoxel(21,24,27);
  coracao->putVoxel(20,24,27);
  coracao->putVoxel(29,24,28);
  coracao->putVoxel(28,24,28);
  coracao->putVoxel(27,24,28);
  coracao->putVoxel(26,24,28);
  coracao->putVoxel(25,24,28);
  coracao->putVoxel(24,24,28);
  coracao->putVoxel(23,24,28);
  coracao->putVoxel(22,24,28);
  coracao->putVoxel(21,24,28);
  coracao->putVoxel(28,24,29);
  coracao->putVoxel(27,24,29);
  coracao->putVoxel(26,24,29);
  coracao->putVoxel(25,24,29);
  coracao->putVoxel(24,24,29);
  coracao->putVoxel(23,24,29);
  coracao->putVoxel(22,24,29);
  coracao->putVoxel(27,24,30);
  coracao->putVoxel(26,24,30);
  coracao->putVoxel(25,24,30);
  coracao->putVoxel(24,24,30);
  coracao->putVoxel(23,24,30);
  coracao->putVoxel(26,24,31);
  coracao->putVoxel(25,24,31);
  coracao->putVoxel(24,24,31);
  coracao->putVoxel(25,24,32);
  coracao->putVoxel(27,24,24);
  coracao->putVoxel(28,24,24);
  coracao->putVoxel(29,24,24);
  coracao->putVoxel(26,24,25);
  coracao->putVoxel(27,24,25);
  coracao->putVoxel(28,24,25);
  coracao->putVoxel(29,24,25);
  coracao->putVoxel(30,24,25);

  coracao->setColor(1,0,0.5,1);
  coracao->putVoxel(23,26,24);
  coracao->putVoxel(22,26,24);
  coracao->putVoxel(21,26,24);
  coracao->putVoxel(24,26,25);
  coracao->putVoxel(23,26,25);
  coracao->putVoxel(22,26,25);
  coracao->putVoxel(21,26,25);
  coracao->putVoxel(20,26,25);
  coracao->putVoxel(30,26,26);
  coracao->putVoxel(29,26,26);
  coracao->putVoxel(28,26,26);
  coracao->putVoxel(27,26,26);
  coracao->putVoxel(26,26,26);
  coracao->putVoxel(25,26,26);
  coracao->putVoxel(24,26,26);
  coracao->putVoxel(23,26,26);
  coracao->putVoxel(22,26,26);
  coracao->putVoxel(21,26,26);
  coracao->putVoxel(20,26,26);
  coracao->putVoxel(30,26,27);
  coracao->putVoxel(29,26,27);
  coracao->putVoxel(28,26,27);
  coracao->putVoxel(27,26,27);
  coracao->putVoxel(26,26,27);
  coracao->putVoxel(25,26,27);
  coracao->putVoxel(24,26,27);
  coracao->putVoxel(23,26,27);
  coracao->putVoxel(22,26,27);
  coracao->putVoxel(21,26,27);
  coracao->putVoxel(20,26,27);
  coracao->putVoxel(29,26,28);
  coracao->putVoxel(28,26,28);
  coracao->putVoxel(27,26,28);
  coracao->putVoxel(26,26,28);
  coracao->putVoxel(25,26,28);
  coracao->putVoxel(24,26,28);
  coracao->putVoxel(23,26,28);
  coracao->putVoxel(22,26,28);
  coracao->putVoxel(21,26,28);
  coracao->putVoxel(28,26,29);
  coracao->putVoxel(27,26,29);
  coracao->putVoxel(26,26,29);
  coracao->putVoxel(25,26,29);
  coracao->putVoxel(24,26,29);
  coracao->putVoxel(23,26,29);
  coracao->putVoxel(22,26,29);
  coracao->putVoxel(27,26,30);
  coracao->putVoxel(26,26,30);
  coracao->putVoxel(25,26,30);
  coracao->putVoxel(24,26,30);
  coracao->putVoxel(23,26,30);
  coracao->putVoxel(26,26,31);
  coracao->putVoxel(25,26,31);
  coracao->putVoxel(24,26,31);
  coracao->putVoxel(25,26,32);
  coracao->putVoxel(27,26,24);
  coracao->putVoxel(28,26,24);
  coracao->putVoxel(29,26,24);
  coracao->putVoxel(26,26,25);
  coracao->putVoxel(27,26,25);
  coracao->putVoxel(28,26,25);
  coracao->putVoxel(29,26,25);
  coracao->putVoxel(30,26,25);

  coracao->cutVoxel(25,26,25);
  coracao->cutVoxel(25,24,25);

  coracao->writeOFF((char*)"coracao.off");

  Sculptor *piramide = new Sculptor(100, 100, 100);

  //grama
  piramide->setColor(0,100,0,0); // cor verde da grama
  piramide->putBox(0,60,1,2,0,60);
  //mar
  piramide->setColor(0,0,50,0); // cor azul do mar
  piramide->putBox(0,80,0,1,0,80);

  piramide->setColor(35,106,144,0);// cor areia da piramide
  piramide->putBox(1,40,1,2,1,40);
  piramide->putBox(2,39,2,3,2,39);
  piramide->putBox(3,38,3,4,3,38);
  piramide->putBox(4,37,4,5,4,37);
  piramide->putBox(5,36,5,6,5,36);
  piramide->putBox(6,35,6,7,6,35);
  piramide->putBox(7,34,7,8,7,34);
  piramide->putBox(8,33,8,9,8,33);
  piramide->putBox(9,32,9,10,9,32);
  piramide->putBox(10,31,10,11,10,31);
  piramide->putBox(11,30,11,12,11,30);
  piramide->putBox(12,29,12,13,12,29);
  piramide->putBox(13,28,13,14,13,28);
  piramide->putBox(14,27,14,15,14,27);
  piramide->putBox(15,26,15,16,15,26);
  piramide->putBox(16,25,16,17,16,25);
  piramide->putBox(16,25,20,21,16,25);
  piramide->putBox(16,25,22,23,16,25);

  //parte superior da piramide
  piramide->putVoxel(17,17,17);piramide->putVoxel(17,18,17);piramide->putVoxel(17,19,17);piramide->putVoxel(17,21,17);
  piramide->putVoxel(18,17,17);piramide->putVoxel(18,18,17);piramide->putVoxel(18,19,17);piramide->putVoxel(18,21,17);
  piramide->putVoxel(22,17,17);piramide->putVoxel(22,18,17);piramide->putVoxel(22,19,17);piramide->putVoxel(22,21,17);
  piramide->putVoxel(23,17,17);piramide->putVoxel(23,18,17);piramide->putVoxel(23,19,17);piramide->putVoxel(23,21,17);
  piramide->putVoxel(17,17,22);piramide->putVoxel(17,18,22);piramide->putVoxel(17,19,22);piramide->putVoxel(17,21,22);
  piramide->putVoxel(17,17,23);piramide->putVoxel(17,18,23);piramide->putVoxel(17,19,23);piramide->putVoxel(17,21,23);
  piramide->putVoxel(17,17,18);piramide->putVoxel(17,18,18);piramide->putVoxel(17,19,18);piramide->putVoxel(17,21,18);
  piramide->putVoxel(23,17,18);piramide->putVoxel(23,18,18);piramide->putVoxel(23,19,18);piramide->putVoxel(23,21,18);
  piramide->putVoxel(23,17,22);piramide->putVoxel(23,18,22);piramide->putVoxel(23,19,22);piramide->putVoxel(23,21,22);
  piramide->putVoxel(23,17,23);piramide->putVoxel(23,18,23); piramide->putVoxel(23,19,23);piramide->putVoxel(23,21,23);
  piramide->putVoxel(22,17,23);piramide->putVoxel(22,18,23); piramide->putVoxel(22,19,23);piramide->putVoxel(22,21,23);
  piramide->putVoxel(18,17,23);piramide->putVoxel(18,18,23); piramide->putVoxel(18,19,23);piramide->putVoxel(18,21,23);

  piramide->writeOFF((char*)"piramidemaia.off");

  Sculptor *Bola = new Sculptor(100, 100, 100);

  Bola->setColor(1,1,1,1);
  Bola->putSphere(50,50,50,25);
  Bola->cutSphere(50,50,75,25);

  Sculptor *Elipse = new Sculptor(100, 100, 100);

  Elipse->setColor(1,0.5,0.7,1);
  Elipse->putEllipsoid(25,50,75,25,25,25);

  Elipse->writeOFF((char*)"elipse.off");

  return 0;
}
