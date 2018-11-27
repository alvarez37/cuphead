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


    personaje bg;



    background2  background_2=background2(0,0,1.30,"imagenes/menu/bg2.png");
    background2  bg1=background2(0,0,0.70,"imagenes/menu/bgperdiste.jpg");
    background2  bg2=background2(0,0, 0.85,"imagenes/menu/ganaste.png");
    background2  bomba1=background2(380,360,0.10,"imagenes/menu/bomba.png");







    //play game
    enemy e1;
    personaje p1= personaje(0);
    personaje p2= personaje(1);

    texto welcome;

    Event event;

    int fps=12;

};
