#include <iostream>
#include "circle.h"
#include <cmath>
using namespace std;

int main()
{

    circle A(0, 0, 0);
    circle B(0, 0, 0);
    circle C(0, 0, 0);

    float j1, j2, j3;

    cout << "x, y and Radius A\n";
    cin >> j1 >> j2 >> j3;
    A.set_circle(j1, j2, j3);

    cout << "x, y and Radius B\n";
    cin >> j1 >> j2 >> j3;
    B.set_circle(j1, j2, j3);

    cout << "x, y and Radius C\n";
    cin >> j1 >> j2 >> j3;
    C.set_circle(j1, j2, j3);

    cout << "\n";

    cout << "S krug A - " << A.square() << "\n";
    cout << "S krug B - " << B.square() << "\n";
    cout << "S krug C - " << C.square() << "\n";

    float R, X, Y;

    A.get_circle(R, X, Y);
    if (B.check_circle(R, X, Y)) cout << "krug A adn B pereserc\n";
    else cout << "krug A and B not pereserc\n";

    B.get_circle(R, X, Y);
    if (C.check_circle(R, X, Y)) cout << "krug B and C pereserc\n";
    else cout << "krug B and C not pereserc\n";

    C.get_circle(R, X, Y);
    if (A.check_circle(R, X, Y)) cout << "krug A and C pereserc\n";
    else cout << "krug A and C not pereserc\n";

    float a, b, c;

    cout << "enter tringle (a,b,c)\n";
    cin >> a >> b >> c;

    if (A.triangle_around(a, b, c)) cout << "krug A can vpis triangle\n";
    else cout << "krug A not can vpis triangle\n";

    if (B.triangle_around(a, b, c)) cout << "krug B can vpis triangle\n";
    else cout << "krug B not can vpis triangle\n";

    if (C.triangle_around(a, b, c)) cout << "krug C can vpis triangle\n";
    else cout << "krug C not can vpis triangle\n";

    if (A.triangle_in(a, b, c)) cout << "V krug A can vpis triangle\n";
    else cout << "В krug A not can vpis triangle\n";

    if (B.triangle_in(a, b, c)) cout << "V krug B can vpis triangle\n";
    else cout << "V krug B not vpis triangle\n";

    if (C.triangle_in(a, b, c)) cout << "V krug C can vpis triangle\n";
    else cout << "V krug C not vpis triangle\n";

    return 0;
}