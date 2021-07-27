#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Arregos e Iteradores\n");
    int integerArray[11];
    int i;
    for(i = 0; i < 11; i ++)
    {
        integerArray[i] = i * i;
        printf("Valor (%i): %i \n", i, integerArray[i]);
    }
    return 0;
}
