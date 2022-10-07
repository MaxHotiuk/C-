#include <iostream>
using namespace std;

int main()
{
    int x, array[4];
    string doo;

    cout << "Input x: ";
    cin >> x;

    for (int i = 3; i >= 0; i--) 
    {
        array[i] = x % 10;
        x /= 10;
    }

    if (array[0] + array[1] == array[2] + array[3]) {doo = "true";}
    else {doo = "false";}

    cout << endl << "Do sum[1, 2] == sum[3, 4]? " << doo << endl;

    return 0;
}