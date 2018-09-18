#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED

int utn_getNombre(  char* pNombre,int limite, char* msg,
                    char* msgErr, int reintentos);
int utn_getFloat(  float* pFloat, char* msg,
                    char msgErr[],float min, float max,
                    int reintentos,int limite);
int utn_getNumeroConSigno(  char* pNumeroSigno, char* msg,
                    char msgErr[],int min, int max,
                    int reintentos, int limite);

int utn_getTelefono(  char* pTelefono,int limite, char* msg,
                    char* msgErr, int reintentos);


#endif // UTN_H_INCLUDED
