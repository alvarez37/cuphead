#include "enemy.h"

enemy::enemy(){

  textura = new Texture[24];

  for (int i = 0; i < 24 ; i++) {

  archivo =direcion+imagen_n2+imagen_n+ png;
  textura[i].loadFromFile(archivo);
  n++;
  imagen_n=n;
  imagen_n2=n2;
  if(56<n){
    n=47;
    n2++;
  }
  }

  sprite = new Sprite[24];

  for (int i = 0; i < 24 ; i++) {
    sprite[i].setTexture(textura[i]);
    sprite[i].setScale(sf::Vector2f(tam_enemy_bg, tam_enemy_bg));
  }

  for (int i = 0; i < 24 ; i++)
    sprite[i].setPosition(Vector2f(x ,y));


}

// *****************************************************************************
// *****************************************************************************

void enemy::moverenemy(){

  std::cout << "enemy x_1 : " << x_1 << '\n';
  if(x_1>22 ){
    x_1=0;
  }
  x_1++;



}

