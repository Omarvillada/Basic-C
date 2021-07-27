#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Usando for imprime la secuencia fibonacci hasta la novena vuelta
    */
    printf("Iteradores For \n");

    int upperLimi = 0;
    int bottomLim = 0;
    int i;

    printf("Imprimir en orden descendiente \n");

    printf("Ingresar Limite superior: \n");
    scanf("%i", &upperLimi);

    printf("Ingresar limite inferior: \n");
    scanf("%i", &bottomLim);

    for(i = upperLimi; i >= bottomLim; i--)
    {
        printf("Numero: %i \n", i);
    }
    return 0;
}
