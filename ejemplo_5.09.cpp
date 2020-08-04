#include <iostream>

int funcion_1(int parametro) {
    std::cout << "Funcion 1 " << parametro << std::endl;
    return parametro * 10;
}

int funcion_2(int parametro) {
    std::cout << "Funcion 2 " << parametro << std::endl;
    return parametro * 10;
}
 
int main() {
    // Declaración del apuntador
    int (*apuntador)(int);

    // Asignación y uso del apuntador
    apuntador= &funcion_1;
    std::cout << apuntador(10) << std::endl;

    // Reasignación y uso del apuntador
    apuntador= &funcion_2;
    std::cout << apuntador(20) << std::endl;

    return EXIT_SUCCESS;
}