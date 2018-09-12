#include <stdio_ext.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


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
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */


float getFloat(char mensaje[])
{
    float auxiliar;
    printf("%s",mensaje);
    scanf("%f",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un número al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El número ingresado por el usuario
 *
 */
int getInt(char mensaje[])
{
    int auxiliar;
    printf("%s",mensaje);
    scanf("%d",&auxiliar);
    return auxiliar;
}

/**
 * \brief Solicita un caracter al usuario y devuelve el resultado
 * \param mensaje Es el mensaje a ser mostrado
 * \return El caracter ingresado por el usuario
 *
 */
char getChar(char mensaje[])
{
    char auxiliar;
    printf("%s",mensaje);
   // fflush(stdin); // Win
    //fpurge(stdin); //Linux y OSx
    scanf("%c",&auxiliar);
    return auxiliar;
}

/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
 */
char utn_getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}
/**
 * \brief Solicita un número que admite float y lo retorna
 * \return Número ingresado por el usuario
 *
 */
float utn_pedirNumero()
{
    float auxiliar;
    printf("Ingrese un numero: ");
    scanf("%f",&auxiliar);
    return auxiliar;
}
/**
*\brief Pide un numero al usuario.
*\param mensaje Es el mensaje que se va a mostrar
*\return Devuelve el numero ingresado por el usuario
*/
int utn_pedirUnNumero(char mensaje[])
{
    int numero;
    printf("%s",mensaje);
    scanf("%d",&numero);
    return numero;
}
/**
*\brief Realiza el calculo factorial de un numero y muestra el resultado.
*\param numeroIngresado Es el numero ingresado por el usuario
*\return Devuelve el resultado del calculo factorial
*/
int utn_calcularFactorial(int numeroIngresado)
{
int resultado;
if(numeroIngresado==1)
{
  return 1;
}
resultado=numeroIngresado* utn_calcularFactorial(numeroIngresado-1);
return (resultado);
}

/**
*\brief Realiza el calculo sumatorio de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return Devuelve el resultado de la suma.
*/
int utn_sumarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno + numeroDos;
    printf("El resultado de la suma es %d\n",resultado);
    return resultado;
}


/**
*\brief Realiza la resta de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ia de caracteres y haces la validaciones correspondientes, en ngresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la resta.
*/
int utn_restarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno - numeroDos;
    printf("El resultado de la resta es %d\n",resultado);
    return resultado;
}

/**
*\brief Realiza el calculo de division de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la division.
*/
float utn_dividirDosNumeros(int numeroUno, int numeroDos)
{
    float resultado;
    if(numeroUno== 0)
        {
            printf("Error, no se puede dividir por 0 ");
        }
        else if (numeroDos == 0)
        {
            printf("Error, no se puede dividir por 0 ");
        }
        else
        {
            resultado = numeroUno / numeroDos;
            printf("El resultado de la division es %.2f",resultado);
        }
        return 0;
}
/**
*\brief Realiza la multiplicacion de dos numeros y muestra el resultado.
*\param numeroUno Es el primer numero ingresado.
*\param numeroDos Es el segundo numero ingresado.
*\return retorno Devuelve el resultado de la multiplicacion.
*/
int utn_multiplicarDosNumeros(int numeroUno, int numeroDos)
{
    int resultado;
    resultado = numeroUno * numeroDos;
    printf("El resultado de la multiplicacion es %d",resultado);
    return resultado;
}

/**
*\brief Imprime todos los elementos de un array
*\param array Es el array ingresado por el usuario, el cual se va a analizar
*\param size Limite de caracteres que tiene el array.
*\return
*/
void utn_printIntArray(int array[], int size)
{
	int i;
	for(i = 0; i < size; i++)
	{
	    printf("\n%d",array[i]);
	}
	printf("\n");
}

/**
*\brief Calcula el menor valor del indice
*\param array Es el array que vamos a analizar
*\param size Es el limite del array
*\return Devuelve el minimo indice
*/
int utn_calcularIndiceMinimo(int array[], int size)
{
    int indice;
    int minimo = array[0];
    int indiceMinimo = 0;
    for (indice=1 ;indice < size; indice++)
    {
       if(array[indice] < minimo)
       {
           minimo = array[indice];
           indiceMinimo = indice;
       }

    }
    return indiceMinimo;
}

/**
*\brief A partir del indice minimo, realiza el swap de dos valores para ordenarlos
*\param array Es el array a analizar
*\param size Es el limite del array
*\return
*/
void utn_selectionSort(int array[], int size)
{
    int i;
    int indiceMinimo;
    int auxiliar;

    for(i=0;i<size;i++)
    {
        indiceMinimo = utn_calcularIndiceMinimo(array+i,size-i) + i;
        auxiliar = array[i];
        array[i] = array[indiceMinimo];
        array[indiceMinimo] = auxiliar;
    }

}
/**
*\brief Realiza el swap entre dos elementos de un array
*\param pArray Es el puntero del array
*\param indiceA Es el primer indice a comparar
*\param indiceB Es el segundo indice a comparar
*\return Devuelve -1 de ser falso y 0 si es verdadero
*/
int utn_swapInts(int* pArray, int indiceA, int indiceB)
 {
    int retorno = -1, auxiliar;

    if (pArray != NULL && indiceA >= 0 && indiceB >= 0 && indiceA != indiceB)
    {
        auxiliar = pArray[indiceA];
        pArray[indiceA] = pArray[indiceB];
        pArray[indiceB] = auxiliar;
        retorno = 0;
    }

    return retorno;
}


