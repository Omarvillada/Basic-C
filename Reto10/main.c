#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Ingresa valores a un arreglo con un tamaño de 5
        Multiplica todos su valores
        Imprime el resultado
    */
    printf("Reto 10\n");
    int i;
    int resul = 1;
    int arreglo[5];
    printf("Ingrese 5 numeros: \n");
    for(i = 0; i < 5; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%i",&arreglo[i]);
        resul *= arreglo[i];
    }
    printf("El resultado de la multiplicacion es: %i", resul);
    return 0;
}
