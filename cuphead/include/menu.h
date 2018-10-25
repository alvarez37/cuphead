#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "string"

class background : public sf::Sprite {

    public:


      background();

    private:
      int x=0,y=0;
      float tam_background= 0.78;
      Texture * background_1;

};


// *****************************************************************************
