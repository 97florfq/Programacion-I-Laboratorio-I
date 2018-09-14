#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "utn.h"


#define CANTIDAD_EMPLEADOS 6

void utn_ordenarArrayStrn(char array[],int limite)
{
    int i;
    int auxiliar;
    if(array != NULL && limite >0)

    for(i=0;i<limite;i++)
    {
        auxiliar = array[i];
        array[i] = array[];
        array[] = auxiliar;
    }

}

int main()
{
    char nombres[15][50];
    int i;

    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i],50,"\nIngrese su nombre?","\nError",2);
    }
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%s\n",nombres[i]);
    }
    return 0;
}






