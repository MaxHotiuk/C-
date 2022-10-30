#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1E-10


int main()
{
    double x, a, b, h;

    cout << "Input a, b, h: ";
    cin >> a >> b >> h;

    x = a;

    while (x <= b)
    {
        double sum = 0;
        for (int k = 0;; k++)
        {
            double fact = 1;
            for (int x = 1; x <= 2 * k + 1; x++)
            {
                fact *= x;
            }
            double f = pow(-1, k + 1) * pow(x, 2 * k - 1) / ((2 * k - 1) * fact);
            
            sum += f;

            if (abs(f) < EPS) break;
        }
        cout << "For x = " << x << " Sum = " << sum;
        x += h;
    }

}