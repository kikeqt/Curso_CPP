#include <iostream>

void funcion_1() {
    std::cout << "Función 1\n";
}

void funcion_2() {
    std::cout << "Función 2\n";
}
 
int main() {
    // Declaración del apuntador
    void (*apuntador)();

    // Asignación y uso del apuntador
    apuntador= &funcion_1;
    apuntador();

    // Reasignación y uso del apuntador
    apuntador= &funcion_2;
    apuntador();

    return EXIT_SUCCESS;
}