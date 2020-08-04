#include <iostream>

int main ()
{
    bool expresion = false;

    if (expresion) {
        std::cout << "Aquí entré porque la expresión se cumple" << std::endl;
    } else {
        std::cout << "Aquí entré porque la expresión NO se cumple" << std::endl;
    }

return EXIT_SUCCESS;
}