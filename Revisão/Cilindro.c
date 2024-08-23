#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Cilindro.h"

#define PI 3,141

struct cilindro{
float raio;
float altura;
};

Cilindro *iniciar_cilindro(float raio,float altura){
Cilindro* cilindro = (Cilindro*)malloc(sizeof(Cilindro));
cilindro ->raio = raio;
cilindro ->altura = altura;
return cilindro;
}

float raio_cilindro(Cilindro * cilindro){
    return cilindro->raio;
}

float altura_cilindro(Cilindro * cilindro){
    return cilindro->altura;
}

float volume_cilindro(Cilindro * cilindro){
    return PI * pow(cilindro->raio,2) * cilindro->altura;
}

