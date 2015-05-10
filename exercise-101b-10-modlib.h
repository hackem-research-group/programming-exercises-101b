#include <stdio.h>
#include <math.h>

int main ()
{
	int a, b;
	printf("ingrese el numerador: \n");
	scanf("%d", &a);
	printf("\nIngrese el denominador: \n");
	scanf("%d", &b);

	if(b==0)
	{
	    printf("\nEl modulo es cero");
	}
	else
	{
            printf("\nEL Modulo es:%d/%d=%d",a,b,a/b);
	}
	return 0;
}
