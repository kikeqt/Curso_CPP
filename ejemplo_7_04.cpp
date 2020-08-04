#include <iostream>

class Clase_Base {
    public:
    virtual void saludo(){
        std::cout << "Saludos desde la clase Base" << std::endl;
    }
};

class Clase_Derivada : public Class Base {
    public:
    void saludo(){
        std::cout << "Saludos desde la clase Derivada" << std::endl;
    }
};

int main() {
    Clase_Base* objeto_prueba_base = new Clase_Base();
    Clase_Derivada* objeto_prueba_secundario = new Clase Derivada();

    objeto_prueba_base>saludo();
    objeto_prueba_secundario->saludo();

    delete objeto_prueba_secundario;
    delete objeto_prueba_base;

    return EXIT_SUCCESS;
}