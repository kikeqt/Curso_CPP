#include <iostream>

class Clase_Base {
    private:
    std::string variable_privada;

    protected:
    std::string variable_protegida;

    public:
    std::string variable_publica;

    void saludo(){
    std::cout << "Saludos desde la clase base" << std::endl;
}

Clase_Base() {
    std::cout << "Ejecutando el constructor de la clase base" << std::endl;

    // Iniciando valores
    this->variable_privada = "Variable privada";
    this->variable_protegida = "Variable protegida";
    this->variable_publica = "Variable publica";

    // Mostrando valores que son accesibles
    std::cout << "Puedo ver a:" << std::endl;
    std::cout << "\t" << this->variable_privada << std::endl;
    std::cout << "\t" << this->variable_protegida << std::endl;
    std::cout << "\t" << this->variable_publica << std::endl;

    std::cout << "Fin del constructor de la clase base" << std::endl;
    }

    ~Clase_Base() {
    std::cout << "Ejecutando el destructor de la clase base" << std::endl;
    }
};

class Clase_Derivada : public Clase_Base{
    public:

    void saludo(){
        Clase_Base::saludo();
        std::cout << "Saludos desde la clase derivada" << std::endl;
    }

    Clase_Derivada() {
        std::cout << "Ejecutando el constructor de la clase derivada" << std::endl;
        std::cout << "Puedo ver a:" << std::endl;
        // std::cout << "\t" << this->variable_privada << std::endl;
        std::cout << "\t" << this->variable_protegida << std::endl;
        std::cout << "\t" << this->variable_publica << std::endl;

        std::cout << "Si se hereda la clase base como privada, asi se puede ver a:" << std::endl;
        std::cout << "\t" << Clase_Base::variable_publica << std::endl;
        std::cout << "\t" << Clase_Base::variable_protegida << std::endl;
        // std::cout << "\t" << Clase_Base::variable_privada << std::endl;  // Está o se podrá acceder
    }

    ~Clase_Derivada(){
    std::cout << "Ejecutando el destructor de la clase derivada" << std::endl;
    }
};

int main() {
    Clase_Derivada* objeto_prueba = new Clase_Derivada();
    objeto_prueba->saludo();
    // std::cout << "Puedo ver a " << objeto_prueba->variable_privada << std::endl;
    // std::cout << "Puedo ver a " << objeto_prueba->variable_protegida << std::endl;
    std::cout << "Puedo ver a " << objeto_prueba->variable_publica << std::endl;
    delete objeto_prueba;

    return EXIT_SUCCESS;
}