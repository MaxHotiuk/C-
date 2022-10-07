#include <iostream>
using namespace std;

int main()
{
    int x, dob, array[4];

    cout << "Input x: ";
    cin >> x;

    for (int i = 3; i >= 0; i--) 
    {
        array[i] = x % 10;
        x /= 10;
    }

    for (int i = 0; i <= 3; i++)
    {
        dob *= array[i];
    }
    cout << endl << "Dobutok = " << dob << endl;
    return 0;
}