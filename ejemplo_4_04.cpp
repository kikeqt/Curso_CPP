#include <iostream>

int main(void) {
    struct Date {
        unsigned nWeekDay  : 3;    // 0..7   (3 bits)
        unsigned nMonthDay : 6;    // 0..31  (6 bits)
        unsigned           : 0;    // Force alignment to next boundary.
        unsigned nMonth    : 5;    // 0..12  (5 bits)
        unsigned nYear     : 8;    // 0..100 (8 bits)
    } variable;

    std::cout << sizeof(variable) << " " << sizeof(variable) * 8 << std::endl;  // 8 (64 bits)

    return EXIT_SUCCESS;
}