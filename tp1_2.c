#include <math.h>
#include <stdio.h>

int cuadrado (int numero);

void cuadradoCvoid (int *puntero);  // Funcion cuadrado usando void

void mostrarDatos (int numero);

void invertir (int *a, int *b);

void orden (int *a, int *b);

void main () {
    int numero1, numero2, numeroAux;
    int * puntero1 = &numero1;
    int * puntero2 = &numero2;
    int * punteroAux = &numeroAux;

    printf("\n Introduzca el numero 1: ");
    scanf("%d",&numero1);
    numeroAux=numero1;
    printf("\n Introduzca el numero 2: ");
    scanf("%d",&numero2);
    printf("\n El primer numero ingresado es %d y el segundo numero es %d\n",numero1,numero2);
    printf("\n Ejercicio A) El cuadrado del numero 1 introducido es %d \n",cuadrado(numero1));
    cuadradoCvoid(punteroAux);
    printf("\n Ejercicio B) El cuadrado del numero usando void es %d \n",numeroAux);
    mostrarDatos(numero2);
    invertir(puntero1,puntero2);
    printf("\n Ejercicio D) Debido a la funcion invertir, ahora el primer numero es %d y el segundo es %d\n",numero1,numero2);
    orden (puntero1,puntero2);
    printf("\n Ejercicio E) Luego de la funcion orden, el primer numero es %d y el segundo es %d\n",numero1,numero2);

}

int cuadrado (int numero) {
    numero=numero*numero;
    return numero;
}
void cuadradoCvoid (int *puntero) {
    *puntero = *puntero * *puntero;
}
void mostrarDatos (int numero) {
    printf("\n Ejercicio C) la variable recibida por la funcion mostrarDatos tiene direccion : %p",&numero);
    printf("\ny el contenido es el numero : %d\n",numero);
}
void invertir (int *a,int *b) {
    int aux = *a;
    *a=*b;
    *b=aux;
}
void orden (int *a,int *b) {
    if (*a<*b) {
        int aux=*b;
        *b=*a;
        *a=aux;
    }
}