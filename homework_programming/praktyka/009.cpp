#include <iostream>
#include <string>
using namespace std;

int countWords(string line)
{
    int n = 0;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            n++;
        }
    }
    if (n != 0 || line.length() != 0) return n + 1;
    else return n;
}

int main()
{
    string line;
    cout << "Input line: ";
    getline(cin, line, '.');
    cout << countWords(line) << endl;
}