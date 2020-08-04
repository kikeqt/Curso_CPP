#include <iostream>

class Clase_Base {
    protected:
    std::string variable_protegida;

    public:
    Clase_Base() {
        this->variable_protegida = "Variable protegida de clase base";
    }
};

class Clase_Base_Extra {
    protected:
    std::string variable_protegida_extra;

    public:
    Clase_Base_Extra() {
        this->variable_protegida_extra = "Variable protegida de clase base extra";
    }
};

class Clase_Derivada : public Clase_Base, public Clase_Base_Extra{
    public:

    Clase_Derivada() {
        std::cout << "Ejecutando el constructor de la clase derivada" << std::endl;
        std::cout << "A quien veo es a:" << std::endl;
        std::cout << "\t" << this->variable_protegida << std::endl;
        std::cout << "\t" << this->variable_protegida_extra << std::endl;
    }
};

int main() {
    Clase_Derivada* objeto_prueba = new Clase_Derivada();
    delete objeto_prueba;

    return EXIT_SUCCESS;
}