// funciones/funciones.h
#ifndef FUNCIONES_H
#define FUNCIONES_H

// Definición de la unión Dato
union Dato {
    int i;
    float f;
    char str[20];
};

// Funciones para manejar la unión
void manejarUnion();

#endif
