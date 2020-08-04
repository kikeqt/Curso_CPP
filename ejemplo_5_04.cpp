#include <iostream>
#define FILAS 10

int main() {
    int *arreglo_no_inicializado;
    // Asignación de memoria
    arreglo_no_inicializado = (int *) malloc(FILAS * sizeof(int *));

    for(unsigned int fila = 0; fila < FILAS; fila++) {
        arreglo_no_inicializado[fila] = fila * 10;
    }

    for(unsigned int fila = 0; fila < FILAS; fila++) {
        std::cout << arreglo_no_inicializado[fila] << " ";
    }

    // Liberación de memoria
    free(arreglo_no_inicializado);

    return EXIT_SUCCESS;
}