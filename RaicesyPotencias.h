//
//  RaicesyPotencias.h
//  operaciones basicas
//
//  Created by Alex Ulloa on 4/5/15.
//  Copyright (c) 2015 Alex Ulloa. All rights reserved.
//operacion potencia
float potencia(float a, float b)
{
    float c = pow(a,b);
    return c;
}
//operacion raiz
float raiz(float a, float b)
{
    float c = pow(a,(1/b));
    return c;
}