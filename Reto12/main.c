#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Escribir un programa que nos diga el numero mas grande de un arreglo.
        Utilizando arreglos e iteradores
    */
    printf("Reto12\n");

    int arraylength;
    int mayor = 0;
    printf("Ingrese la longitud del arreglo: \n");
    scanf("%i", &arraylength);
    int arreglo[arraylength];
    int i;
    for(i = 0; i < arraylength; i++)
    {
        printf("Ingrese un numero para la posicion %i ", i);
        scanf("%i", &arreglo[i]);
        if(arreglo[i] > mayor)
        {
            mayor = arreglo[i];
        }

    }
    printf("El mayor es: %i", mayor);
    return 0;
}
