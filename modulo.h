#include <stdio.h>
#include <math.h>

int main (){
	int a, b;
	do{
		printf("ingrese el numerador: \n");
		scanf("%d", &a);
		printf("ingrese el denominador: \n");
		scanf("%d", &b);
	}while(b==0);
	printf("el modulo es: %d", a%b);
}
return 0;