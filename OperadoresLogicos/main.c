#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valA,valB,valC;
    valA = 5;
    valB = valC = 10;
    printf("Hello world!\n");

    if((valA <  valB) && (valB == valC ))
        printf("Se cumplieron las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones");

        if((valA > valB) || (valA <= valC))
        printf("Se cumplieron por lo menos una de las dos condiciones \n");
    else
        printf("No se cumplieron las dos condiciones");
    return 0;
}
