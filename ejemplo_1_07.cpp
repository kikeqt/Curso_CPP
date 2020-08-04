#include <iostream>

int main() {
    std::cout << (10 && 0) << std::endl; // 0
    std::cout << (10 || 0) << std::endl; // 1
    std::cout << !10 << std::endl; // 0

    return EXIT_SUCCESS;
}