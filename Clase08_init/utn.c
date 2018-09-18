#include <stdio_ext.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "utn.h"
#define BUFFER_STR 4046

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int isValidNombre(char* pBuffer,int limite)
{
    int retorno= 0;
    int i;
    if(pBuffer != NULL && limite >0)
    {
        retorno= 1;
        for(i=0; i<limite && pBuffer[i] != '\0';i++ )
        {
            if(tolower(pBuffer[i]) <'a' || tolower(pBuffer[i]) > 'z' )
            {
                retorno =0;
                break;
            }
        }
    }

    return retorno;
}

/**
    utn_getNombre :
    @param
    @param
    @return
*/
static int getString(char* pBuffer, int limite)
{
    int retorno=-1;
    char bufferStr[BUFFER_STR];
    int len;
    if(pBuffer !=NULL && limite >0)
    {
        __fpurge(stdin);
        fgets(bufferStr,limite,stdin);
        len = strlen(bufferStr);
        if(len != limite -1 || bufferStr [limite -2] == '\n' )
        {
            bufferStr[len -1] = '\0';
        }
        retorno =0;
        strncpy(pBuffer,bufferStr,limite);
    }
    return retorno;
}


/**
    utn_getNombre :
    @param
    @param
    @return
*/
int utn_getNombre(  char* pNombre,int limite, char* msg,
                    char* msgErr, int reintentos)

{

    int retorno=-1;
    char bufferNombre[BUFFER_STR];
    if(pNombre != NULL && limite > 0 && msg!= NULL &&
                    msgErr!= NULL && reintentos >=0)
    {
        do
        {
            reintentos --;
            printf("%s",msg);
            if(getString(bufferNombre,limite)==0 && isValidNombre(bufferNombre,limite))
            {
              strncpy(pNombre,bufferNombre,limite);
              retorno =0;
              break;
            }
            else
            {
                printf("%s",msgErr);
            }

        }while(reintentos >= 0);

    }
    return retorno;
}

static int isFloat(char* pBuffer,int limite)
{
    int retorno= 0;
    int i;
    if(pBuffer != NULL && limite >0)
    {
        retorno= 1;
        for(i=0; i<limite && pBuffer[i] != '\0';i++ )
        {
            if((pBuffer[i] >= 0 && pBuffer[i] <= 9) && (pBuffer[i] == ',' || pBuffer [i] == '.' ))
            {
                retorno =0;
                break;
            }
        }
    }

    return retorno;
}

static int getFloat(char* pBuffer,int limite)
{
    char bufferString [5];
    int retorno = -1;


    if(getString(bufferString,sizeof(bufferString)) == 0 && isFloat(bufferString, limite))
    {
        *pBuffer = atof(bufferString);
        retorno = 0;
    }

    return retorno;
}


int utn_getFloat(  float* pFloat, char* msg,
                    char msgErr[],float min, float max,
                    int reintentos, int limite)

{
    int retorno=-1;
    char buffer;
    if( pFloat != NULL &&  msg != NULL && msgErr != NULL &&
         min <= max && reintentos >= 0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if( getFloat(&buffer,limite) == 0 &&
                buffer >= min && buffer <= max)
            {
                retorno = 0;
                *pFloat = buffer;
                break;
            }
            else
            {
                printf("%s",msgErr);
            }
        }while(reintentos >= 0);
    }
    return retorno;
}


static int esNumeroConSigno(char* pBuffer,int limite)
{
    int retorno= 0;
    int i;
    if(pBuffer != NULL && limite >0)
    {
        retorno= 1;
        for(i=0; i<limite && pBuffer[i] != '\0';i++ )
        {
            if(  (pBuffer[i] >= '0' && pBuffer[i] <= '9') && (pBuffer[i] == '-') )
            {
                retorno =0;
                break;
            }
        }
    }

    return retorno;
}

static int getNumeroConSigno(char* pBuffer,int limite)
{
    char bufferString [400];
    int retorno = -1;


    if(getString(bufferString,sizeof(bufferString)) == 0 && esNumeroConSigno(bufferString, limite))
    {
        *pBuffer = atoi(bufferString);
        retorno = 0;
    }

    return retorno;
}


int utn_getNumeroConSigno(  char* pNumeroSigno, char* msg,
                    char msgErr[],int min, int max,
                    int reintentos, int limite)

{
    int retorno=-1;
    char buffer;
    if( pNumeroSigno != NULL &&  msg != NULL && msgErr != NULL &&
         min <= max && reintentos >= 0 && limite >0)
    {
        do
        {
            reintentos--;
            printf("%s",msg);
            if( getNumeroConSigno(&buffer,limite) == 0 &&
                buffer >= min && buffer <= max)
            {
                retorno = 0;
                *pNumeroSigno = buffer;
                break;
            }
            else
            {
                printf("%s",msgErr);
            }
        }while(reintentos >= 0);
    }
    return retorno;
}

static int esTelefonoValido(char* pBuffer,int limite)
{
    int retorno= 0;
    int i;
    int contadorGuiones=0;
    if(pBuffer != NULL && limite >0)
    {
        retorno= 1;
        for(i=0; i<limite && pBuffer[i] != '\0';i++ )
        {
            if( (pBuffer[i] >= '0'  && pBuffer[i] <= '9' ) && (pBuffer[i] == '-'))
                {
                    retorno =0;
                }
            if(pBuffer[i] == '-')
                {
                    contadorGuiones++;
                }
        }
        if(contadorGuiones<1) // debe tener un guion
            {
                retorno = 1;
            }
    }
    return retorno;
}

static int getTelefono(char* pBuffer,int limite)
{
    char bufferString [limite];
    int retorno = -1;


    if(getString(bufferString,sizeof(bufferString)) == 0 && esTelefonoValido(bufferString, limite))
    {
        *pBuffer = atoi(bufferString);
        retorno = 0;
    }

    return retorno;
}

/**
    utn_getNombre :
    @param
    @param
    @return
*/
ºint utn_getTelefono(  char* pTelefono,int limite, char* msg,
                    char* msgErr, int reintentos)

{

    int retorno=-1;
    char bufferTelefono[BUFFER_STR];
    if(pTelefono != NULL && limite > 0 && msg!= NULL &&
                    msgErr!= NULL && reintentos >=0)
    {
        do
        {
            reintentos --;
            printf("%s",msg);
            if(getTelefono(bufferTelefono,limite)==0 && esTelefonoValido(bufferTelefono,limite))
            {
              strncpy(pTelefono,bufferTelefono,limite);
              retorno =0;
              break;
            }
            else
            {
                printf("%s",msgErr);
            }

        }while(reintentos >= 0);

    }
    return retorno;
}
