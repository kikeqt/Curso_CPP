#include <iostream>

int main(void) {
    enum escapes { BELL = '\a', RETROCESO = '\b', TAB = '\t', VTAB = '\v'} eChars;

    eChars = BELL;
    std::cout << eChars << ";" << std::endl;

    eChars = TAB;
    std::cout << eChars << ";" << std::endl;

    return EXIT_SUCCESS;
}