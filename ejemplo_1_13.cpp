#include <iostream>

int main() {
    int valor = 5;

    std::cout << valor;

    if (valor > 3) {
        std::cout << " es mayor a 3";
        
        if (8 > valor)
            std::cout << " y es menor a 8" << std::endl;
    }

    return EXIT_SUCCESS;
}