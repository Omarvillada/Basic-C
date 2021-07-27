#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Crea una variable llamada x con valor de 10.
    Utilizando operadores de asignacion, que esta variable se sume asi misma el doble de su valor
    Imprimer el resultado
    */
    printf("Reto 4");
    int x = 10;
    x +=(x * 2);
    printf("El valor de x es: %i", x);

    /*
    Ingresa un numero entero.
    Usando operadores de asignacion realiza la operacion de modulo del valor ingresado con 5
    Imprimer el resultado mas 1 usando operadores de incremento.
    */

    printf("Reto 5 \n");
    int num;
    printf("Ingresa un numero entero: \n");
    scanf("%i",&num);
    num %=5;
    num++;
    printf("Resultado: %i", num);
    return 0;
}
