#include <stdio_ext.h>
#include <stdlib.h>
#include "utn2.h"
#include <string.h>
#define LIMITENOMBRE 20
char utn_ingresarNombre(char mensaje[],char string[],int limite);
int utn_validarNombre(char string[]);
int main()
{
    char nombre[LIMITENOMBRE];
    int i=0;
  //  printf("Ingrese un nombre \n");
   // fgets(nombre,20,stdin);
    utn_ingresarNombre("Ingrese nombre\n",&nombre[i],LIMITENOMBRE);
    utn_validarNombre(&nombre[i]);

 return 0;
}
    /*while(nombre[i]!= '\0')
        {
            if( (nombre[i] > 'a' && nombre[i] < 'z') && (nombre[i] > 'A' && nombre[i] < 'Z') )
            {
                return 0;
            }
        i++;
        }
    return 1;*/
char utn_ingresarNombre(char mensaje[],char string[],int limite)
{
    printf("%s",mensaje);
    fgets(string,limite,stdin);
    return string[limite];
}
int utn_validarNombre(char string[])
{
    int i;
    while(string[i]!= '\0')
        {
            if( (string[i] > 'a' && string[i] < 'z') && (string[i] > 'A' && string[i] < 'Z') )
            {
                return 0;
            }
        i++;
        }
    return 1;
}
