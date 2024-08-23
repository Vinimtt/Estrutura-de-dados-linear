#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "Esfera.h"
#define PI 3.141

struct esfera{
  float diametro;
};

Esfera *criar_esfera(float diametro){
  Esfera *esfera = (Esfera*)malloc(sizeof(Esfera));
  esfera->diametro = diametro;
  return esfera;
}

float raio_esfera(Esfera * esfera){
  return esfera->diametro/2;  ;
}

float area_esfera(Esfera * esfera){
  return 4 * PI * pow(raio_esfera(esfera),2);
}

float volume_esfera(Esfera * esfera){

  return (4/3) * PI * pow(raio_esfera(esfera),3);
}