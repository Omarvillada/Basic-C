#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*
    1.Hacer un programa que reciba la calificacion de un alumno
    2.Si el alumno saco menos de 60, imprimir que el alumno esta reprobado
    3.Si el alumno saco mas de 60, imprimir que el alumno esta aprobado.
    Extra: Si el alumno saco mas de 90, imprimir que esta aprobado y una carita feliz
    */
    printf("Reto8 \n");
    float calificacion;
    printf("Ingrese calificacion del alumno: \n");
    scanf("%f", &calificacion);
    if(calificacion < 60)
        printf("Esta reprobado");
    else if(calificacion > 60 && calificacion <=90)
        printf("Esta aprobado");
    else if(calificacion > 90)
        printf("Esta aprobado :)");
    return 0;
}
