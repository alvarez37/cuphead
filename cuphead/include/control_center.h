#include <iostream>
using namespace std;
#include <SFML/Graphics.hpp>
using namespace sf;
#include "menu.h"
#include "personaje.h"
#include "enemy1.h"


using namespace sf;

class juego{

    public:

        juego(int x, int y, std::string titulo);
        void gameloop();

    private:

    bool inicio_menu=true;
    bool inicio_mapa=false;

    RenderWindow * ventana1;

    //menu del juego
    background  background_1;
    background2  background_2;

    personaje bg;

    //play game
    enemy e1;

    personaje p1;

    texto fuente1;


    Event event;

    int fps=12;

};
