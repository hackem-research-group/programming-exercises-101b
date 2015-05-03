/*
Si para el programa del Ejemplo 4.4 se realizara una nueva ronda de llamados consecutivos a cada una de las tres funciones involucradas, ¿Cuáles serían los valores que se visualizarían en la salida estándar?
R: Se aumentan 2 nuevas filas por cada función en este caso 6, ya que tenemos 3 funciones, la de la función 1 sale igual, sin alterarse, pero de la función 2 y de la función 3, podemos notar que se incremento en 1 al numero que dio como resultado en el programa sin alterarlo.
*/
#include <stdio.h>

void funcion1 (void);
void funcion2 (void);
void funcion3 (void);
int x=1;
int main()
{
    int x=10;
    printf("valor de x=%d(main)\n ",x);
    {
      int x=50;
    printf("valor de x=%d(main=ambito interno)\n", x);
    }
    printf("valor de x=%d(main)\n ",x);
    funcion1();funcion2();funcion3();
    funcion1();funcion2();funcion3();
    funcion1();funcion2();funcion3();

    printf("valor de x=%d(main)\n ",x);
    return 0;
}

void funcion1(void){
int x=100;
printf("\n valor de x=%d al entrar (funcion1) \n",x++);
printf("valor de x=%d al salir (funcion1) \n",x);
}
void funcion2(void){
static int x=1000;
printf("\n valor de x=%d al entrar (funcion2) \n",x++);
printf("valor de x=%d al salir (funcion2) \n",x);
}
void funcion3(void){
printf("\n valor de x=%d al entrar (funcion3) \n",x++);
printf("valor de x=%d al salir (funcion3) \n",x);
}

