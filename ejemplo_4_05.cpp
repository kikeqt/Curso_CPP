#include <iostream>

int main(void) {
    struct Punto { 
        int x, y;
        Punto() {x = 0; y = 0;} // Constructor
    } Punto1, Punto2;

    std::cout << Punto1.x << "," << Punto1.y << std::endl;  // 0,0

    return EXIT_SUCCESS;
}