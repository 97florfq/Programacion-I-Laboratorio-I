#include <stdio_ext.h>
#include <stdlib.h>
static void myFpurge()
{
    __fpurge(stdin);
    //__fflush(stdin);
}
static int getInt(int* numeroIngresado)
{
    myFpurge();
    return scanf("%d", numeroIngresado);
}
static int getFloat(float* numeroIngresado)
{
    myFpurge();
    return scanf("%f", numeroIngresado);
}
static int getChar(char* caracterIngresado)
{
    myFpurge();
    return scanf("%c", caracterIngresado);
}
static int getString(char* textoIngresado)
{
    myFpurge();
    return scanf("%s", textoIngresado);
}

/**
*\brief Solicita un numero al usuario , valida y devuelve el resultado.
*\param pResultado Puntero a la variable resultado
*\param mensaje Ees el mensaje a ser mostrado
*\param mensajeError Es el mensaje que se muestra en caso de error
*\param minimo Es el numero minimo aceptado
*\param maximo Es el numero maximo aceptado
*\param reintentos Es la cantidad de reintentos aceptados
*\return Si es correcto retorna 0 y si es incorrecto retorna -1
*
*/

int utn_getNumero ( int* pResultado,
                    char mensaje [],
                    char mensajeError[],
                    int minimo,
                    int maximo,
                    int reintentos)

{
    int numero;
    while(reintentos >0)
    {
        printf("%s" ,mensaje);
        if(scanf("%d",&numero)==1)
        {
            if(numero > minimo && numero < maximo)
            {
                *pResultado = numero;
                 return 0;
            }
            else
            {
                printf("%s" ,mensajeError);
                scanf("%d",&numero);
                reintentos --;
            }
        }
    }
    return  -1;
}



/**
*\brief Solicita un decimal al usuario , valida y devuelve el resultado.
*\param pResultado Puntero a la variable resultado
*\param mensaje Ees el mensaje a ser mostrado
*\param mensajeError Es el mensaje que se muestra en caso de error
*\param minimo Es el decimal minimo aceptado
*\param maximo Es el decimal maximo aceptado
*\param reintentos Es la cantidad de reintentos aceptados
*\return Si es correcto retorna 0 y si es incorrecto retorna -1
*
*/

int utn_getFloat (  float* pResultado,
                    char mensaje [],
                    char mensajeError[],
                    float minimo,
                    float maximo,
                    int reintentos)
{
    float numeroDecimal;
    while (reintentos>0)
    {
        printf("%s",mensaje);
        if(scanf("%f",&numeroDecimal)==1)
        {
            if(numeroDecimal > minimo && numeroDecimal < maximo)
            {
                *pResultado = numeroDecimal;
                return 0;
            }
            else
            {
                printf("%s" ,mensajeError);
                scanf("%f",&numeroDecimal);
                reintentos --;
            }
        }
    }
    return -1;
}


/**
*\brief Solicita un caracter al usuario , valida y devuelve el resultado.
*\param pResultado Puntero a la variable resultado
*\param mensaje Es el mensaje a ser mostrado
*\param mensajeError Es el mensaje que se muestra en caso de error
*\param minimo Es el caracter minimo aceptado
*\param maximo Es el caracter maximo aceptado
*\param reintentos Es la cantidad de reintentos aceptados
*\return Si es correcto retorna 0 y si es incorrecto retorna -1
*
*/

int utn_getCaracter ( char* pResultado,
                      char mensaje [],
                      char mensajeError[],
                      char minimo,
                      char maximo,
                      int reintentos)
{
    char caracter;
    while(reintentos>0)
    {
        printf("%s",mensaje);
        if (scanf("%s",&caracter)==1);
        {
            if(caracter > minimo && caracter < maximo)
            {

            }
        }
    }
return 0;
}

