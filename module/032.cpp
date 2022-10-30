#include <iostream>
#include <math.h>
using namespace std;

double sum = 0, k = 1, x, e;

double summ()
{
    double fac = 1, f = 0;
    for (double i = 1; i <= x; i++)
    {
        fac *= i;
    }
    f = (pow(-1, k) * pow(x, k)) / (pow(2, k) * fac);
    k -= 1;
    sum += f;

    if (abs(f) <= e) return sum;
    else summ();
}
int main()
{
    cout << "Input x, e: ";
    cin >> x >> e;
    summ();
    cout << " sum = " << sum << endl;
}