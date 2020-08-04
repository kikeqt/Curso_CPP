#include <iostream>

int main() {
    double a = 2;
    float b = 3;
    int c = 4;

    double d = a + b * c;

    std::cout << d << std::endl;  // 0

    return EXIT_SUCCESS;
}