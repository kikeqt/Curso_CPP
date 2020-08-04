#include <iostream>

int main(void) {
    struct stPareja { 
        int A, B;
        int LeeA() { return A; } // Devuelve el valor de A
        int LeeB() { return B; } // Devuelve el valor de B
        void GuardaA(int n) { A = n; } // Asigna un nuevo valor a A
        void GuardaB(int n) { B = n; } // Asigna un nuevo valor a B
    } Par;

    Par.GuardaA(15); 
    Par.GuardaB(63); 

    std::cout << Par.LeeA() << std::endl;  // 15
    std::cout << Par.LeeB() << std::endl;  // 63

    return EXIT_SUCCESS;
}