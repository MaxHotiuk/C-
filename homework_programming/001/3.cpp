#include <iostream>
using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, c2, x, y;
    cout << "Input a1: ";
    cin >> a1;
    cout << "Input b1: ";
    cin >> b1;
    cout << "Input c1: ";
    cin >> c1;
    cout << "Input a2: ";
    cin >> a2;
    cout << "Input b2: ";
    cin >> b2;
    cout << "Input c2: ";
    cin >> c2;
    y = (c2 - ((a2 * c1) / a1)) / (b2 - ((a2 * b1) / a1));
    x = (c1 - b1 * y) / a1;
    cout << "x = " << x << endl << "y = " << y << endl;
}