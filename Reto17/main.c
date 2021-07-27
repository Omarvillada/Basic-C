#include <stdio.h>
#include <stdlib.h>
/*
    Utilizando variables globales, ingresa el nombre de un alumno y su calificacion
    En una funcion evalua  si el alumno ha sido aprobado o no
    la calificacion minima aprobatoria es 7
    imprimir desde la funcion si el alumno aprobo
*/

char nameAlumno[30];
float calificacion;

void evaluarCalificacion(float calificacion)
{
    if(calificacion >= 7)
    {
        printf("El alumno %s Aprobo con una calificacion de %f", nameAlumno, calificacion);
    }else if(calificacion < 7)
    {
        printf("El alumno %s Reprobo con una calificacion de %f", nameAlumno, calificacion);
    }

}
int main()
{
    printf("Reto 17\n");
    printf("Ingrese nombre del alumno: ");
    gets(nameAlumno);
    printf("Ingrese la nota del alumno: ");
    scanf("%f", &calificacion);

    evaluarCalificacion(calificacion);
    return 0;
}
