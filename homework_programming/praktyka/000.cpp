#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, z1, z2;
    
    cout << "Variable:" << endl;
    cin >> a;
    
    z1 = cos(a) +pow(sin(3 * M_PI - a), 2) + cos(3 * a);
    z2 = 2 * sqrt(2) * cos(a) * sin((1 / 4) * M_PI + 2 * a);

    std::cout << "Z1 = " << z1 << endl;
    std::cout << "Z2 = " << z2 << endl;

    return 0;
}