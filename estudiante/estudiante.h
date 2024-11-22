// estudiante/estudiante.h
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Definir alias para la estructura Estudiante
typedef struct Estudiante Estudiante;

// Funciones para trabajar con estudiantes
void imprimirEstudiante(Estudiante est);
void modificarEstudiante(Estudiante *est);
void imprimirEstudiante2(Estudiante *est);
Estudiante copiarEstudiante(Estudiante est);

#endif
