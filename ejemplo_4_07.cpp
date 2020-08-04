#include <iostream>

int main(void) {
    enum dia {DOM, LUN, MAR, MIE, JUE, VIE, SAB} diaX;

    diaX = DOM;
    std::cout << diaX << std::endl;  // 0

    diaX = LUN;
    std::cout << diaX << std::endl;  // 1

    diaX = MAR;
    std::cout << diaX << std::endl;  // 2

    return EXIT_SUCCESS;
}