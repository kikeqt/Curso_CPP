#include <iostream>
#include <math.h>

int main ()
{
    double param, result;
    param = 1024.0;
    result = sqrt (param);

    std:: cout << "sqrt(" << param << ") = " << result << std::endl;
    return EXIT_SUCCESS;
}