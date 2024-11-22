// main.c
#include "main.h"

int main() {
    // Crear e instanciar un estudiante
    Estudiante estudiante1;
    strcpy(estudiante1.nombre, "Juan");
    estudiante1.edad = 20;
    estudiante1.promedio = 9.5;

    // Instanciación usando malloc
    Estudiante *estudiante2 = (Estudiante *) malloc(sizeof(Estudiante));
    strcpy(estudiante2->nombre, "Ana");
    estudiante2->edad = 22;
    estudiante2->promedio = 9.8;

    // Punteros y estructuras
    Estudiante *punteroEst = &estudiante1;
    printf("Nombre: %s, Edad: %d, Promedio: %.2f\n", punteroEst->nombre, punteroEst->edad, punteroEst->promedio);

    // Copia de estructura
    Estudiante estudianteCopia = copiarEstudiante(estudiante1);
    printf("Copia - Nombre: %s, Edad: %d, Promedio: %.2f\n", estudianteCopia.nombre, estudianteCopia.edad, estudianteCopia.promedio);

    // Usar typedef para el alias
    Estudiante estudiante3;
    strcpy(estudiante3.nombre, "Pedro");
    estudiante3.edad = 25;
    estudiante3.promedio = 9.7;

    // Pasar estructuras por valor, referencia y dirección
    printf("\nEstructura pasada por valor:\n");
    imprimirEstudiante(estudiante1);

    printf("\nEstructura pasada por referencia:\n");
    modificarEstudiante(&estudiante1);
    imprimirEstudiante(estudiante1);

    printf("\nEstructura pasada por direccion:\n");
    imprimirEstudiante2(&estudiante1);

    // Ejemplo de la unión
    printf("\nEjemplo de union:\n");
    manejarUnion();

    // Liberar memoria dinámica
    free(estudiante2);

    return 0;
}
