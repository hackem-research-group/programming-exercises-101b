#include <stdio.h>

int exponente(int b, int e)
{
    int limite;
    int r=1;
    for (limite=1; limite<=e; limite++)
    {
        r=r*b;
    }
    return r;
}
int main()
{
    int b,e;
    do{
    printf("Ingrese una base: ");
    scanf("%d", &b);
    printf("Ingrese el exponente: ");
    scanf("%d", &e);
    }while(b<0||e<0);
    if (e==0)
    {
    printf("%d elevado a la %d es: 1", b, e);
    }
    else{
    printf("%d elevado a la %d es: %d", b, e, exponente(b, e));
    }
    return 0;
}
