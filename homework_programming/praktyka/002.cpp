#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, p, z1, z2;
    cout << "Variable: ";
    cin >> x;

    p = abs(x - 14 * pow(x, 5));

    if (p > 0) {
        z1 = log(p) / log(5);
        cout << endl << "Z1 = " << z1;
    } else {
        cout << endl << "Z1 is not countable";
    }

    z2 = pow(M_E, 8 * x) + 4 * pow(x, 3) + (12 * x) / 25;
    cout << endl << "Z2 = " << z2 << endl;

    return 0;
}