#include <iostream>

float calcula_perimetro_circulo (float);

int main () {
    std::cout << "Perimetro del circulo de radio 3: " << calcula_perimetro_circulo(3) << std::endl;

    return EXIT_SUCCESS;
}

float calcula_perimetro_circulo (float radio) {
    return 3.14159 * radio * radio;
}