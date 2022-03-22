#include <stdio.h>

void main () {
    int var=5;
    int * punt = &var;
    printf("\nContenido del puntero: %d \n",*punt);
    printf("Direccion de memoria almacenada por el puntero:%p",punt);
    printf("\nDireccion de memoria de la variable: %p",&var);// RESPONDER PORQUE ESTOS SON IGUALES
    printf("\nDireccion de memoria del puntero: %p",&punt);
    printf("\nTamaño de memoria usado por la variable:%ld bytes\n",sizeof(var));
}