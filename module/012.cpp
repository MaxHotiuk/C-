#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double num = cos(40);

    for (int x = 39; x >=1; x--){
        num = cos(x + num);
    }

    cout << num;
}
