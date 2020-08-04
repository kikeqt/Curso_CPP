#include <iostream>
#define FILAS 5
#define COLUMNAS 2

int main() {
    int **arreglo_no_inicializado;
    // Asignación de memoria
    arreglo_no_inicializado = (int **) malloc(COLUMNAS * sizeof(int *));

    for(unsigned int columna = 0; columna < COLUMNAS; columna++) {
        arreglo_no_inicializado[columna] = (int *) malloc(FILAS * sizeof(int *));

        for(unsigned int fila = 0; fila < FILAS; fila++) {
            arreglo_no_inicializado[columna][fila] = columna * 10 + fila;
        }
    }

    for(unsigned int columna = 0; columna < COLUMNAS; columna++) {
        for(unsigned int fila = 0; fila < FILAS; fila++) {
            std::cout << arreglo_no_inicializado[columna][fila] << " ";
        }
    }

    // Liberación de memoria
    for(unsigned int columna = 0; columna < COLUMNAS; columna++) {
        free(arreglo_no_inicializado[columna]);
    }

    free(arreglo_no_inicializado);

    return EXIT_SUCCESS;
}