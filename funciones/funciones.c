#include <stdio.h>
#include "funciones.h"

// Función para imprimir un estudiante
void imprimirEstudiante(Estudiante est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est.nombre, est.edad, est.promedio);
}

// Función para modificar un estudiante
void modificarEstudiante(Estudiante *est) {
    est->edad = 30;
}

// Función para imprimir un estudiante por dirección
void imprimirEstudiantePorDireccion(Estudiante *est) {
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", est->nombre, est->edad, est->promedio);
}
