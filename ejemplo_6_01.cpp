#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string linea;

    // Escribiendo en archivo
    std::ofstream archivo_escritura("archivo_de_texto.txt");
    archivo_escritura << "Esto fue escrito en el archivo_escritura" << std::endl;
    archivo_escritura << "pero esto pertenece a otra linea" << std::endl;
    archivo_escritura << "y esta es la ultima linea" << std::endl;
    archivo_escritura.close();

    // Archivo de lectura
    std::ifstream archivo_lectura("archivo_de_texto.txt");

    if (archivo_lectura.is_open()) {
    // Va al final del archivo, obtiene la posicion y regresa al inicio
    archivo_lectura.seekg(0, std::ios::end);
    std::cout << "Tamano archivo: " << archivo_lectura.tellg() << std::endl;
    archivo_lectura.seekg(0, std::ios::beg);

    // Leyendo el archivo
    while (std::getline(archivo_lectura, linea))
        std::cout << linea << std::endl;

        archivo_lectura.close();
    }

    return EXIT_SUCCESS;
}