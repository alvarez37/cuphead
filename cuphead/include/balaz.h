#ifndef BALAZ_H
#define BALAZ_H

#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
#include "string"

class bala : public sf::Sprite{

      public:
        bala();
        void moverbala();

      protected:

        int x=-100,y=0;
        float tam_bala= 0.21;
        Texture * bala_1;

};

class bala_cuphead : public bala {

    public:
      bala_cuphead ();
      void direcion(int,int);
      void moverbala();

    private:

};




class bala_enemigo : public bala {

    public:
      bala_enemigo ();
      void direcion(int);
      void moverbala();
      int get_xbala();
      int get_ybala();

    private:

};


#endif // BALAZ_H
