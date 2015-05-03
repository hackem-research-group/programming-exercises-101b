//Bibliotecas
#include <stdio.h>
#include <stdlib.h>

//Funciones
int multiplicacion(int x, int y)
{
    int contador, suma = 0;
    for(contador = 0; contador < y; contador++)
    {
        suma += x;
    }
    return suma;
}

//Funcion Principal
int main()
{
    //Variables
    int x, y;

    //Entrada de Datos (Teclado)
    printf("Ingresa el primer numero: ");
    scanf("%d", &x);
    printf("Ingresa el segundo numero: ");
    scanf("%d", &y);

    //Calculos y/o Resultado
    printf("\nEl valor de %d * %d = %d",x, y, multiplicacion(x, y));

    //Fin del Programa
    return 0;
}
