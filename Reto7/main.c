#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1.Imprime la instruccion ingresa el primer numero
    2.Ingresa el numero en una variable.
    3.Repite para una segunda variable
    4.Si el primer numero es menor que el segundo, imprime el priimer numero.
    5.si no, imprime el segundo numero.
    */

    /*
    1.Hacer un programa que reciba la calificacion de un alumno
    2.Si el alumno saco menos de 60, imprimir que el alumno esta reprobado
    3.Si el alumno saco mas de 60, imprimir que el alumno esta aprobado.
    Extra: Si el alumno saco mas de 90, imprimir que esta aprobado y una carita feliz
    */
    int num1,num2;
    printf("Reto 7\n");

    printf("Ingresa el primer numero: \n");
    scanf("%i", &num1);
    printf("Ingresa el segundo numero: \n");
    scanf("%i", &num2);
    if(num1 < num2)
        printf("%i \n", num1);
    else
        printf("%i \n", num2);
    return 0;
}
