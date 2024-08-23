#include <stdio.h>
#include <stdlib.h>
#include "Esfera.h"

int main() 
{
Esfera* esfera = criar_esfera(10);
printf("Raio: %f\n", raio_esfera(esfera));
printf("Area: %f\n", area_esfera(esfera));
printf("Volume: %f\n", volume_esfera(esfera));

return 0;
  
}
