#include <iostream>
#include <cmath>
using namespace std;
#define EPS 1E-10


int main()
{
    double a, b, h;
    cout << "Enter [a, b], h\n";
    cin >> a >> b >> h; 

    double x = a;

    while (x < b + h)
    {
        double sum = 0;
        for (int k = 0;; k++)
        {
        double n = 1;
            for (int i = 1; i <= (2 * k + 1); i++){
                n *= i;
            }

            double f = (pow(-1, k) * pow(x, 2 * k))/n;

            sum += f;

            if (abs(f) < EPS){
                break;
            }
            
        }
        cout << "x: " << x << " sum: " << sum << endl;
        x += h;
    }
    return 0;
}