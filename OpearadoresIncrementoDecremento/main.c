#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Operadores de incremento y decremento\n");

    int value,result;

    value = 25;

    result = value++;

    printf("Resultado: %i \n", result);
    printf("Value: %i \n", value);
    value = 25;

    result = ++value;

    printf("Resultado: %i \n", result);

    value = 25;
    result = value--;

    printf("Resultado: %i \n", result);

    value = 25;

    result = --value;

    printf("Resultado: %i \n", result);



    return 0;
}
