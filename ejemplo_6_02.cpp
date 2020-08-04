#include <iostream>
#include <sstream>
#include <string>
#include <vector>
 
int main() {
    // Registro
    struct {
        std::string texto;
        int numero;
        float decimal;
    } registro;

    std::string buffer = "texto,12,3.14\n";
    char delimitador = ',';
    std::string token;  // Para depositar cortes
    std::istringstream string_stream(buffer);  // Cadena para manipulación
    std::vector<std::string> cadena_dividida;  // Vector para campos

    // Dividir cadena y coloca campos en vector
    while (std::getline(string_stream, token, delimitador))
        cadena_dividida.push_back(token);

    // Asignación y casteo
    registro.texto = cadena_dividida[0];
    registro.numero = std::stoi(cadena_dividida[1]);
    registro.decimal = std::stof(cadena_dividida[2]);

    // Libera memoria del vector
    cadena_dividida.erase(cadena_dividida.begin(), cadena_dividida.end());

    return EXIT_SUCCESS;
}