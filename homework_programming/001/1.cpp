#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double b, c, x1, x2;
    cout << "Input x1: ";
    cin >> x1;
    cout << "Input x2: ";
    cin >> x2;

    b = x1 + x2;
    c = x1 * x2;

    cout << "b = " << b << endl << "c = " << c << endl << "x^2 + " << b << "x + " << c << " = 0" << endl;
    
    return 0;
}
