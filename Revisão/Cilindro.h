#include <stdio.h>
#include <stdlib.h>

typedef struct cilindro Cilindro;

Cilindro *iniciar_cilindro(float raio,float altura);

float raio_cilindro(Cilindro * cilindro);

float altura_cilindro(Cilindro * cilindro);

float volume_cilindro(Cilindro * cilindro);