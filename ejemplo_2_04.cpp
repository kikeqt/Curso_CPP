#include <iostream>
#define FILAS 10

int main() {
    int arreglo_no_inicializado [FILAS];
    int arreglo_inicializado [FILAS] = {0,1,2,3,4,5,6,7,8,9};

    for(unsigned int fila = 0; fila < FILAS; fila++) {
        arreglo_no_inicializado[fila] = fila * FILAS;
    }

    for(unsigned int fila = 0; fila < FILAS; fila++) {
        std::cout << (arreglo_no_inicializado[fila] + arreglo_inicializado[fila]) << " ";
    }

    return EXIT_SUCCESS;
}