#include <iostream>

class Clase_Prueba {
    private:
    std::string variable_privada;

    protected:
    std::string variable_protegida;

    public:
    std::string variable_publica;

    Clase_Prueba();
    ~Clase_Prueba();
};

Clase_Prueba::Clase_Prueba() {
    std::cout << "Ejecutando el constructor" << std::endl;
}

Clase_Prueba::~Clase_Prueba() {
    std::cout << "Ejecutando el destructor" << std::endl;
}

int main() {
    Clase_Prueba* objeto_prueba_secundaria = new Clase_Prueba();
    delete objeto_prueba_secundaria;

    Clase_Prueba objeto_prueba;

    return EXIT_SUCCESS;
}