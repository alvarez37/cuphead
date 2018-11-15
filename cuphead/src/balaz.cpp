#include "balaz.h"

bala::bala()  : sf::Sprite(){


      bala_1 = new Texture;


      this ->setPosition(Vector2f(x ,y ));
      this ->setScale(sf::Vector2f(tam_bala, tam_bala));
}

//++++++++++++++++++++++++++++++++++++++++++++++++++++

bala_cuphead::bala_cuphead()  : bala(){

      bala_1 -> loadFromFile("imagenes/bala.png");
      this ->setTexture(*bala_1);

}

void bala_cuphead::direcion(int a,int b) {
  x=a;
  y=b;
}

void bala_cuphead::moverbala( ) {

    if (x>0) {
      this ->setPosition(Vector2f(x , y ));
      x+=90;
    }
    if (x==1800) {
      x=0;
    }
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++
int bala_enemigo::get_xbala () {
  return x;
}
int bala_enemigo::get_ybala() {
  return y;
}

bala_enemigo::bala_enemigo()  : bala(){

      tam_bala=1.21;
      this ->setScale(sf::Vector2f(tam_bala, tam_bala));
      bala_1 -> loadFromFile("imagenes/enemy/Cagney Carnation/Creating Object/Acorn/Acorn_03.png");
      this ->setTexture(*bala_1);
}


void bala_enemigo::direcion(int x_) {
  x=x_;
}

void bala_enemigo::moverbala( ) {
    if (x>0) {
      this ->setPosition(Vector2f( x , y ));
      y+=10;
    }
    if (y==1800) {
      y=0;
    }
}
