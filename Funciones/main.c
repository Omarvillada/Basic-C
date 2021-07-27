#include <stdio.h>
#include <stdlib.h>
/*
    Reto 1:
    1.Calcular la potencia de un numero
    2.Ingresar un valor base
    3.Ingresar un valor de exponente
    4.Dentro de una funcion calcular el exponente del numero base
    5.Imprime el resultado

    Reto 2:
    Hacer un programa que cambie de dolares a tu moneda y de tu moneda a dolares.
    Usar funciones
*/
int addition(int a, int b)
{
    int res = a + b;
    return res;
}

int main()
{
    printf("Funciones\n");
    int additionres = addition(6,4);
    printf("Resultado es: %i", additionres);
    return 0;
}
