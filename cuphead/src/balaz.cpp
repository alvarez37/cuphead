#include "balaz.h"

bala::bala()  : sf::Sprite(){


      bala_1 = new Texture;

      bala_1 -> loadFromFile("imagenes/bala.png");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*bala_1);
      this ->setScale(sf::Vector2f(tam_bala, tam_bala));
}
