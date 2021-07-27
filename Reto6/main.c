#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Definir una variable cuyo valor es 5
    En otra variable ingresar un numero con la instruccion, entre el uno y el 10
    Si el número ingresado es igual a la variable definida(5).Imprimir adivinaste.Si no imprimir Ese no es, perdiste!
    */
    printf("Reto 6\n");
    int x = 5;
    int num;
    printf("Ingresa un numero entre el 1 y el 10 \n");
    scanf("%i", &num);
    if(num == x)
        printf("Adivinaste!!");
    else
        printf("Esa no es, perdiste!!");
    return 0;
}
