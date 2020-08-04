#include <iostream>

int variable = 0;

void funcion_no_relacionada(void) {
    std::cout << "El valor de la variable es: " << variable << std::endl;
}

int main(void) {
    int variable = 1;

    if (true) {
        int variable = 2;
        std::cout << "El valor de la variable es: " << variable << std::endl;
    }

    std::cout << "El valor de la variable es: " << variable << std::endl;

    funcion_no_relacionada();
    
    return EXIT_SUCCESS;
}