#include <iostream>

int main(void) {
    enum months { ENE = 1, FEB, MAR, ABR, MAY, JUN,
        JUL, AGO, SEP, OCT, NOV, DIC} monthsX;

    monthsX = FEB;
    std::cout << monthsX << std::endl;

    monthsX = DIC;
    std::cout << monthsX << std::endl;

    return EXIT_SUCCESS;
}