#include <iostream>
#define FILAS 5
#define COLUMNAS 2

int main() {
    int arreglo_no_inicializado [COLUMNAS][FILAS];
    int arreglo_inicializado [COLUMNAS][FILAS] = {0,1,2,3,4,5,6,7,8,9};

    for(unsigned int columna = 0; columna < COLUMNAS; columna++) {
        for(unsigned int fila = 0; fila < FILAS; fila++) {
            arreglo_no_inicializado[columna][fila] = columna * 100 + fila + 10;
        }
    }

    for(unsigned int columna = 0; columna < COLUMNAS; columna++) {
        for(unsigned int fila = 0; fila < FILAS; fila++) {
            std::cout << (arreglo_no_inicializado[columna][fila] + arreglo_inicializado[columna][fila]) << " ";
        }
    }

    return EXIT_SUCCESS;
}