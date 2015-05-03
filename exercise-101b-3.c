#include <stdio.h>

int cuadrado(int num)
{
    return num*num;
}
int main()
{
    int a;
    printf("Ingrese un numero: ");
    scanf("%d", &a);
    printf("El cuadrado del numero es: %d", cuadrado(a));
    return 0;
}
