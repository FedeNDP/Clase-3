#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{

    int resultado;

    char nombre[] = "";

    resultado = validarInt("Ingrese edad:","Error reingrese: " ,100,0);

    printf("la edad es %d ",resultado);

    return 0;
}
