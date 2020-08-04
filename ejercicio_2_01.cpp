#include <iostream>

int main() {
    int arreglo_no_inicializado [2][5];

    for(unsigned int posicion_x = 0; posicion_x < 4; posicion_x++) {
        for(unsigned int posicion_y = 0; posicion_y < 10; posicion_y++) {
            arreglo_no_inicializado[posicion_x][posicion_y] = posicion_x * 100 + posicion_y + 10;
        }
    }

    for(unsigned int posicion_x = 0; posicion_x < 4; posicion_x++) {
        for(unsigned int posicion_y = 0; posicion_y < 10; posicion_y++) {
            std::cout << (arreglo_no_inicializado[posicion_x][posicion_y] + arreglo_inicializado[posicion_x][posicion_y]) << " ";
        }
    }

    return EXIT_SUCCESS;
}