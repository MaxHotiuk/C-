#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    double dys, x1, x2;

    cout << "Input a ";
    cin >> a;
    cout << endl << "Input b ";
    cin >> b;
    cout << endl << "Input c ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            x1 = c / b;
            cout << endl << x1 << endl;
        } else if (c == 0) {
            cout << "Any numbers";
        } else {
            cout << "No roots";
        }
    }

    dys = b * b - 4 * a * c;

    if (dys > 0) {
        x1 = (sqrt(dys) - b) / (2 * a);
        x2 = (-sqrt(dys) - b) / (2 * a);
        cout << endl << x1 << " " << x2 << endl;
    } else if (dys == 0) {
        x1 = -b / (2 * a);
        cout << endl << x1 << endl;
    } else {
        cout << "No roots";
    }


    return 0;
}