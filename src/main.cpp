#include <iostream>
#include "../include/banking_core.h"

int main() {

    double first = calculate(5.0, 2.0);
    double second = calculate(10.0, 3.0);

    std::cout << first << std::endl;
    std::cout << second << std::endl;

    return 0;
}
