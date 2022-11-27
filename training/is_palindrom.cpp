#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int x) 
{
    int z = x;
    string y;
    if (x > 0)
    {
        while (z != 0)
        {
            y += to_string(z % 10);
            z /= 10;
        }
        
        string f = to_string(x);
        if (y == f)
        {
            return true;
        } else return false;
    } else if (x == 0)return true;
    else return false;
    
}

int main()
{
    cout << isPalindrome(1234567899);
}