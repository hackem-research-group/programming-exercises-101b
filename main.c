//
//  main.c
//  operaciones basicas
//
//  Created by Alex Ulloa on 4/5/15.
//  Copyright (c) 2015 Alex Ulloa. All rights reserved.
//
/* - operacionesBasicas.h (suma, resta, multiplicacion, division {validar division para cero})
 - raicesPotencias.h (sacar la raiz enesima y poder elevar a la enesima potencia)
    PS: Aqui se entrega una recopilacion de como se deberia llamar a las funciones y ejemplos de los datos que pueden aceptar
 */
#include <stdio.h>
#include <math.h>
#include "OperacionesBasicas.h"
#include "RaicesyPotencias.h"
int main() {
    float c , d;
    c=27.67;
    d=3.76;
    printf("\nla suma es : %.2f",suma(c, d));
    printf("\nla resta es : %.2f",resta(c, d));
    printf("\nla multiplicacion es : %.2f",multiplicacion(c, d));
    printf("\nla division es : %.2f",division(c, d));
    printf("\n la raiz es : %.2f",raiz(c,d));
    
    printf("\n la potencia es : %.2f",potencia(c,d));
    return 0;
}
