#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "menu.h"
#include "personaje.h"
#include "enemy_1.h"


using namespace sf;

class juego{

    public:

        juego(int x, int y, std::string titulo);
        void gameloop();
        void pintararray();
        void kaboom_yiyi();

    private:
    int n_vidas=0;
    bool inicio_menu=true;
    bool inicio_mapa=false;
    bool perdistebg=false;
    bool bgganaste=false;


    RenderWindow * ventana1;

    //menu del juego
    background  background_1;
    background2  background_2;
    bgperdiste  bg1;
    bgganaste_  bg2;
    bomba bomba1;

    personaje bg;

    //play game
    enemy e1;
    personaje p1= personaje(0);
    personaje p2= personaje(1);

    texto welcome;

    Event event;

    int fps=12;

};
