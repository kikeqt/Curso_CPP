#include <iostream>

int factorial(int n){
    if (n == 1)
        return 1;

    else
        return n * factorial(n-1);
}

int main(void) {
    std::cout << "5! = " << factorial(5) << std::endl;

    return EXIT_SUCCESS;
}