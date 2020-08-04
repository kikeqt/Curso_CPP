#include <iostream>

int main(void) {
    int arreglo[10] = {0,10,20,30,40,50,60,70,80,90};

    int *apuntador;

    apuntador = arreglo;
    
    for (unsigned int salto = 0; salto < 10; salto++){
        std::cout << "direccion: " << apuntador + salto << std::endl;
        std::cout << "direccion: " << arreglo + salto << std::endl;

        std::cout << "contenido: " << *(apuntador + salto) << std::endl;
        std::cout << "contenido: " << *(arreglo + salto) << std::endl;
        std::cout << "arreglo:   " << apuntador[salto] << std::endl;
        std::cout << "arreglo:   " << arreglo[salto] << std::endl;
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}