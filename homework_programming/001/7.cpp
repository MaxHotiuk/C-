#include <iostream>
#include <string> 
using namespace std;

int main()
{
    int x, array[3];
    string neww;

    cout << "Input x: ";
    cin >> x;

    for (int i = 2; i >= 0; i--) 
    {
        array[i] = x % 10;
        x /= 10;
    }

    for (int i = 2; i >= 0; i--)
    {
        std::string s = std::to_string(array[i]);
        neww += s;
    }
    cout << endl << "New number = " << neww << endl;
    return 0;
}
