cmake_minimum_required(VERSION 3.29)
project(Coleccion_Programacion_Estrucuturada C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(estudiante)
include_directories(funciones)
include_directories(uniones)

add_executable(Coleccion_Programacion_Estrucuturada
    estudiante/estudiante.c
    estudiante/estudiante.h
    funciones/funciones.c
    funciones/funciones.h
    uniones/uniones.c
    uniones/uniones.h
    main.c
    main.h)
