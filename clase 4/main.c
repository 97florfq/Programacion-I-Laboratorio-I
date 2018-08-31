#include <stdio_ext.h>
#include <stdlib.h>
#include "utn.h"


int main()
{
   int numero;
   if(utn_getNumero(&numero, "Ingrese numero", "Error, reingrese numero",1,100,3) == 0)
   {
        printf("El numero es %d",numero);
   }
    return 0;
}




