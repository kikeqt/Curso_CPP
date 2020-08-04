#include <iostream>

void saluda(int parametro) {
    std::cout << "Saludo con al numero " << parametro << std::endl;
}

void saluda(std::string parametro) {
    std::cout << "Saludo al texto " << parametro << std::endl;
}

void saluda(void) {
    std::cout << "Saludo a nadie en particular" << std::endl;
}

int main(void) {
    saluda(1);
    saluda("olvidado");
    saluda();

    return EXIT_SUCCESS;
}