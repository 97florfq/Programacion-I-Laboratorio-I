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
        array[i] = array[i];
        array[i] = auxiliar;
    }

}

int main()
{
    char telefono [2];
    int i;
    for(i=0;i<2;i++)
    {
        utn_getTelefono(&telefono[i],20,"ingrese telefono","Error, reingrese telefono",2);
    }
    for(i=0;i<2;i++)
    {
        printf("%d\n",telefono[i]);
    }
  /*  char dineroAFavor [5];
    int i;
    for(i=0;i<5;i++)
    {
        utn_getNumeroConSigno(&dineroAFavor[i],"Ingrese numero","Error, reingrese",-500,500,3,5);
    }
     for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%d\n",dineroAFavor[i]);
    }*/
  // char nombres[15][50];
  //  int i=0;
    /*float edades[CANTIDAD_EMPLEADOS]={1.2,45,5.5,6.8,7.2};
    int i;
    for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getFloat(&edades[i],"\nEdad?","\nEdad fuera de rango",0.2,50.4,2,5)==-1)
        {
            edades[i] = -1;
        }

    }
     for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%f\n",edades[i]);
    }*/
  /*  for(i=0;i<CANTIDAD_EMPLEADOS;i++)
    {
            utn_getNombre(nombres[i],10,"Ingrese nombre","error, reingrese nombre",3);

    }*/
    /*for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        utn_getNombre(nombres[i],50,"\nIngrese su nombre?","\nError",2);
    }*/
  /*  for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        printf("%s\n",nombres[i]);
    }*/

    return 0;
}






