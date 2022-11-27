#include <math.h>
#include <iostream>

using namespace std;

class ComplexNum
{
    public:
        double im, re;
        double eps = 0.00001;

        ComplexNum ()
        {
            im = 0;
            re = 0;
        }
        ComplexNum (double im)
        {
            
        }
        double modul()
        {
            double mod = sqrt(pow(im, 2) + pow(re, 2));
            return mod;
        }
        double sins(double z)
        {
            double d = z, f = z, n = 1; 
            while (abs(d) > eps)
            {
                double fact = 1;
                for (int i = 1; i <= 2 * n - 1; i++)
                {
                    fact *= i;
                }
                d = pow(-1, n) * pow(z, 2 * n + 1) / fact;
                n++;
                f += d;
            }
            return f;
        }
        
};

int main()
{
    double i;
    ComplexNum numm;
    cout << "Input Im: ";
    cin >> numm.im;
    cout << endl << "Input Re: ";
    cin >> numm.re;
    cout << endl << numm.modul() << endl;
    cout << numm.sins(1.57) << endl;
    cout << sin(1.57) << endl;
    cout << "Input i: ";
    cin >> i;
    cout << numm.sins(1 + i) << endl;
}
