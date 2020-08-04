#include <iostream>

int main(void) {
    struct tipo_estructura_con_declaracion {
        int variable_1;
        int variable_2;
    } variable_declarada_en_estructura;  // Definición con declaración

    struct tipo_estructura_sin_declaracion {
        int variable_1;
        int variable_2;
    };  // Definición sin declaración

    struct {
        int variable_1;
        int variable_2;
    } variable_estructura_anonima;

    tipo_estructura_con_declaracion variable_tipo_estructura_declarada_despues;

    variable_estructura_anonima = {1,2};  // Asignación simplificada
    variable_estructura_anonima.variable_1 = 3;  // Asignación individual
    variable_estructura_anonima.variable_2 = 4;  // Asignación individual

    std::cout << "(" << variable_estructura_anonima.variable_1;
    std::cout << "," << variable_estructura_anonima.variable_2 << ")\n";

    return EXIT_SUCCESS;
}