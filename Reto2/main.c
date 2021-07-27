#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Reto 1
    //Ingresar los valores necesarios para calcular el area de un cilindro
    //Realizar operacio
    //Imprimer el resultado del area

    //La fórmula general para el área total de superficie de un cilindro es T. S. A. = 2 π rh + 2 π r 2 .

    printf("Vamos a calcular el volumen de un cilindro \n");
    float r;
    float h;
    float v;
    printf("Ingrese el radio base del cilindro: ");
    scanf("%f", &r);
    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &h);
    float PI = 3.1415;
    float area = 2 * PI * r * h + 2 * PI * (r * r);
    v = PI * (r * r) * h;
    printf("El area base del cilindro es: %f \n", area);
    printf("El volumen del cilindro es: %f \n", v);
    return 0;
}
