#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double s = 0;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++){
        double fac = 1, sum = 0;

        for (int k = 1; k <= i; k++) {fac *= k;}
        for (int k = 1; k <= i; k++) {sum += k;}

        double f = fac / sum;
        s += f;
        cout << f << endl;}
    cout << "summa " << s << endl;
}