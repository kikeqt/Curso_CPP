#include <iostream>
#define FILAS 5
#define COLUMNAS 2

int main(void) {
    int arreglo[COLUMNAS][FILAS] = {0,1,2,3,4,10,11,12,13,14};
    int (*apuntador_multi)[FILAS];
    int *apuntador;
    apuntador_multi = arreglo;
    apuntador = arreglo[0];

    for (int columna = 0; columna < COLUMNAS; columna++){
        for (int fila = 0; fila < FILAS; fila++){
            std::cout << "direccion: " << apuntador_multi + FILAS * columna + fila << std::endl;
            std::cout << "direccion: " << arreglo + FILAS * columna + fila << std::endl;
            std::cout << "direccion: " << apuntador + FILAS * columna + fila << std::endl;
            std::cout << "direccion: " << arreglo[0] + FILAS * columna + fila << std::endl;

            std::cout << "contenido: " << *(*(apuntador_multi + columna) + fila) << std::endl;
            std::cout << "contenido: " << *(apuntador + FILAS * columna + fila) << std::endl;
            std::cout << "contenido: " << *(*(arreglo + columna) + fila) << std::endl;
            std::cout << "arreglo:   " << apuntador_multi[columna][fila] << std::endl;
            std::cout << "arreglo:   " << arreglo[columna][fila] << std::endl;
            std::cout << std::endl;
        }
    }

    return EXIT_SUCCESS;
}