/**
*\brief Indica el numero maximo de un array
*\param array Es el array que vamos a analizar
*\param size Es el limite del array
*\return Devuelve el numero maximo de un array
*/
int utn_numeroMaximoArray(int array[],int size)
{
    int i;
    int numeroMayor;

    for (i=0;i<size;i++)
        {
            if (i==0)
            {
                numeroMayor = array[i];
            }
            if (array[i] > numeroMayor)
            {
                numeroMayor = array[i];
            }

            printf("\n%d", i);
            if (i == size-1)
            {
                printf("\nULTIMA VUELTA!");
            }

    }
    printf("\n\nNumero mayor: %d", numeroMayor);
    return numeroMayor;
}


/**
 * \brief Verifica si el valor recibido es numérico
 * \param str Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

int utn_esNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if(str[i] < '0' || str[i] > '9')
           {
               return 0;
           }
       i++;
   }
   return 1;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no lo es
 *
 */
int utn_esSoloLetras(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
           {
               return 0;
           }
       i++;
   }
   return 1;
}


/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int utn_esAlfaNumerico(char str[])
{
   int i=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z') && (str[i] < '0' || str[i] > '9'))
          {
             return 0;
          }
       i++;
   }
   return 1;
}



/**
 * \brief Verifica si el valor recibido contiene solo números, + y -
 * \param str Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int utn_esTelefono(char str[])
{
   int i=0;
   int contadorGuiones=0;
   while(str[i] != '\0')
   {
       if((str[i] != ' ') && (str[i] != '-') && (str[i] < '0' || str[i] > '9'))
           {
               return 0;
           }
       if(str[i] == '-')
           {
              contadorGuiones++;
           }
       i++;
   }
   if(contadorGuiones==1) // debe tener un guion
        {
            return 1;
        }

    return 0;
}

/**
 * \brief Pide una edad al usuario-
 * \return retorna 0
 *
 */
int utn_pedirEdad()
{
    int edad;
    printf("ingrese su edad \n");
    scanf("%d",&edad);
    return 0;
}
/**
 * \brief Verifica si la edad ingresada es valida-
 * \param edad la edad a validar
 * \param minimo la edad minima permitida
 * \param maximo la edad maxima permitida
 * \return devuelve 0 en caso de ser valida
 *
 */
int utn_validarEdad(int edad , int minimo, int maximo )
{
 while (edad < minimo || edad > maximo)
    {
        printf("Error, reingrese su edad\n");
        scanf("%d",&edad);
    }
    return 0;
}
/**
 * \brief Verifica y valida un cuil ingresado-
 * \param cuil es el cuil a validar
 * \return devuelve 1 en caso de ser valido
 *
 */
int esCuilValido(char cuil[])
{
    int i=0;
   int contadorGuiones=0;
   while(cuil[i] != '\0')
   {
       if((cuil[i] != '-') && (cuil[i] < '0' || cuil[i] > '9'))
           {
               return 0;
           }
       if(cuil[i] == '-')
           {
              contadorGuiones++;
           }
       i++;
   }
   if(contadorGuiones==2)
        {
            return 1;
        }
    return 1;
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return void
 */
void getString(char mensaje[],char input[])
{
    printf("%s",mensaje);
    scanf ("%s", input);
}

/**
 * \brief Solicita un texto al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo letras
 */
int getStringLetras(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(utn_esSoloLetras(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Solicita un texto numérico al usuario y lo devuelve
 * \param mensaje Es el mensaje a ser mostrado
 * \param input Array donde se cargará el texto ingresado
 * \return 1 si el texto contiene solo números
 */
int getStringNumeros(char mensaje[],char input[])
{
    char aux[256];
    getString(mensaje,aux);
    if(utn_esNumerico(aux))
    {
        strcpy(input,aux);
        return 1;
    }
    return 0;
}

/**
 * \brief Inicializa un array de enteros con el valor recibido
 * \param array Es el array a ser inicializado
 * \param cantidad_de_elementos Indica la logitud del array
 * \param valor Es el valor que sera cargado en cada posicion
 * \return -
 *
 */
void inicializarArrayInt(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i < cantidad_de_elementos; i++)
    {
        array[i] = valor;
    }
}

/**
 * \brief Busca la primer ocurrencia de un valor en un array de enteros
 * \param array Es el array en el cual buscar
 * \param cantidad_de_elementos Indica la logitud del array
 * \param valor Es el valor que se busca
 * \return Si no hay ocurrencia (-1) y si la hay la posicion de la misma (i)
 *
 */
int buscarPrimerOcurrencia(int array[],int cantidad_de_elementos,int valor)
{
    int i;
    for(i=0;i < cantidad_de_elementos; i++)
    {
        if(array[i] == valor)
        {
            return i;
        }
    }
    return -1;
}

