#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if (x <= 1) {
        x = pow(x, 1/3.0);
    } else if (x <= 2) {
        x = 2 - x;
    } else {
        x = sin(x-2);
    }

    cout << x << endl;

    return 0;
}
