#include <iostream>

void funcion(int argumento, int argumento_por_defecto = 0) {
    std::cout << "argumento: " << argumento << std::endl;
    std::cout << "argumento por defecto: " << argumento_por_defecto << std::endl;
}

int main(void) {
    funcion(1);
    funcion(1,2);

    return EXIT_SUCCESS;
}