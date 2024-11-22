#include <stdio.h>
#include <string.h>
#include "estudiante.h"

// Función para copiar un estudiante
Estudiante copiarEstudiante(Estudiante est) {
    Estudiante nuevoEst;
    strcpy(nuevoEst.nombre, est.nombre);
    nuevoEst.edad = est.edad;
    nuevoEst.promedio = est.promedio;
    return nuevoEst;
}
