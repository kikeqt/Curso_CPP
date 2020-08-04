#include <iostream>

int main() {
    std::cout << (10 < 3) << std::endl; // 0
    std::cout << (10 > 3) << std::endl; // 1
    std::cout << (10 <= 3) << std::endl; // 0
    std::cout << (10 >= 3) << std::endl; // 1
    std::cout << (10 == 3) << std::endl; // 0
    std::cout << (10 != 3) << std::endl; // 1

    return EXIT_SUCCESS;
}