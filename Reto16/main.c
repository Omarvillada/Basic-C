#include <stdio.h>
#include <stdlib.h>

    /*
    Reto 2:
    Hacer un programa que cambie de dolares a tu moneda y de tu moneda a dolares.
    Usar funciones
    */

    float dolarToCOP(float dolar)
    {
        float COP = dolar * 3863.43;
        return COP;
    }
    float COPtoDolar(float cop)
    {
        float dolar = cop * 0.00026;
        return dolar;
    }
int main()
{
    printf("Reto 16\n");
    float cantidad;
    char option;
    printf("Si quieres convertir de Dolares a pesos, preciona P \n");
    printf("Si quieres convertir de Pesos a Dolares, preciona D \n");
    scanf(" %c", &option);
    printf("Escribe la cantidad que quieres cambiar: ");
    scanf("%f", &cantidad);
    if(option == 'P')
        printf("El resultado es: %f", dolarToCOP(cantidad));
        else if(option == 'D')
            printf("El resultado es: %f", COPtoDolar(cantidad));
    return 0;
}
