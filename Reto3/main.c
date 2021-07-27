#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit;
    float celcius;
    printf("Introduce la temperatura en grados Fahrenheit: ");
    scanf("%f", &fahrenheit);
    //operacion
    celcius = (fahrenheit - 32) / 1.8000;
    printf("La temperatura en grados celcius es: %f", celcius);
    return 0;
}
