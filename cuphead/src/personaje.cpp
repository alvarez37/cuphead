#include "personaje.h"

personaje::personaje(){

  textura = new Texture[cantidad_imagenes];

  for (int i = 0; i < cantidad_imagenes ; i++) {

  archivo =direcion+imagen_n2+imagen_n+ png;
  textura[i].loadFromFile(archivo);
  n++;
  imagen_n=n;
  imagen_n2=n2;
  if(56<n){
    n=47;
    n2++;
  }
  }

  sprite = new Sprite[cantidad_imagenes];

  for (int i = 0; i < cantidad_imagenes ; i++) {
    sprite[i].setTexture(textura[i]);
    sprite[i].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  }
}

// *****************************************************************************
personaje::personaje(int a){

  npersonaje=a;
  textura = new Texture[cantidad_imagenes];

  for (int i = 0; i < cantidad_imagenes ; i++) {

  archivo =direcion+imagen_n2+imagen_n+ png;
  textura[i].loadFromFile(archivo);
  n++;
  imagen_n=n;
  imagen_n2=n2;
  if(56<n){
    n=47;
    n2++;
  }
  }

  sprite = new Sprite[cantidad_imagenes];

  for (int i = 0; i < cantidad_imagenes ; i++) {
    sprite[i].setTexture(textura[i]);
    sprite[i].setScale(sf::Vector2f(tam_personaje_bg, tam_personaje_bg));
  }
}



// *****************************************************************************
// *****************************************************************************
void personaje::runright(){
    (x<990) ? x += 20 : x=990;

    if(x_1<7){
      x_1=7;
    }
    if(x_1>21){
      x_1=7;
    }
    x_1++;

}

// *****************************************************************************
void personaje::runleft(){
     (x>0 ) ? x -= 20 : x=0;
     if(x_1<47){
       x_1=47;
     }
     if(x_1>59){
       x_1=47;
     }
     x_1++;
}

// *****************************************************************************
void personaje::saltar(){
  if ( (sf::Joystick::isButtonPressed(npersonaje, 0) || sf::Keyboard::isKeyPressed(sf::Keyboard::Up) ) && saltar_n==0 ){
      saltar_n=10;

    }

    if(saltar_n-->6 && saltar_n <11 )
      for (int i = 0; i < 100; i++,y--){
        if(x_1<30){
          x_1=31;
        }
        if(x_1>34){
          x_1=32;
        }
        x_1++;

      }


    if(saltar_n-->1 && saltar_n-- < 6)
      for (int i = 0; i < 100; i++,y++){
        if(x_1<30){
          x_1=34;
        }
        if(x_1>37){
          x_1=34;
        }
        x_1++;

      }

    if(saltar_n < 0)
        saltar_n=0;

}
void personaje::agacharse(){

    if ( (sf::Joystick::isButtonPressed(npersonaje, 2) || sf::Keyboard::isKeyPressed(sf::Keyboard::Down) ) && agacharse_n==0 ){
        agacharse_n=4;
        x_1=24;
        if(x_1>29 ){
          x_1=24;
        }
        }
    if(agacharse_n-->3 && agacharse_n <5 )
      for (int i = 0; i < 100; i++,y++);


    if(agacharse_n-->1 && agacharse_n-- < 3)
      for (int i = 0; i < 100; i++,y--);

    if(agacharse_n < 0)
        agacharse_n=0;

}

// **********************0*******************************************************
void personaje::stop(){
  if ( !(sf::Joystick::getAxisPosition(npersonaje, sf::Joystick::X)  ||
  sf::Joystick::getAxisPosition(npersonaje, sf::Joystick::Y))  ) {
    if(x_1>6 ){
      x_1=0;
    }
    x_1++;
  }


}
// **********************0*******************************************************
void personaje::disparar(){
  bala1[num_bala].direcion(x,y);
  cont_bala++;
  std::cout << num_bala << '\n';

  if(x_1<39){
    x_1=39;
  }
  if(x_1>43){
    x_1=39;
  }
  x_1++;

  num_bala++;

  if(num_bala==9){
    num_bala=0;
  }


}

int personaje::get_ypersonaje(){
  return y;
}
// *****************************************************************************
int personaje::get_xpersonaje(){
  return x;
}
// *****************************************************************************
void personaje::movercup(){


  bala1[0].moverbala();
  bala1[1].moverbala();
  bala1[2].moverbala();
  bala1[3].moverbala();
  bala1[4].moverbala();
  bala1[5].moverbala();
  bala1[6].moverbala();
  bala1[7].moverbala();
  bala1[8].moverbala();
  bala1[9].moverbala();

  for (int i = 0; i < cantidad_imagenes ; i++)
    sprite[i].setPosition(Vector2f(x ,y));

    if ( sf::Joystick::isButtonPressed(npersonaje,5) || sf::Keyboard::isKeyPressed(sf::Keyboard::X)){
      disparar();
    }


    stop();


    joyx = sf::Joystick::getAxisPosition(npersonaje, sf::Joystick::X);

    if (joyx  > 0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ){
      runright();
    }

    if (joyx <  0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
      runleft();
    }

}
