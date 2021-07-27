#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Usando for imprime la secuencia fibonacci hasta la novena vuelta
    */
    printf("Serie fibonacci\n");

    int f0 = 0;
    int f1 = 1;
    int i;

    for(i = 0; i < 9; i++)
    {
        printf("%i \n", f0);
        f0 += f1;
        f1 = f0 - f1;
    }
    return 0;
}
