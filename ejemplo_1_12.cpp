#include <iostream>

int main() {
    switch (8) {
        case 1:
            std::cout << "Veo el 1" << std::endl;
            break;

        case 8:
            std::cout << "Veo el 8" << std::endl;
            break;

        default:
            std::cout << "Opcion desconocida" << std::endl;
            break;
    }

    return EXIT_SUCCESS;
}