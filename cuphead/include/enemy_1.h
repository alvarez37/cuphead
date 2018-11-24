#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"
 #include "balaz.h"
 #include "menu.h"

class enemy {

  public:

    Sprite *sprite;
    Texture *textura;
    enemy();

    void saltar();
    void moverenemy();
    void disparar_mov();
    void disparar();
    int get_vida_enemigo();
    void set_vida_enemigo(int);

    int cantidad_imagenes=98;
    int x_1=0;
    int x=690,y=100;
    float tam_enemy_bg= 0.78;

    bala_enemigo bala1[10];
    int num_bala=0;
    int saltar_n=0;
    int dispararn=0;
    int vida_enemigo=100;

    texto   vidase_num = texto (1000,5,40,100);

    //cargar archivos
    int n=49,n2=48;
    char imagen_n=n;
    char imagen_n2=n2;


    string direcion ="imagenes/enemy/0";
    string png =".png";
    string archivo =direcion+imagen_n2+imagen_n+ png;

};
