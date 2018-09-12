#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{

    char clave[9];
    char usuario[6];
    char auxiliar[]="admin\n";
    char auxiliarClave[]="admin\n";
    printf("\nusuario ");

    fgets(usuario,16,stdin);
    __fpurge(stdin);
    printf("clave");
    fgets(clave,10,stdin);
    __fpurge(stdin);
    int otroAux = strlen(usuario);
    printf("tamanio %d", otroAux);

    printf("%s %s",clave,usuario );
    int retorno;
    retorno =strcmp(usuario,clave);
    printf("%d",retorno);
    printf("%s %s",auxiliar,usuario);
    /* if(strcmp(usuario,"admin\n") == 0)*/
    if(strcmp(usuario,auxiliar) == 0 && strcmp(clave, auxiliarClave))
    {
        printf("ingreso");
    }
    else
    {
        printf("error");
    }

   /* char nombre[10];
    char apellido[10];
    char localidad[10];*/
    /*int tamanio;
    tamanio = sizeof(nombre);
    printf("antes %d\n",tamanio);
    printf("Ingrese nombre\n");
    scanf("%s",nombre);
    tamanio = sizeof(nombre);
    printf("despues %d\n",tamanio);
    printf("el nombre es %s y usted es...",nombre);*/
    /*fgets(nombre,11,stdin);
    __fpurge(stdin);
    fgets(apellido,11,stdin);
    __fpurge(stdin);
    fgets(localidad,11,stdin);
    __fpurge(stdin);
     printf("nombre:%s  \napellido es %s y localidad :%s ",apellido,apellido,localidad);*/
    return 0;
}
