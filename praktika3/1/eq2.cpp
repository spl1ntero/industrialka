#include "eq2.h"
#include <cmath>
#include <iostream>
eq2::eq2(double a1, double b1, double c1) {
    set(a1, b1, c1);
}

void eq2::set(double a1, double b1, double c1) {
    a = a1;
    b = b1;
    c = c1;
    D = b * b - 4 * a * c;
}

double eq2::find_X() {
    if (D < 0) {
        std::cout << "net korney" << std::endl;
        return 0;
    }
    else {
        return (-b + std::sqrt(D)) / (2 * a);
    }
}

double eq2::find_Y(double x1) {
    return a * x1 * x1 + b * x1 + c;
}

eq2 eq2::operator+(const eq2& other) const {
    double new_a = a + other.a;
    double new_b = b + other.b;
    double new_c = c + other.c;
    return eq2(new_a, new_b, new_c);
}
