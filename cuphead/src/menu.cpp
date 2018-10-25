#include "menu.h"

background::background()  : sf::Sprite(){

      background_1 = new Texture;

      background_1 -> loadFromFile("imagenes/menu/menu.jpg");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*background_1);
      this ->setScale(sf::Vector2f(tam_background, tam_background));

}


// *****************************************************************************
