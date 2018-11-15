#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"
#include "balaz.h"
#include "menu.h"

class personaje {
  public:

    Sprite *sprite;
    Texture *textura;
    personaje(int );
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
    int get_xpersonaje();
    int get_ypersonaje();
    int get_VidaPersonaje();

    int x_1=0;

    bala_cuphead bala1[10];

    texto vidas_texto = texto (5,5,40,"vidas  :  ");
    texto   vidasc_num = texto (150,5,40,3)
;

  private:


    int num_bala=0;
    int cont_bala=0;


    int npersonaje;
    int cantidad_imagenes=61;

    int joyx,joyy;
    int x=420,y=470;
    int vidas=3;
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
