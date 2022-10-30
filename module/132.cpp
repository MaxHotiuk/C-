#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    double x, sinn, sum = 0;
    cout << "Input n, x: ";
    cin >> n >> x;
    sinn = sin(x);
    for (int i = 1; i <= n + 1; i++)
    {
        sinn = sin(sinn);
        sum += sinn;
    }
    cout << "Sum = " << sum << endl;
}