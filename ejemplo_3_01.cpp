#include <iostream>

int main(void) {
    #ifdef __STDC__
        std::cout << "Basado en __STDC__, la version es: " << __STDC__ << std::endl;
    #endif

    #ifdef __STDC_VERSION__
        std::cout << "Basado en __STDC_VERSION__, la version es: " << __STDC_VERSION__ << std::endl;
    #endif

    #ifdef __cplusplus
        std::cout << "Basado en __cplusplus, la version es: " << __cplusplus << std::endl;
    #endif

    #ifdef __cplusplus_cli
        std::cout << "Basado en __cplusplus_cli, la version es: " << __cplusplus_cli << std::endl;
    #endif
}