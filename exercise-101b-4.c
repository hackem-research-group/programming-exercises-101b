//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Variables Globales
int a,b,c,d;
float ra,ta,de;

//Funciones
float raiz1(int x, int y, int z)
{
    ra=(-(float)y+sqrt((float)d))/(2*(float)x);
    return ra;
}
float raiz2(int x, int y, int z)
{
    ta=(-(float)y-sqrt((float)d))/(2*(float)x);
    return ta;
}
int dis(int x, int y, int z)
{
    de=(y*y)-(4*x*z);
    return de;
}

//Funcion Principal
int main ()
{
	//Ingreso de Datos
    printf("Programa para determinar las raices reales de una ecuacion:\n");
    printf("de la forma Ax^2 + Bx +C = 0\n");
    do
    {
        printf("El valor de A:  ");
        scanf("%i",&a);
    }
    while(a==0);
    printf("\nEl valor de B:  ");
    scanf("%i",&b);
    printf("\nEl valor de C:  ");
    scanf("%i",&c);
	
	//Calculos y/o Resultados
    d=dis(a, b, c);

    if(d<0)
    {
        printf("\nLa Ecuacion no tiene soluciones en el conjunto de los Reales.");
    }
    else
    {
        printf("La Primera raiz es: %.2f",raiz1(a, b, c));
        printf("\nLa Segunda raiz es: %.2f",raiz2(a, b, c));
    }
	//Fin del Programa
	return 0;
}
