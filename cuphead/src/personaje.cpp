#include "personaje.h"

personaje::personaje(){

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
    sprite[i].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  }
}

// *****************************************************************************
// *****************************************************************************
void personaje::runright(){
    (x<990) ? x += 30 : x=990;
}

// *****************************************************************************
void personaje::runleft(){
     (x>0 ) ? x -= 30 : x=0;
}

// *****************************************************************************
void personaje::saltar(){
  if ( (sf::Joystick::isButtonPressed(0, 0) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ) && saltar_n==0 ){
      saltar_n=10;
    }

    if(saltar_n-->6 && saltar_n <11 )
      for (int i = 0; i < 100; i++,y--);


    if(saltar_n-->1 && saltar_n-- < 6)
      for (int i = 0; i < 100; i++,y++);

    if(saltar_n < 0)
        saltar_n=0;

}

// **********************0*******************************************************
void personaje::stop(){
  if ( !(sf::Joystick::getAxisPosition(0, sf::Joystick::X)  ||
  sf::Joystick::getAxisPosition(0, sf::Joystick::Y))  ) {
    if(x_1>22 ){
      x_1=17;
    }
    x_1++;
  }
  else{
    if(x_1>15 ){
      x_1=0;
    }
    x_1++;
  }

}
// *****************************************************************************
void personaje::movercup(){

  std::cout << "x_1 : " << x_1 << '\n';
  for (int i = 0; i < 24 ; i++)
    sprite[i].setPosition(Vector2f(x ,y));

    stop();

    joyx = sf::Joystick::getAxisPosition(0, sf::Joystick::X);

    if (joyx  > 0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ){
      runright();
    }

    if (joyx <  0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
      runleft();
    }

}
