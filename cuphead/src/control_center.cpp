#include "control_center.h"

juego::juego( int x, int y, std::string titulo){

    ventana1 = new RenderWindow(VideoMode(x, y ), titulo);
    ventana1 ->setFramerateLimit(fps);

    gameloop();

}

void juego::gameloop(){
    while(ventana1 -> isOpen()){

      while ( ventana1 -> pollEvent( event ) ){

        if(inicio_menu){
        if (sf::Joystick::isButtonPressed(0, 9) or bg_cuphead.x >= 1000){

              std::cout << "play" << '\n';
              inicio_menu=false;
              inicio_mapa=true;
           }
         }

       }

    ventana1 -> clear();

    if(inicio_menu){
      ventana1 -> draw(background_1);
      ventana1 -> draw(bg_cuphead.sprite[bg_cuphead.x_1]);
      bg_cuphead.movercup();
    }

    if(inicio_mapa){
      ventana1 -> draw(p1.sprite[p1.x_1]);
      p1.movercup();
      p1.saltar();
    }

    ventana1 ->  display();

  }
}
