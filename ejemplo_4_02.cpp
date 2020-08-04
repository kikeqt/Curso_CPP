#include <iostream>

int main(void) {
    std::cout << "char -> " << sizeof(char) << std::endl;  // 1
    std::cout << "unsigned short -> " << sizeof(unsigned short) << std::endl;  // 2
    std::cout << "unsigned -> " << sizeof(unsigned) << std::endl;  // 4
    std::cout << "int -> " << sizeof(int) << std::endl;  // 4
    std::cout << "double -> " << sizeof(double) << std::endl;  // 8
    std::cout << "long double -> " << sizeof(long double) << std::endl;  // ?

    return EXIT_SUCCESS;
}