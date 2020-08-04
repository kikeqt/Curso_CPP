#include <iostream>

int main() {
    int contador = 0;

    do {
        std::cout << contador++ << " ";
    } while (contador < 10);

    return EXIT_SUCCESS;
}