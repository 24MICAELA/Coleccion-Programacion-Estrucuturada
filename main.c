#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

// Función para manejar estudiantes (parte del ejercicio)
void manejarEstudiantes() {
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    printf("Estructura - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante1.nombre, estudiante1.edad, estudiante1.promedio);

    Estudiante *estudiante2 = (Estudiante *) malloc(sizeof(Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    printf("Malloc - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudiante2->nombre, estudiante2->edad, estudiante2->promedio);
    free(estudiante2);

    Estudiante copia = copiarEstudiante(estudiante1);
    printf("Copia - Nombre: %s, Edad: %d, Promedio: %.2f\n", copia.nombre, copia.edad, copia.promedio);

    imprimirEstudiante(estudiante1);
    modificarEstudiante(&estudiante1);
    imprimirEstudiantePorDireccion(&estudiante1);
}

// Función para manejar uniones (parte del ejercicio)
// Solo debes llamar a esta función desde main.c
void manejarUniones(); // Declaración

int main() {
    manejarEstudiantes();
    manejarUniones();  // Llamada a manejarUniones desde main
    return 0;
}
