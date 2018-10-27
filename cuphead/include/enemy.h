#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"

class enemy {
  public:
    Sprite *sprite;
    Texture *textura;
    enemy();

    void saltar();
    void moverenemy();


    int x_1=0;
    int x=690,y=100;
    float tam_enemy_bg= 0.78;

    //cargar archivos
    int n=49,n2=48;
    char imagen_n=n;
    char imagen_n2=n2;


    string direcion ="imagenes/enemy/Cagney Carnation/Idle/Idle_";
    string png =".png";
    string archivo =direcion+imagen_n2+imagen_n+ png;

};
