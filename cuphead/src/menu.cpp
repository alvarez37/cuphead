#include "menu.h"

texto::texto(){


fuente.loadFromFile("fuente_para_score/fuente.ttf");

cadena_texto.setString(entrada);
// Asignamos la fuente que hemos cargado al texto
cadena_texto.setFont(fuente);
// Tamaño de la fuente
cadena_texto.setCharacterSize(50);
// Posición del texto
cadena_texto.setPosition(450, 0);

}

texto::texto(int x,int y ,int tam, string a){


fuente.loadFromFile("fuente_para_score/fuente.ttf");

cadena_texto.setString(a);
cadena_texto.setFont(fuente);
cadena_texto.setCharacterSize(tam);
cadena_texto.setPosition(x,y);
cadena_texto.setColor(sf::Color(175, 108, 3));


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
