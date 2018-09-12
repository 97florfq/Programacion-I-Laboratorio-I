#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#include "array.h"
#define CANTIDAD_EMPLEADOS 5
#define DATO_INVALIDO -1
#define false 0
#define true 1


int array_mostrar(int* pArray, int limite);

int main()
{
    int edades[CANTIDAD_EMPLEADOS] = {50,10,20,5,30,8};
    int i;

  /*  for(i=0;i < CANTIDAD_EMPLEADOS;i++)
    {
        if(utn_getEntero(&edades[i],2,"\nEdad?","\nEdad fuera de rango",0,200)==-1)
        {
            edades[i] = DATO_INVALIDO;
        }
    }
*/
    array_minimoDesde(edades, CANTIDAD_EMPLEADOS, 0, i);
    array_mostrar(edades,CANTIDAD_EMPLEADOS);
    printf("\n%d",i);


    return 0;
}
/*int array_minimoDesde(int* pArray, int limite, int desde, int* pMinimo)
{
    int retorno=-1;
    int j;
    int auxiliarValorMinimo;
    int auxiliarIndiceMinimo;
    int flagPrimerMinimo = false;
    if(pArray != NULL && limite >= desde && pMinimo != NULL)
    {
        for(j=0;j<limite;j++)
        {
            if (flagPrimerMinimo == false)
            {
                auxiliarValorMinimo = pArray [j];
                flagPrimerMinimo = true;
            }
            else if(pArray[j] < auxiliarValorMinimo)
            {
                auxiliarIndiceMinimo = pArray[j];
            }
        }
    retorno = 0;

    }


    return retorno;
}*/



