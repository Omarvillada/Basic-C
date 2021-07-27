#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*
        Ingresa valores a un arreglo con un tamaño de 5
        Multiplica todos su valores
        Imprime el resultado
    */
    printf("Arreglos unidimensionales\n");

    int integerList[3];
    integerList[0] = 4;
    integerList[1] = 5;
    integerList[2] = 6;

    float floatList[] = {23.4,34.2,8,10,5.9};
    char charList[4];

    charList[0] = 'O';
    charList[1] = 'M';
    charList[2] = 'A';
    charList[3] = 'R';

    printf("\n Primer entero: \t\t %i", integerList[0]);
    printf("\n Ultimo flotante: \t\t %f", floatList[4]);
    printf("\n Lista de caracteres: \t  %c%c%c%c", charList[0],charList[1],charList[2],charList[3]);
    return 0;
}
