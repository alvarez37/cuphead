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
    void set_texto(int);

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

class bgperdiste : public sf::Sprite {

    public:

      bgperdiste();

    private:
      int x=0,y=0;
      float tam_background= 0.70;
      Texture * background_1;

};


// *****************************************************************************

class bomba : public sf::Sprite {

    public:

      bomba();
      void mover();

    private:
      int x=380,y=360;
      float tam_background= 0.10;
      Texture * background_1;
      int joyx;

      SoundBuffer buffer;


};
class bgganaste_ : public sf::Sprite {

    public:

      bgganaste_();

    private:
      int x=0,y=0;
      float tam_background= 1.20;
      Texture * background_1;

};
#endif
