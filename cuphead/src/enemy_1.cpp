#include "enemy_1.h"

enemy::enemy(){

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
    sprite[i].setScale(sf::Vector2f(tam_enemy_bg, tam_enemy_bg));
  }

  for (int i = 0; i < cantidad_imagenes ; i++)
    sprite[i].setPosition(Vector2f(x ,y));


}

// *****************************************************************************
// *****************************************************************************
//
// void personaje::stop(){
//   if ( !(sf::Joystick::getAxisPosition(0, sf::Joystick::X)  ||
//   sf::Joystick::getAxisPosition(0, sf::Joystick::Y))  ) {
//     if(x_1>6 ){
//       x_1=0;
//     }
//     x_1++;
//   }
//
// }
// // **********************0*******************************************************
//
// void personaje::disparar(){
//   cont_bala++;
//   std::cout << cont_bala << '\n';
//
//   if(x_1<39){
//     x_1=39;
//   }
//   if(x_1>43){
//     x_1=39;
//   }
//   x_1++;
//
//   bala_x=x;
//   bala_y=y;
//
//   bala1.setPosition(Vector2f(bala_x ,bala_y));
//   if(num_bala>=2){
//     num_bala=0;
//   }
//
// }
// // *****************************************************************************
// void personaje::movercup(){
//
// //  std::cout << "x_1 : " << x_1 << '\n';
//   for (int i = 0; i < cantidad_imagenes ; i++)
//     sprite[i].setPosition(Vector2f(x ,y));
//
//     stop();
//
//     joyx = sf::Joystick::getAxisPosition(0, sf::Joystick::X);
//
//     if (joyx  > 0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Right) ){
//       runright();
//     }
//
//     if (joyx <  0 || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
//       runleft();
//     }
//
//     if ( sf::Joystick::isButtonPressed(0,5) || sf::Keyboard::isKeyPressed(sf::Keyboard::X)){
//       disparar();
//     }
//     else{
//       bala_x+=90;
//       bala1.setPosition(Vector2f(bala_x ,bala_y));
//       if(bala_x>690){
//         bala_x=5000;
//       }
//     }
//
// }

// *****************************************************************************

void enemy::moverenemy(){

//  std::cout << "enemy x_1 : " << x_1 << '\n';

  x_1++;
  if(x_1>43 ){
    x_1=19;
  }




}
