#include <iostream>

void funcion(int parametro) {
    for (int contador = 0; contador < 5; contador++)
        std::cout << "El valor de la variable en la funcion es: " << ++parametro << std::endl;
}

int main(void) {
    int variable = 1;
    std::cout << "El valor de la variable es: " << variable << std::endl;

    funcion(variable);  // Argumento

    std::cout << "El valor de la variable es: " << variable << std::endl;

    return EXIT_SUCCESS;
}