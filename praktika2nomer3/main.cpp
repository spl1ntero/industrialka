#include <iostream>
#include "figura.h"

using namespace std;

int main()
{

    figure A;
    figure B;
    figure C;

    float X1, X2, X3, X4, Y1, Y2, Y3, Y4;

    cout << "A ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    A.define(X1,X2,X3,X4,Y1,Y2,Y3,Y4);

    cout << " B ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    B.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

    cout << " C ([x1,y1],[x2,y2],[x3,y3],[x4,y4])\n";
    cin >> X1 >> Y1 >> X2 >> Y2 >> X3 >> Y3 >> X4 >> Y4;
    C.define(X1, X2, X3, X4, Y1, Y2, Y3, Y4);

    cout << " A: "; A.show();
    cout << "B: "; B.show();
    cout << " C: "; C.show();

    cout << "\n";

    if (A.is_prug()) cout << " A \n";
    if (B.is_prug()) cout << " B \n";
    if (C.is_prug()) cout << " C \n";

    cout << "\n";

    if (A.is_square()) cout << " A \n";
    if (B.is_square()) cout << "B \n";
    if (C.is_square()) cout << " C \n";

    cout << "\n";

    if (A.is_romb()) cout << " A \n";
    if (B.is_romb()) cout << " B \n";
    if (C.is_romb()) cout << " C \n";

    cout << "\n";

    if (A.is_in_circle()) cout << "A\n";
    if (B.is_in_circle()) cout << "B\n";
    if (C.is_in_circle()) cout << "C\n";

    cout << "\n";

    if (A.is_out_circle()) cout << "A\n";
    if (B.is_out_circle()) cout << "B\n";
    if (C.is_out_circle()) cout << "C\n";
}