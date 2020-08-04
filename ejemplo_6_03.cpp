#include <iostream>
#include <fstream>
#include <cstring>

struct registro {
   char texto[32];
   int numero;
   float decimal;
} escribo_registro, leo_registro;

int main() {
    std::ofstream archivo_escritura(
        "prueba.dat", std::ios::binary
    );

    strcpy(escribo_registro.texto, "Este es el texto que vamos a escribir");
    escribo_registro.numero = 1;
    escribo_registro.decimal = 2.718281828;

    archivo_escritura.write(
        reinterpret_cast<char *>(&escribo_registro), 
        sizeof(registro)
    );
    archivo_escritura.close();

    std::ifstream archivo_lectura(
        "prueba.dat", std::ios::binary);

        archivo_lectura.read(
        reinterpret_cast<char *>(&leo_registro), 
        sizeof(registro)
    );
    archivo_lectura.close();


    std::cout << leo_registro.texto << std::endl;
    std::cout << leo_registro.numero << std::endl;
    std::cout << leo_registro.decimal << std::endl;

    return EXIT_SUCCESS;
}