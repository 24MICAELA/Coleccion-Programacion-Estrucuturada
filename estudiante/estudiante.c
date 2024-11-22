// estudiante/estudiante.c
#include "estudiante.h"

// Función para imprimir los datos de un estudiante (pasada por valor)
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Función para modificar un estudiante (pasado por referencia)
void modificarEstudiante(Estudiante *est) {
    est->edad = 30; // Modifica la edad del estudiante
}

// Función para imprimir los datos de un estudiante (pasado por dirección)
void imprimirEstudiante2(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}

// Función para copiar un estudiante
Estudiante copiarEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}
