#include <stdio.h>
#include <stdlib.h>

int main()
{
        /*
        Primer reto: Crea un arreglo de 5 filas por 6 columnas donde:
        1.Los primeros 5 elementos de cada fila tengan calificaciones aprobatorias entre 6 y 10
        2.El sexto elemento de cada fila debe ser 0
        3.Calcula el promedio de los primeros 5 elementos de cada fila y asignalo al sexto elemento.
        4.Imprime el promedio de cada fila de calificaciones
    */
    printf("Reto 13\n");
    int i, j;
    float array[5][6] = {
        {6,7,8,10,6,0},
        {6.2,7.3,8.9,10,7.9,0},
        {8.9,9,7.1,9.8,10,0},
        {6,8.5,8.2,6.8,9,0},
        {6,7.8,8,10,7.2,0}};
        for(i = 0; i < 5; i++)
        {
            float promedio;
            for(j = 0; j < 5; j++)
            {
                printf("Calificacion [%i][%i]: %.2f\n", i,j, array[i][j]);
                promedio += array[i][j];
            }
            printf("\n");
            array[i][5] = promedio/5;
            printf("El promedio de la fila %i es %.2f\n\n", i, array[i][5]);
        }
    return 0;
}

