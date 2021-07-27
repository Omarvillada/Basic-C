#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        1.Crea un arreglo de 3 filas por 4 donde:
        -los elementos de la primera fila sumen un total de 4
        -los elementos de la segunda fila sumen un total de 10
        -los elementos de  la tercera fila sumen un total de 26
        -imprime las sumatorias de cada fila
    */
    int array[3][4] = {{1,1,2,0}, {3,2,5,0}, {10,5,5,6}};
    int i, j;
    for(i = 0; i < 3; i++)
    {
        int suma = 0;
        for(j = 0; j < 4;j++)
        {
            suma += array[i][j];
        }
        printf("Suma fila %i: %i \n",i,suma);
    }
    printf("Hello world!\n");
    return 0;
}
