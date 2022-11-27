#include <iostream>
#include <string>
using namespace std;

void overlayStr(string &line1, string line2, int n)
{
    string newline;
    for (int i = 0; i < n; i++)
    {
        newline += line1[i];
    }
    line2.erase(line2.begin());
    newline += line2;
    line1.clear();
    line1 = newline;
}

int main()
{
    string line1, line2;
    int n;
    cout << "Input line 1: ";
    getline(cin, line1, '.');
    cout << "Input line 2: ";
    getline(cin, line2, '.');
    cout << "Input n: ";
    cin >> n;
    overlayStr(line1, line2, n);
    cout << endl << line1 << endl;
}