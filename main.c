#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"


int main()
{

    char resultado;

    resultado = validarChar("Ingrese letra:","Error reingrese: " ,'s','a');

    printf("la letra es %c ",resultado);

    return 0;
}
