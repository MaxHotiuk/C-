#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double k, sum1 = 0, sum2 = 0;
    
    cout << "Input k: ";
    cin >> k;

    for (int n = 1; n <= k; n++)
    {
        sum1 += sin(n * k);
    }

    for (int i = 1; i <= 10; i++){
        double fact = 1;
        for (int x = 1; x <= k; x++)
        {
            fact *= x;
        }
        sum2 += sum1 / fact;
    }

    cout << "Sum = " << sum2 << endl;
}