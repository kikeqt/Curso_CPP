#include <iostream>

int main(void) {
    int variable = 1;
    int variable_secundaria = 10;

    // Define la variable apuntador, pero apunta a una dirección aleatoria
    int *apuntador;
    std::cout << "direccion: " << apuntador << std::endl;
    std::cout << "contenido: " << *apuntador << std::endl;

    // Cambia la dirección del apuntador, a la dirección de la variable
    apuntador = &variable;
    std::cout << "direccion: " << apuntador << std::endl;
    std::cout << "contenido: " << *apuntador << std::endl;

    // Cambia la dirección del apuntador, a la dirección de la variable
    // secundaria
    apuntador = &variable_secundaria;
    std::cout << "direccion: " << apuntador << std::endl;
    std::cout << "contenido: " << *apuntador << std::endl;

    // Cambia la dirección del apuntador, a una dirección nula
    apuntador = NULL;
    std::cout << "direccion: " << apuntador << std::endl;
    std::cout << "contenido: " << *apuntador << std::endl;

    return EXIT_SUCCESS;
}