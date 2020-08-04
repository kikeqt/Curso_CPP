#include <iostream>

int main(void) {
    union union_de_ejemplo {
        int A;
        char B;
        double C;
    } variable_union;

    variable_union.A = 1024;
    std::cout << variable_union.A << std::endl;

    variable_union.B = '@';
    std::cout << variable_union.B << std::endl;

    variable_union.C = 3.14159;
    std::cout << variable_union.C << std::endl;

    return EXIT_SUCCESS;
}