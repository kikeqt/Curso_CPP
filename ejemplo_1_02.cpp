/* Declaración de importaciones*/
#include <iostream>

/* Declaración de constantes*/
//#define PI 3.14159  // Constante sin tipo
const double PI = 3.14159;  // Constante con tipo

/* Declaración de tipos*/
typedef struct {
    double x;
    double y;
    double z;
} Punto3D;

/* Declaración de funciones */
double calcula_area(double radio) {
    return PI * radio * radio;
}

/* Función principal */
int main() {
    double radio = 5;

    std::cout << "El area de un círculo de radio " << radio;
    std::cout << " es " << calcula_area(radio) << std::endl;

    Punto3D punto;
    punto.x = 1;
    punto.y = 2;
    punto.z = 2;

    std::cout << "El punto se definió en (" << punto.x << ",";
    std::cout << punto.y << "," << punto.z << ")\n";

    return EXIT_SUCCESS;
}