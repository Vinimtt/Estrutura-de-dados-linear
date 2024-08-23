#include <stdio.h>
#include <stdlib.h>
#include "Cilindro.h"

int main() 
{
  Cilindro * cilindro = iniciar_cilindro(3,5);
  printf("Raio: %f\n",raio_cilindro(cilindro));
  printf("Altura: %f\n",altura_cilindro(cilindro));
  printf("Volume: %f\n",volume_cilindro(cilindro));

return 0;
}