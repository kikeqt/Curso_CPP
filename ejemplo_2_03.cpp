#include <iostream>

int main() {
    int contador = 0;

    while (contador < 10) {
        std::cout << contador++ << " ";
    }

    return EXIT_SUCCESS;
}