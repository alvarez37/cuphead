#include "control_center.h"

juego::juego( int x, int y, std::string titulo){

    ventana1 = new RenderWindow(VideoMode(x, y ), titulo);
    ventana1 ->setFramerateLimit(fps);

    gameloop();

}

void juego::gameloop(  ) {
    while(ventana1 -> isOpen()){
      while ( ventana1 -> pollEvent( event ) ){

        if(inicio_menu){
          if (sf::Joystick::isButtonPressed(0, 9) or bg.get_xpersonaje() > 970){

              std::cout << "play" << '\n';
              inicio_menu=false;
              inicio_mapa=true;
            }
        }
    }

    ventana1 -> clear();

    if(inicio_menu){
      ventana1 -> draw(background_1);
      ventana1 -> draw(welcome.cadena_texto);

      ventana1 -> draw(bg.sprite[bg.x_1]);
      bg.movercup();
    }

    if(inicio_mapa){
      perdistebg=false;
      ventana1 -> draw(background_2);
      ventana1 -> draw(p1.vidas_texto.cadena_texto);
      ventana1 -> draw(p1.vidasc_num.cadena_texto);

      ventana1 -> draw(e1.vidase_num.cadena_texto);

      ventana1 -> draw(p1.sprite[p1.x_1]);
      p1.movercup();
      p1.saltar();
      p1.agacharse();

      ventana1 -> draw(p2.sprite[p2.x_1]);

      pintararray();

      p2.movercup();
      p2.saltar();
      p2.agacharse();

      ventana1 -> draw(e1.sprite[e1.x_1]);
      e1.moverenemy();

      kaboom_yiyi();

    }
    if(perdistebg){

      ventana1 -> draw(bg1);
      ventana1 -> draw(bomba1);
      bomba1.mover();
      if(sf::Joystick::isButtonPressed(0, 9)) {
        inicio_mapa=true;
        perdistebg=false;
      }
    }
    if(bgganaste){

      ventana1 -> draw(bg2);

    }


    ventana1 ->  display();

  }
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void juego::kaboom_yiyi(){
for(int i=0;i<10;i++){
  if( (e1.bala1[i].get_xbala() < p1.get_xpersonaje() and e1.bala1[i].get_xbala()+60 >
      p1.get_xpersonaje() ) and (e1.bala1[i].get_ybala()==p1.get_ypersonaje())  ){
    std::cout << n_vidas++ << "  colicion-!!!!!!!!!!!!" << '\n';
    p1.vidasc_num.modificar_texto(1);
    p1.set_VidaPersonaje();

    }
  if( (e1.bala1[i].get_xbala()-60< p1.get_xpersonaje() and e1.bala1[i].get_xbala() >
      p1.get_xpersonaje() ) and (e1.bala1[i].get_ybala()==p1.get_ypersonaje())  ){
    p1.vidasc_num.modificar_texto(1);
    p1.set_VidaPersonaje();

    }

    if( p1.bala1[i].bala_get_x() > 900 and p1.bala1[i].bala_get_x() < 950){
      e1.vidase_num.modificar_texto(1);
      e1.set_vida_enemigo(1);
      }

    if(p1.get_VidaPersonaje()==0){
       inicio_mapa=false;
       perdistebg=true;
       p1.set_VidaPersonaje2(3);
       p1.vidasc_num.set_texto(3);
  }

  if(e1.get_vida_enemigo()==0){
     inicio_mapa=false;
     perdistebg=false;
     bgganaste=true;

}


}
}

//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

void juego::pintararray(){

    ventana1 -> draw(p1.bala1[0]);
    ventana1 -> draw(p1.bala1[1]);
    ventana1 -> draw(p1.bala1[2]);
    ventana1 -> draw(p1.bala1[3]);
    ventana1 -> draw(p1.bala1[4]);
    ventana1 -> draw(p1.bala1[5]);
    ventana1 -> draw(p1.bala1[6]);
    ventana1 -> draw(p1.bala1[7]);
    ventana1 -> draw(p1.bala1[8]);
    ventana1 -> draw(p1.bala1[9]);


    ventana1 -> draw(p2.bala1[0]);
    ventana1 -> draw(p2.bala1[1]);
    ventana1 -> draw(p2.bala1[2]);
    ventana1 -> draw(p2.bala1[3]);
    ventana1 -> draw(p2.bala1[4]);
    ventana1 -> draw(p2.bala1[5]);
    ventana1 -> draw(p2.bala1[6]);
    ventana1 -> draw(p2.bala1[7]);
    ventana1 -> draw(p2.bala1[8]);
    ventana1 -> draw(p2.bala1[9]);

    ventana1 -> draw(e1.bala1[0]);
    ventana1 -> draw(e1.bala1[1]);
    ventana1 -> draw(e1.bala1[2]);
    ventana1 -> draw(e1.bala1[3]);
    ventana1 -> draw(e1.bala1[4]);
    ventana1 -> draw(e1.bala1[5]);
    ventana1 -> draw(e1.bala1[6]);
    ventana1 -> draw(e1.bala1[7]);
    ventana1 -> draw(e1.bala1[8]);
    ventana1 -> draw(e1.bala1[9]);

}
