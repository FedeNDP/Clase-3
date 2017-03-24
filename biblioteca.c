#include <stdio.h>
#include <stdlib.h>


int validarInt(char mensaje[],char mensajeError[],int maximo,int minimo)
{
    int buffer;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%d",&buffer);

    while(buffer > maximo || buffer < minimo)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%d",&buffer);
    }

    return buffer;
}
