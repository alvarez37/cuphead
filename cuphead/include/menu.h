#ifndef MENU_H
#define MENU_H


#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
#include "string"
#include "sstream"

class texto{

public:
    texto();
    void modificar_texto(int);
    texto(int ,int,int,string);
    texto(int ,int,int,int);

    int contenerINT;
    Font fuente;
    Text cadena_texto;
    string entrada= "welcome to my game ->";
    string titulo= "";

};

// *****************************************************************************

class background : public sf::Sprite {

    public:

      background();

    private:
      int x=0,y=0;
      float tam_background= 0.78;
      Texture * background_1;

      SoundBuffer buffer;
      Sound sonido;


};

// *****************************************************************************

class background2 : public sf::Sprite {

    public:

      background2();

    private:
      int x=0,y=0;
      float tam_background= 1.30;
      Texture * background_1;

};


#endif
