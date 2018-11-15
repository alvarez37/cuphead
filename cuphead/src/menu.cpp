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
background2::background2()  : sf::Sprite(){

      background_1 = new Texture;
      background_1 -> loadFromFile("imagenes/menu/bg2.png");

      this ->setPosition(Vector2f(x ,y ));
      this ->setTexture(*background_1);
      this ->setScale(sf::Vector2f(tam_background, tam_background));

}
