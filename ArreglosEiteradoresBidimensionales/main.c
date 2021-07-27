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
    printf("Arreglos e iteradores Bidimensionales\n");

    int integrArray[4][5];
    int i,j;
    for(i = 0; i<4;i++)
    {
        for(j = 0; j<5; j++)
        {
            integrArray[i][j] = ((i + j)* 100 + j);
            printf("(%i, %i): %i \n", i, j, integrArray[i][j]);
        }
    }
    return 0;
}
