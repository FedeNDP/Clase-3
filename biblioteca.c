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



float validarFloat(char mensaje[],char mensajeError[],float maximo,float minimo)
{
    float buffer;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%f",&buffer);

    while(buffer > maximo || buffer < minimo)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%f",&buffer);
    }

    return buffer;
}


char validarChar(char mensaje[],char mensajeError[],char maximo,char minimo)
{
    char buffer;

    printf("%s",mensaje);
    fflush(stdin);
    scanf("%c",&buffer);

    while(buffer > maximo || buffer < minimo)
    {
        printf("%s",mensajeError);
        fflush(stdin);
        scanf("%c",&buffer);
    }

    return buffer;
}
