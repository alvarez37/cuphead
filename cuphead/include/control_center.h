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
    // bool inicio_menu=true;
    // bool inicio_mapa=false;

// temporal
    bool inicio_menu=false;
    bool inicio_mapa=true;


    RenderWindow * ventana1;

    //menu del juego
    background  background_1;
    background2  background_2;

    personaje bg;

    //play game
    enemy e1;
    personaje p1= personaje(0);
    personaje p2= personaje(1);

    texto welcome;
    texto vidase_num = texto (800,5,40,"10000 ");

    Event event;

    int fps=12;

};
