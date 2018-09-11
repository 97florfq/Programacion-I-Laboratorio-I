int utn_getNumero ( int* pResultado,
                    char mensaje [],
                    char mensajeError[],
                    int minimo,
                    int maximo,
                    int reintentos);

int utn_getFloat (  float* pResultado,
                    char mensaje [],
                    char mensajeError[],
                    float minimo,
                    float maximo,
                    int reintentos);

float getFloat(char mensaje[]);
int getInt(char mensaje[]);
char getChar(char mensaje[]);
char utn_getNumeroAleatorio(int desde , int hasta, int iniciar);
float utn_pedirNumero();
int utn_pedirUnNumero(char mensaje[]);
int utn_calcularFactorial(int numeroIngresado);
int utn_sumarDosNumeros(int numeroUno, int numeroDos);
int utn_restarDosNumeros(int numeroUno, int numeroDos);
float utn_dividirDosNumeros(int numeroUno, int numeroDos);
int utn_multiplicarDosNumeros(int numeroUno, int numeroDos);
void utn_printIntArray(int array[], int size);
void utn_selectionSort(int array[], int size);
int utn_swapInts(int* pArray, int indiceA, int indiceB);
int utn_calcularIndiceMinimo(int array[], int size);
int utn_numeroMaximoArray(int array[],int size);
int utn_esNumerico(char str[]);
int utn_esSoloLetras(char str[]);
int utn_esAlfaNumerico(char str[]);
int utn_esTelefono(char str[]);
int utn_pedirEdad();
int utn_validarEdad(int edad , int minimo, int maximo );
int esCuilValido(char cuil[]);
int buscarPrimerOcurrencia(int array[],int cantidad_de_elementos,int valor);
void inicializarArrayInt(int array[],int cantidad_de_elementos,int valor);
void getString(char mensaje[],char input[]);
int getStringLetras(char mensaje[],char input[]);
int getStringNumeros(char mensaje[],char input[]);
