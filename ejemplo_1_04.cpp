#include <iostream>

int main() {
    int a = 3, b = 4;

    std::cout << "Entre " << a << " y " << b << " el mayor es ";
    std::cout << ((a > b) ? a : b) << std::endl;

    std::cout << "Entre " << b << " y " << a << " el mayor es ";
    std::cout << ((b > a) ? b : a) << std::endl;

    return EXIT_SUCCESS;
}