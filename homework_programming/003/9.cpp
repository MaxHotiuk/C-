#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a, b, h, x, s, f;
    int e = 0;
    cout << "Input a\n";
    cin >> a;
    cout << "\nInput b\n";
    cin >> b;
    cout << "\nInput h\n";
    cin >> h;

    while (a <= b){
        x = a;
        a += h;
        f = 2 * sin(x);
        cout << f << endl;
        if (f < 1.5 && f > 0.5){
            s += f;
            e += 1;
        }
    }
    cout << "Middle: " << s / e << endl;

    return 0;
}