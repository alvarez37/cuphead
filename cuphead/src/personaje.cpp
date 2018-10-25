#include "personaje.h"

personaje::personaje(){

  textura = new Texture[16];

  for (int i = 0; i < 16 ; i++) {

  imagen_n=n;
  imagen_n2=n2;
  archivo =direcion+imagen_n2+imagen_n+ png;
  if(56<n){
    n=47;
    n2++;
  }
  n++;
  textura[i].loadFromFile(archivo);
  }

  sprite = new Sprite[16];

  for (int i = 0; i < 16 ; i++) {
    sprite[i].setTexture(textura[i]);
    sprite[i].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  }
}

// *****************************************************************************

void personaje::movercup(){

  for (int i = 0; i < 16 ; i++) {
    sprite[i].setPosition(Vector2f(x ,y));
  }

  joyx = sf::Joystick::getAxisPosition(0, sf::Joystick::X);


  if(x_1>14){
    x_1=0;
  }

  if (joyx  > 0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ){
    std::cout << "right movimiento  " <<x<< '\n';
    (x<990) ? x += 30 : x=990;
    x_1++;
   }

   if (joyx <  0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
     std::cout << "left movimiento " << x<< '\n';
     (x>0 ) ? x -= 30 : x=0;
     x_1++;

    }
}

// *****************************************************************************

void personaje::saltarup(){
    for (int i = 0; i < 100; i++) {
      y--;
      std::cout << "saltaruo void" << '\n';
    }
}

void personaje::saltardown(){
  for (int i = 0; i < 100; i++) {
    y++;
    std::cout << "saltardown" << '\n';
    }
  }

void personaje::saltar(){

  for (int i = 0; i < 16 ; i++) {
    sprite[i].setPosition(Vector2f(x ,y));
  }

  if ( (sf::Joystick::isButtonPressed(0, 0) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ) && saltar_n==0 ){
      saltar_n=10;
    }

    if(saltar_n-->6 && saltar_n <11 ){
      saltarup();
    }
    if(saltar_n-->1 && saltar_n-- < 6){
      saltardown();
    }
    if(saltar_n < 0){
        saltar_n=0;
     }

}
