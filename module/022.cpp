#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double s2 = 0;
    for (int k = 1; k <= 10; k++){
        double fact = 1; 

        for (int i = 1; i <= k; i++){
            fact *= i;
        }
        double s1 = 0;

        for (int n = 1; n <= k; n++){
            s1 += sin(k * n);
        }

        s2 += s1/fact;
    }
    cout << "Summ: " << s2 << endl;
}