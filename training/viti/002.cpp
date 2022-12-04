#include <iostream>
//treba pidklychuty modul math.h shchob prozuvalu sin, cos i stepeni
#include <math.h>
using namespace std;

//stvoryv funcziju dlja znahodjennja t
double t(double x)
{
    double a = 0, b = 0, fact1 = 1, fact2 = 1;
    for (int k = 0; k <= 10; k++)
    {
        //zukl dlja shukannja factoriala
        for (int i = 1; i <= 2 * k + 1; i++)
        {
            fact1 *= i;
        }

        a += pow(x, 2 * k + 1) / fact1;

        //zukl dlja shukannja factoriala
        for (int i = 1; i <= 2 * k; i++)
        {
            fact2 *= i;
        }
        b += pow(x, 2 * k) / fact2;
    }
    return a / b;
    
}



int main()
{
    double y;

    cout << "y = ";
    cin >> y;

    cout << "Result = " << (1.7 * t(0.25) + 2 * t(1 + y)) / (6 - t(pow(y, 2) - 1)) << endl;
}