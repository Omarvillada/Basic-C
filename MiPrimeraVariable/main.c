#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA;
    float floatA;
    char letterA;
    printf("Ingrese el valor del entero A: ");
    scanf("%i", &integerA);
    printf("Ingrese el valor del float A: ");
    scanf("%f", &floatA);
    printf("Ingrese el valor del caracter A:");
    scanf(" %c", &letterA);

    printf("El entero A es: %i \n", integerA);
    printf("El flotante A es: %f \n", floatA);
    printf("El caracter A es: %c \n", letterA);
    return 0;
}
/*
Reto
1.Crea dos variables
2.Ingresa y guarda el valor de ambas variables
3.Intercambia el valor de las variables
*/
