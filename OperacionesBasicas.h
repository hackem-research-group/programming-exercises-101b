
//
//  OperacionesBasicas.h
//  operaciones basicas
//
//  Created by Alex Ulloa on 4/5/15.
//  Copyright (c) 2015 Alex Ulloa. All rights reserved.
//
//suma de dos numeros
float suma(float a, float b)
{
    return a+b;
}
//resta de dos numeros
float resta(float a, float b)
{
    return a-b;
}
//multiplicacion de dos numeros
float multiplicacion(float a, float b)
{
    return a*b;
}
//division de dos numeros
float division(float a, float b)
{
    //valiacion division para 0
    if (b==0)
    {
        printf("\n!!!Error matematico no se conoce division para cero!!!");
    }
    return  a/b;
}