#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    double z1, z2;

    cout << "Variable:" << endl;
    cin >> a;

    z1 = 2*pow(sin(3 * M_PI - 2 * a), 2)*pow(cos(5 * M_PI + 2 * a), 2);
    z2 = 0.5 - 0.25 * sin(5 * M_PI / 2 - 8 * a);

    std::cout << "Z1 = " << z1 << endl;
    std::cout << "Z2 = " << z2 << endl;

    return 0;
}
