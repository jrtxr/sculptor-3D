//Bibliotecas extras
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

//Chamanda dos demais arquivos.
#include "cutellipsoid.cpp"
#include "cutbox.cpp"
#include "cutsphere.cpp"
#include "cutvoxel.cpp"
#include "Figura_Geometrica.cpp"
#include "putbox.cpp"
#include "putellipsoid.cpp"
#include "putsphere.cpp"
#include "putvoxel.cpp"
#include "sculptor.cpp"
#include <vector>
using namespace std;

int main(){

    vector <Figura_Geometrica*> v;

   //int dx = 0, dy = 0, dz = 0;
    int select =0;

    cout << "Digite o valor desejado:" << endl << endl;
    cout << "1 - Exemplo 01" << endl;
    cout << "2 - Exemplo 02" << endl;
    cout << "2 - Exemplo 03" << endl;
    cout << "4 - Exemplo 04" << endl;
    cout << "Qualquer outro valor - para sair" << endl << endl;

    cin >> select;

    if(select == 1){

      Sculptor desenho(200,200,200);
      v.push_back(new putbox(30,30,30,30,30,30, 0.5, 0.6, 0.7, 0.5));

      v.push_back(new Cutbox(30,30,30,30,30,30));
      v.push_back(new Cutvoxel(15,20,25));

      for(int i=0;i<v.size();i++){
        v[i]->draw(desenho);
      }

      desenho.writeOFF("Exemplo_01.OFF");
    }

    if(select == 2){

      Sculptor desenho(200,200,200);

      v.push_back(new Cutbox(19,41,45,19,31,33));
      v.push_back(new Cutvoxel(15,45,31));

      for(int i=0;i<v.size();i++){
          v[i]->draw(desenho);
      }

      desenho.writeOFF("Exemplo_02.OFF");
    }

    if(select == 3){

      Sculptor desenho(200,200,200);

      v.push_back(new Cutbox(17,14,54,23,22,21));
      v.push_back(new Cutvoxel(45,15,13));
      v.push_back(new putsphere(30,56,46,25,0.99,0,0,1.000));
      v.push_back(new Cutsphere(30,23,19,20));
      v.push_back(new putellipsoid(50,60,30,15,40,20,0.555, 0.2222, 0.555, 1.000));
      v.push_back(new Cutellipsoid(40,24,35,5,18,21));

      for(int i=0;i<v.size();i++){
          v[i]->draw(desenho);
      }

      desenho.writeOFF("Exemplo_03.OFF");
    }

    if(select == 4){

      Sculptor desenho(200,200,200);

      v.push_back(new Cutbox(33,22,44,30,20,10));
      v.push_back(new Cutvoxel(54,10,30));
      v.push_back(new putsphere(20,30,40,50,0.33,0,0,1.000));
      v.push_back(new Cutsphere(10,20,15,15));
      v.push_back(new putellipsoid(50,45,35,20,50,45,0.77, 0.444, 0.65, 1.000));
      v.push_back(new Cutellipsoid(20,25,20,15,20,25));

      for(int i=0;i<v.size();i++){
          v[i]->draw(desenho);
      }

      desenho.writeOFF("Exemplo_04.OFF");
    }

  return 0;
}
