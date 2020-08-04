#include <iostream>

int main() {
    int x = 0;

    std::cout << "x++\t " << x++ << std::endl; // 0
    std::cout << "++x\t " << ++x << std::endl; // 2
    std::cout << "x--\t " << x-- << std::endl; // 2
    std::cout << "--x\t " << --x << std::endl; // 0

    x = 1;
    std::cout << "x=1\t " << x << std::endl; // 1
    x *= 15;
    std::cout << "x *= 15\t " << x << std::endl; // 15
    x /= 5;
    std::cout << "x /= 5\t " << x << std::endl; // 3
    x %= 2;
    std::cout << "x % 2\t " << x << std::endl; // 1
    x += 5;
    std::cout << "x += 5\t " << x << std::endl; // 6
    x -= 5;
    std::cout << "x -= 5\t " << x << std::endl; // 1
    x <<= 2;
    std::cout << "x <<= 2\t " << x << std::endl; // 4
    x >>= 2;
    std::cout << "x >>= 2\t " << x << std::endl; // 1
    x |= 0;
    std::cout << "x |= 0\t " << x << std::endl; // 1
    x ^= 1;
    std::cout << "x ^= 1\t " << x << std::endl; // 0

    return EXIT_SUCCESS;
}