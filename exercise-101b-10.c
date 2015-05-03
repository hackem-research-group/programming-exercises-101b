/*
En el ejemplo 4.6 elimine la linea  N 7. Guarde el archivo y compile. ¿Que sucede? ¿A que se debe y porque?
R: Primero el programa no compila, esto se debe que estamos mencionando que vamos a usar "miBiblioteca.h", no lo hacemos como tal y no compila porque el programa no contiene alguna funcion o codigo de la misma"
*/

#include <stdio.h>
#include "miBiblioteca.h"

int main (){
    int a, b, c;

    do{
        printf("Proporcione tres numeros enteros distintos: ")
        scanf("%d,%d,%d", &a, &b, &c);
    }while ((a==b)||(a==c)||(b==c));

    printf ("El mayor es: %d/n", mayor (a, b, c));
    printf("El menor es: %d/n", menor ( a, b, c));

    return 0;
}
