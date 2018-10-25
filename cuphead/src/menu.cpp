#include "menu.h"

background::background()  : sf::Sprite(){

      background_1 = new Texture;

      background_1 -> loadFromFile("imagenes/menu/menu.jpg");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*background_1);
      this ->setScale(sf::Vector2f(tam_background, tam_background));

}


// *****************************************************************************

movimiento::movimiento(){

  textura = new Texture[5];
  textura[0].loadFromFile("imagenes/menu/run/cuphead_run_0001.png");
  textura[1].loadFromFile("imagenes/menu/run/cuphead_run_0001.png");
  textura[2].loadFromFile("imagenes/menu/run/cuphead_run_0002.png");
  textura[3].loadFromFile("imagenes/menu/run/cuphead_run_0003.png");
  textura[4].loadFromFile("imagenes/menu/run/cuphead_run_0004.png");

  sprite = new Sprite[5];

  sprite[0].setTexture(textura[0]);
  sprite[1].setTexture(textura[1]);
  sprite[2].setTexture(textura[2]);
  sprite[3].setTexture(textura[3]);
  sprite[4].setTexture(textura[4]);

  sprite[0].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  sprite[1].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  sprite[2].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  sprite[3].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  sprite[4].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));


}
void movimiento::movercup(){

  sprite[0].setPosition(Vector2f(x ,y));
  sprite[1].setPosition(Vector2f(x ,y));
  sprite[2].setPosition(Vector2f(x ,y));
  sprite[3].setPosition(Vector2f(x ,y));
  sprite[4].setPosition(Vector2f(x ,y));


  joyx = sf::Joystick::getAxisPosition(0, sf::Joystick::X);

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
    std::cout << "right movimiento  " <<x<< '\n';
    (x<1110) ? x += 30 : x=0;
    x_1++;
   }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
    std::cout << "left movimiento " << x<< '\n';
    (x>0 ) ? x -= 30 : x=1120;
    x_1++;
   }

  if (joyx  > 0){
    std::cout << "right movimiento  " <<x<< '\n';
    (x<1110) ? x += 30 : x=0;
    x_1++;
   }
   if(x_1>3){
   x_1=0;
   }

   if (joyx <  0){
     std::cout << "left movimiento " << x<< '\n';
     (x>0 ) ? x -= 30 : x=1120;
     x_1++;
    }
}
