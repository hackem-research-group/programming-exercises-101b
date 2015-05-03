//Librerias
#include <stdio.h>
#include "Derp.h"
//Funcion Principal
int main()
{
    //Variables
    int a, b, c;
    //Ingreso de Datos
    do
    {
        printf("Proporcione tres numeros enteros distintos: ");
        scanf("%d %d %d", &a, &b, &c);
    }
    while((a == b) || (a == c) || (b == c));

    //Calculos y Resultados
    printf("El mayor es: %d\n", mayor(a, b, c));
    printf("El menor es: %d\n", menor(a, b, c));
    printf("El medio es: %d\n", medio(a, b, c));

    return 0;
}
