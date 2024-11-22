// funciones/funciones.c
#include "funciones.h"
#include <stdio.h>
#include <string.h>

void manejarUnion() {
    union Dato dato;

    dato.i = 10;
    printf("dato.i: %d\n", dato.i);

    dato.f = 220.5;
    printf("dato.f: %.2f\n", dato.f);

    strcpy(dato.str, "C programming");
    printf("dato.str: %s\n", dato.str);
}
