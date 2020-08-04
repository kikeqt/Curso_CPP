#include <iostream>

class Clase_Base {
    public:
    virtual void saludo() = 0;  // Función virtual pura
};

class Clase_Derivada : public Clase_Base{
    public:
    void saludo(){
        std::cout << "Saludos desde la clase Derivada" << std::endl;
    }
};

int main() {
    /* Una función virtual pura no se puede instanciar,
    porque ahora es una clase Abstracta */
    // Clase_Base* objeto_prueba_base = new Clase_Base();
    // objeto_prueba->saludo();
    // delete objeto_prueba_base;

    Clase_Derivada* objeto_prueba_secundario = new Clase_Derivada();
    objeto_prueba_secundario->saludo();
    delete objeto_prueba_secundario;

    return EXIT_SUCCESS;
}