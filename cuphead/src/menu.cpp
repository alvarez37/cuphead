#include "menu.h"

texto::texto(){
      fuente.loadFromFile("fuente_para_score/fuente.ttf");
      cadena_texto.setString(entrada);
      cadena_texto.setFont(fuente);
      cadena_texto.setCharacterSize(50);
      cadena_texto.setPosition(450, 0);
}

texto::texto(int x,int y ,int tam, string titulo_){
      titulo=titulo_;
      fuente.loadFromFile("fuente_para_score/fuente.ttf");
      cadena_texto.setString(titulo);
      cadena_texto.setFont(fuente);
      cadena_texto.setCharacterSize(tam);
      cadena_texto.setPosition(x,y);
      cadena_texto.setColor(sf::Color(175, 108, 3));
}

texto::texto(int x,int y ,int tam, int num){
      contenerINT=num;
      titulo = static_cast<std::ostringstream*>(&(std::ostringstream() << contenerINT))->str();
      fuente.loadFromFile("fuente_para_score/fuente.ttf");
      cadena_texto.setString(titulo);
      cadena_texto.setFont(fuente);
      cadena_texto.setCharacterSize(tam);
      cadena_texto.setPosition(x,y);
      cadena_texto.setColor(sf::Color(175, 108, 3));
}

void texto::modificar_texto(int x){
  contenerINT-=x;
  titulo = static_cast<std::ostringstream*>(&(std::ostringstream() << contenerINT))->str();
  cadena_texto.setString(titulo);

}

void texto::set_texto(int x){
  contenerINT=x;
  titulo = static_cast<std::ostringstream*>(&(std::ostringstream() << contenerINT))->str();
  cadena_texto.setString(titulo);

}

background::background()  : sf::Sprite(){

      buffer.loadFromFile("sound/MUS_VictoryScreen.wav");
    	sonido.setBuffer(buffer);
    	sonido.setVolume(80);
      sonido.play();

      background_1 = new Texture;
      background_1 -> loadFromFile("imagenes/menu/menu.jpg");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*background_1);
      this ->setScale(sf::Vector2f(tam_background, tam_background));

}

// *****************************************************************************
background2::background2(int x_,int y_, float tam,string direccion)  : sf::Sprite(){
      x=x_,y=y_;
      background_1 = new Texture;
      background_1 -> loadFromFile(direccion);

      this ->setPosition(Vector2f(x_ ,y_ ));
      this ->setTexture(*background_1);
      this ->setScale(sf::Vector2f(tam, tam));

}

// *****************************************************************************

void background2::mover () {
  this ->setPosition(Vector2f(x ,y ));

  joyx = sf::Joystick::getAxisPosition(0, sf::Joystick::X);

  if (joyx  > 0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ){
      (x<630)? x=x+280 : x=350;
   }

  if (joyx <  0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
      (x<380)? x=630 : x-=280;
    }
}
