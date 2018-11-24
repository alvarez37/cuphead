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

// // **********************0*******************************************************

  void enemy::disparar(){

    bala1[num_bala].direcion((rand()%50)*10);
    num_bala++;
    std::cout << "num_bala   "<< num_bala << '\n';
    dispararn=20;


  }
// // *****************************************************************************

void enemy::disparar_mov(){



}

//*****************************************************************************
int enemy::get_vida_enemigo(){
  return vida_enemigo;
}
//*****************************************************************************
void enemy::set_vida_enemigo(int n){
 vida_enemigo-=n;
}
// *****************************************************************************

void enemy::moverenemy(){

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



  x_1++;
  if(x_1>43 ){
    x_1=19;
  }

  if ( (rand()%40)==3 and num_bala!=10 ){
    disparar();
  }
  disparar_mov();

}
