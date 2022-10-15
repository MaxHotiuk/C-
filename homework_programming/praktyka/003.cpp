#include <iostream>
#include <math.h>

using namespace std;

double x1, y, x2, y2, x3, y3, a, b, c, len1, len2;

void countLenth()
{
    if (x1 != 0 || y != 0){
        a = sqrt(pow(x1, 2) + pow(y, 2));
    } else {
        a = 0;
    }

    if (x2 != 0 || y2 != 0){
        b = sqrt(pow(x2, 2) + pow(y2, 2));
    } else {
        b = 0;
    }

    if (x3 != 0 || y3 != 0){
        c = sqrt(pow(x3, 2) + pow(y3, 2));
    } else {
        c = 0;
    }
}

void outClosest()
{
    if (a == b && b == c){
        cout << "Their farth is the same\n";
    } else if (a == b){
        if (a > c){
            cout << "C is the closest\n";
        } else {
            cout << "A and B are the closest\n";
        }
    } else if (a == c){
        if (a > b){
            cout << "B is the closest\n";
        } else {
            cout << "A and C are the closest\n";
        }
    } else if (b == c){
        if (b > a){
            cout << "A is the closest\n";
        } else {
            cout << "B and C are the closest\n";
        }
    } else {
        len1 = min(a, b);
        len2 = min (len1, c);
        if (a == len2){
            cout << "A is the closest\n";
        } else if (b == len2){
            cout << "B is the closest\n";
        } else {
            cout << "C is the closest\n";
        }
    }
}

int main()
{
    cout << "Enter coordinates x, y for point a: \n";
    cin >> x1;
    cin >> y;
    cout << endl;

    cout << "Enter coordinates x, y for point b: \n";
    cin >> x2;
    cin >> y2;
    cout << endl;

    cout << "Enter coordinates x, y for point c: \n";
    cin >> x3;
    cin >> y3;
    cout << endl;

    countLenth();
    outClosest();

    return 0;
}
