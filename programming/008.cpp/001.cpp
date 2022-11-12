#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    string s;
    char first;

    getline(cin, s, '.');
    first = tolower(s[0]);
    for (int n = 0; n < s.length() - 1; n++)
    {
        if (s[n] == ' ' && tolower(s[n + 1]) == first)
        {
            count ++;
        }
    }
    cout << endl << count << endl;
    return 0;
}