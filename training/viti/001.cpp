#include <iostream>
//treba pidklychuty modul math.h shchob prozuvalu sin, cos i stepeni
#include <math.h>

using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    //pow -- ze stepin
    double z1 = pow(sin(x), 2) + pow(cos(y), 4) + (1 / 4) * pow(sin(2 * x), 2) - 1;

    cout << "Z1 = " << z1 << endl;
    // robumo perevirku
    if (x != 0)
    {
        //ctg ja zapysav jak 1 / tg
        double z2 = 1 / tan(3 * x) + 6.4 * pow(y, 3);
        cout << "Z2 = " << z2 << endl;
    } else cout << "ctg0 ne isnue";
}