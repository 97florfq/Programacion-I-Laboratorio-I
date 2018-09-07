#include <stdio.h>
#include <stdlib.h>
int retornarTotal(int listado[] , int tamanio)
{
    int i;
    int acumuladorDeNotas=0;
    for (i =0; i < tamanio ; i++)
    {
        acumuladorDeNotas = acumuladorDeNotas + listado[i];

    }
    return acumuladorDeNotas;
}

float retornarPromedio(int listado[] , int tamanio)
{
    int suma;
    float promedio;
    suma = retornarTotal(listado,tamanio);
    promedio = suma / tamanio;
    return promedio;

}

void cargarListado(int listado [],int tamanio)
{
    int i;
    int numeroIngresado;
      for(i=0;i<tamanio;i++)
    {
        printf("\n Ingrese nota:");
        scanf("%d",&numeroIngresado);
        listado[i] = numeroIngresado;
    }
}

int retornarMayor (int listado[], int tamanio)
{
    int i;
    int mayor;
       for(i=0;i<tamanio;i++)
    {
       if( i==0 || listado[i] > mayor )
       {
            mayor = listado[i];
       }
    }
    return mayor;
}
int retornarMenor (int listado[], int tamanio)
{
    int i;
    int menor;
     for(i=0;i<tamanio;i++)
    {
     if(i==0 || listado [i] < menor)
       {
        menor = listado [i];
       }
    }
    return  menor;
}
int retornarCantidadDePares(int listado[], int tamanio)
{
    int cantidadDePares =0;
    int i;
    for(i=0;i<tamanio;i++)
    {
    if(listado[i]%2 ==0)
        {
            cantidadDePares ++;
        }
    }
    return cantidadDePares;
}
void mostrarInformacionDelArray(int listado[], int tamanio)
{
    int mayor;
    int menor;
    int acumuladorDeNotas=0;
    int promedioTotal;
    int pares;
    int desaprobados;
    int aprobados;
    int aFinal;
    mayor = retornarMayor(listado,tamanio);
    menor = retornarMenor(listado,tamanio);
    acumuladorDeNotas = retornarTotal(listado,tamanio);
    promedioTotal = retornarPromedio(listado,tamanio);
    pares = retornarCantidadDePares(listado,tamanio);
    desaprobados = retornarCantidadEntreNotas(listado,tamanio,1,3);
    aFinal= retornarCantidadEntreNotas(listado,tamanio,4,5);
    aprobados = retornarCantidadEntreNotas(listado,tamanio,6,10);
     printf("El mayor es : %d\n",mayor);
     printf("El menor es : %d \n",menor);
     printf("El total de las notas es %d\n" , acumuladorDeNotas);
     printf("El promedio es : %d\n",promedioTotal );
     printf("La cantidad de pares es : %d\n",pares);
     printf("La cantidad de desaprobados es %d \n",desaprobados);
     printf("La cantidad de aprobados es %d \n",aprobados);
     printf("La cantidad de gente a final es %d \n",aFinal);

}
void mostrarListado(int listado [],int tamanio)
{
    int i;
      for(i=0;i<tamanio;i++)
    {
        printf("\n La nota es : %d\n" ,listado[i]);
    }
}
