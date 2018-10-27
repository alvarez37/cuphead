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
        if (sf::Joystick::isButtonPressed(0, 9) or bg.x > 970){

              std::cout << "play" << '\n';
              inicio_menu=false;
              inicio_mapa=true;
           }
         }

       }

    ventana1 -> clear();

    if(inicio_menu){
      ventana1 -> draw(background_1);
      ventana1 -> draw(bg.sprite[bg.x_1]);
      bg.movercup();

    }

    if(inicio_mapa){
      ventana1 -> draw(background_2);
      ventana1 -> draw(p1.sprite[p1.x_1]);
      p1.movercup();
      p1.saltar();
      p1.agacharse();
      ventana1 -> draw(e1.sprite[e1.x_1]);
      e1.moverenemy();



    }

    ventana1 ->  display();

  }
}
