#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED
#define DATO_INVALIDO -1
#define false 0
#define true 1
int array_mostrar(int* pArray, int limite);
int array_calcularMaximo(int* pArray, int limite, int* pMaximo);
int array_init(int* pArray, int limite, int valor);
int array_minimoDesde(int* pArray, int limite, int desde, int* pMinimo);
int array_ordenar(int* pArray, int limite, int orden);
int array_swap(int* elementoA ,int* elementoB);

int array_ordenarDos(int* pArray, int limite, int orden);
#endif
