#include "eq2.h"
#include <iostream>

int main() {
    eq2 eq1(1, 2, 1);
    eq2 eq2(1, 1, 1);
    auto eq3 = eq1 + eq2;
    std::cout << "eq1 X: " << eq1.find_X() << std::endl;
    std::cout << "eq2 Y: " << eq2.find_Y(2) << std::endl;
    std::cout << "eq3: " << eq3.find_X() << ", " << eq3.find_Y(2) << std::endl;
    return 0;
}



