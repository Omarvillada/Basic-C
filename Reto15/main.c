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
int potencia(int base, int exponente)
{
    int i;
    int resultado = 1;
    for(i = 0; i < exponente; i++)
    {
        resultado *= base;
    }
    return resultado;
}
int main()
{
    printf("Calcular la potencia de un numero\n");
    int base, exponente;
    printf("Ingresa la base: \n");
    scanf("%i",&base);
    printf("Ingresa el exponente: \n");
    scanf("%i", &exponente);

    printf("El resultado es: %i", potencia(base, exponente));

    return 0;
}

