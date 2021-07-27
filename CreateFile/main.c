#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Archivos! crear un archivo\n");
    FILE *archivo;
    archivo = fopen("prueba1.dat", "w");
    if(archivo != NULL)
    {
        printf("El archivo se ha creado exitosamente. Comprueba en la carpeta");

    }else
    {
        printf("El archivo no se ha creado");
    }
    return 0;
}
