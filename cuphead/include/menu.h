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

class movimiento {
  public:
    Sprite *sprite;
    Texture *textura;
    movimiento();
    void movercup();
    int joyx,x_1=0;
    int x=420,y=470;
    float tam_personaje_bg= 0.78;


    // int n=49;
    // char imagen_n=n;
    // string direcion ="imagenes/menu/run/cuphead_run_000";
    // string png =".png";
    // string archivo =direcion+imagen_n+ png;

};
