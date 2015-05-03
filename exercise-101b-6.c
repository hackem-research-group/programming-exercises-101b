//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Variables Globales
int a,b,c;

//Funciones
int coient(int x, int y)
{
    do
    {
        a=a-b;
        c++;
    }
    while(a>0);
    return c;
}

//Funcion Principal
int main()
{
	//Ingreso de Datos
    printf("Programa de calculo de Cociente de dos numeros enteros.\n");
    do
    {
        printf("\nEl valor de a:  ");
        scanf("%i",&a);
        printf("El valor de b:  ");
        scanf("%i",&b);
    }
    while(b==0 || a==0);
    c=0;
	//Calculos y/o Resultados
    printf("El cociente entre a y b es: %i",coient(a,b));
	//Fin del Programa
    return 0;
}
