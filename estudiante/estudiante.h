#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

// Definimos la estructura Estudiante
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Usamos typedef para crear un alias para la estructura Estudiante
typedef struct Estudiante Estudiante;

// Función para copiar un estudiante
Estudiante copiarEstudiante(Estudiante est);

#endif // ESTUDIANTE_H
