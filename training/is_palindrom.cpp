#include <iostream>
using namespace std;

bool is_pal_str(string x)
{
    string y;
    for (int i = x.length() - 1; i >= 0; i--)
    {
        y += x[i];
    }
    return x == y;
}

int main()
{
    string y;
    cin >> y;
    cout << is_pal_str(y);
}