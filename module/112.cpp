#include <iostream>
#include <math.h>
using namespace std;

int n;
double sum = 0;

double summ()
{
    int fact = 1;
    double sumc = 0;

    for (int x = 1; x <= n; x++)
    {
        fact *= x;
    }

    for (int x = 1; x <= n; x++)
    {
        sumc += cos(x);
    }

    sum += fact / sumc;

    n--;

    if (n > 0)
    {
        summ();
    }
    else 
    {
        return sum;
    }
}

int main()
{
    cout << "Input n: ";
    cin >> n;

    summ();
    cout << "sum = " << sum;
}