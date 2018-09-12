#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD 5

int retornarTotal(int listado[] , int tamanio);
float retornarPromedio(int listado[] , int tamanio);
int retornarMayor (int listado[], int tamanio);
int retornarMenor (int listado[], int tamanio);
int retornarCantidadDePares(int listado[], int tamanio);
int retornarCantidadEntreNotas(int listado[], int tamanio,int limiteInferior, int limiteSuperior);
void cargarListado(int listado [],int tamanio);
void mostrarInformacionDelArray(int listado[], int tamanio);
void mostrarListado(int listado [],int tamanio);


int main()
{
    int listadoDeNotas[CANTIDAD];
    cargarListado(listadoDeNotas, CANTIDAD);
    mostrarListado(listadoDeNotas,CANTIDAD);
    mostrarInformacionDelArray(listadoDeNotas,CANTIDAD);

    return 0;
}

 /*   printf("tamaño :%d",sizeof(numeroIngresado));
    printf("tamaño :%d",sizeof(listadoDeNotas));
    printf("direccion:%d",&numeroIngresado);
    printf("direccion:%d",listadoDeNotas);*/
int retornarCantidadEntreNotas(int listado[], int tamanio,int limiteInferior,int limiteSuperior)
{
    int i;
    int numeroIngresado;
    int cantidadEntreNotas=0;
      for(i=0;i<tamanio;i++)
    {
        printf("\n Ingrese nota:");
        scanf("%d",&numeroIngresado);
        listado[i] = numeroIngresado;
        if(numeroIngresado > limiteInferior && numeroIngresado < limiteSuperior)
        {
            cantidadEntreNotas ++;
        }
    }
      return cantidadEntreNotas;
}
