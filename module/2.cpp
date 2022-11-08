#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double eps, a1 = 1, an1, indx;
    cout << "Input e: ";
    cin >> eps;
    an1 = a1;
    for (int n = 2;; n++){
        double an2 = 3 + an1 / pow(2, n);

        if (abs(an2 - an1) < eps){
            indx = n;
            cout << "Index of n elem = " << indx << endl;
            an1 = a1;
            break;}
        else {an1 = an2;}}
    cout << a1 << " ";
    for (int n = 2; n <= indx; n++){
        double an2 = 3 + an1 / pow(2, n);
        an1 = an2;
        cout << an2 << " ";}
    cout << endl;
}