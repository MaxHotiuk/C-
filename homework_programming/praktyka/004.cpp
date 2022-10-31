#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x, e, func;

    cout << "Input x, e:\n";
    cin >> x >> e;

    for (int n = 0;; n++)
    {
        double f, fact = 1;

        for(int i = 1; i <= 2 * n; i++)
        {
            fact *= i;
        }

        f = pow(x, 2 * n) / fact;
        func += f;

        if (abs(f) < e)
        {
            break;
        }
    }
    cout << "Summ = " << func << endl;
    return 0;
}
