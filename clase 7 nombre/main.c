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
    utn_ingresarNombre("Ingrese nombre",&nombre[i],LIMITENOMBRE);
    printf("%s",nombre);

    for(i=0;i<LIMITENOMBRE;i++)
    {

        if( (nombre[i] < 'a' || nombre[i] > 'z') && (nombre[i] < 'A' || nombre[i] > 'Z') && (nombre[i] != '\0') )
           {
                printf("Error, no es un nombre valido\n");
                utn_ingresarNombre("Reingrese nombre",&nombre[i],LIMITENOMBRE);

           }
        else{
            printf("Nombre valido");
        }

    }
   /* for(i=0;i<LIMITENOMBRE;i++)
    {
        if((nombre[i] != ' ') && (nombre[i] < 'a' || nombre[i] > 'z') && (nombre[i] < 'A' || nombre[i] > 'Z'))
           {
                printf("Error, no es un nombre valido");
                return -1;
           }
    }*/
    return 0;
}
char utn_ingresarNombre(char mensaje[],char string[],int limite)
{
    printf("%s",mensaje);
    fgets(string,20,stdin);
    return string[limite];
}
/*int utn_validarNombre(char string[])
{
    int i;
    for(i=0;i<LIMITENOMBRE;i++)
    {
        if( (string[i] < 'a' || string[i] > 'z') && (string[i] < 'A' || string[i] > 'Z'))
           {
                printf("Error, no es un nombre valido");
                return -1;
           }
    }
    return 0;

}*/
