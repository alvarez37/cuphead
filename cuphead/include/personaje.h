#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"

class personaje {
  public:
    Sprite *sprite;
    Texture *textura;
    personaje();
    void movercup();
    void saltar();
    void saltarup();
    void saltardown();

    int joyx,joyy,x_1=0;
    int x=420,y=470;
    float tam_personaje_bg= 0.78;
    int saltar_n=0;

    //cargar archivos
    int n=49,n2=48;
    char imagen_n=n;
    char imagen_n2=n2;
    string direcion ="imagenes/menu/run/cuphead_run_00";
    string png =".png";
    string archivo =direcion+imagen_n2+imagen_n+ png;



};
