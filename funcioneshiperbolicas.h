#include <stdio.h>
#include <math.h>

int main (){
	int a;
	float b;	
	
	do{
		printf("1 sinh\n2 cosh\n3 tanh\n");
		scanf("%d", &a);
		switch(a){
			case 1:
				printf("ingrese el numero: \n");
				scanf("%f", &b);
				printf("el sinh es: %f", sinhf(b));
				break;
			case 2:
				printf("ingrese el numero: \n");
				scanf("%f", &b);
				printf("el cosh es: %f", coshf(b));
				break;
			case 3:
				printf("ingrese el numero: \n");
				scanf("%f", &b);
				printf("la tanh es: %f", tanhf(b));
				break;
		}
	}while (a<1 || a>3);
	return 0;
}