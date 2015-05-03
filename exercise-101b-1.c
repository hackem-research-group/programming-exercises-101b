//Bibliotecas
#include <stdio.h>

//Funciones
int mayor (int x, int y, int z)
{
    int max = x;

    if(y > max)
    {
        max = y;
    }

    if(z > max)
    {
        max = z;
    }
    return max;
}

int menor (int x, int y, int z)
{
    int min = x;

    if(y < min)
    {
        min = y;
    }

    if(z < min)
    {
        min = z;
    }
    return min;
}

int medio (int x, int y, int z)
{
    if(x != mayor(x, y, z) && x !=menor(x, y, z))
    {
        return x;
    }
    else
    {
        if(y != mayor(x, y, z) && y !=menor(x, y, z))
        {
            return y;
        }
        else
        {
            return z;
        }
    }
}

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
