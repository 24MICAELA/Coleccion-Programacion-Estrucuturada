#ifndef UNIONES_H
#define UNIONES_H

// Definimos la unión Dato
union Dato {
    int i;
    float f;
    char str[20];
};

// Función para manejar las uniones
void manejarUniones();

#endif // UNIONES_H
