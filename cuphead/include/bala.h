#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace sf;
#include "string"

class bala: public sf::Sprite {

    public:


      bala();

    private:
      int x=-100,y=-100;
      float tam_bala= 0.21;
      Texture * bala_1;

      SoundBuffer buffer;
      Sound sonido;


};
