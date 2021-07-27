#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    printf("Ingresa el valor de x: \n");
    scanf("%i", &x);
    printf("Ingresa el valor de y: \n");
    scanf("%i", &y);
    z = x;
    x = y;
    y = z;
    printf("El valor de x es: %i \n", x);
    printf("El valor de y es: %i \n", y);
    return 0;
}
