#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Haz un programa que reciba una cadena de caracteres e imprima de regreso la misma cadena invertida
    */
    printf("Reto 14\n");
    char string[10];
    int i;
    int length;
    printf("Ingresa una cadena de texto: \n");
    gets(string);
    length = strlen(string);

    for(i = length; i >= 0; i--)
    {
        printf("%c",string[i]);
    }
    return 0;
}
