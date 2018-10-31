#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"
#include "bala.h"

class personaje {
  public:
    Sprite *sprite;
    Texture *textura;
    personaje();
    void saltar();
    void stop();
    void saltarup();
    void saltardown();
    void runleft();
    void runright();
    void agacharse();
    void movercup();
    void disparar();

    bala bala1;
    int num_bala=0;
    int bala_x=-100,bala_y=0;

    int cantidad_imagenes=61;
    int joyx,joyy;
    int x_1=0;
    int x=420,y=470;
    float tam_personaje_bg= 0.78;
    int saltar_n=0;
    int agacharse_n=0;

    //cargar archivos
    int n=49,n2=48;
    char imagen_n=n;
    char imagen_n2=n2;
    string direcion ="imagenes/runcuphead/0";
    string png =".png";
    string archivo =direcion+imagen_n2+imagen_n+ png;

};
