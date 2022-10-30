#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double func = 0;
    cout << "Enter n\n";
    cin >> n;
    
    for (int x = n; x >= 1; x--)
    {
        int sum = 0, fac = 1;

        for (int i = 1; i <= x; i++)
        {
            fac *= i;
        }

        for (int i = 1; i <= x; i++)
        {
            sum += i;
        }
        func += pow(-1, (x + 1)) * sum / fac;
    }

    cout << "Sum = " << func << endl;
}