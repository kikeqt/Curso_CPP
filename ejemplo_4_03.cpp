#include <iostream>

int main(void) {
  struct Date {
    unsigned short nWeekDay  : 3;    // 0..7   (3 bits)
    unsigned short nMonthDay : 6;    // 0..31  (6 bits)
    unsigned short nMonth    : 5;    // 0..12  (5 bits)
    unsigned short nYear     : 8;    // 0..100 (8 bits)
  } variable;

  std::cout << sizeof(variable) << " " << sizeof(variable) * 8 << std::endl;  // 4 (32 bits)

  return EXIT_SUCCESS;
}