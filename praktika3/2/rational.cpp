#include "rational.h"
#include <iostream>

using namespace std;


rational::rational(int a1, int b1) {

    if (b1 == 0) {
        cout << "Error: denominator cannot be zero." << endl;
        a = 0;
        b = 1;
        return;
    }

    int gcd = 1;
    for (int i = 1; i <= min(abs(a1), abs(b1)); i++) {
        if (a1 % i == 0 && b1 % i == 0) {
            gcd = i;
        }
    }
    a = a1 / gcd;
    b = b1 / gcd;

    if (a % b == 0) {
        a = a / b;
        b = 1;
    }
}


void rational::set(int a1, int b1) {

    if (b1 == 0) {
        cout << "Error: denominator cannot be zero." << endl;
        return;
    }

    int gcd = 1;
    for (int i = 1; i <= min(abs(a1), abs(b1)); i++) {
        if (a1 % i == 0 && b1 % i == 0) {
            gcd = i;
        }
    }
    a = a1 / gcd;
    b = b1 / gcd;

    if (a % b == 0) {
        a = a / b;
        b = 1;
    }
}

void rational::show() const {
    cout << a << "/" << b << endl;
}