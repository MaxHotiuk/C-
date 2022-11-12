#include <iostream>
#include <string>
using namespace std;

int n;

string wword(string word, string line)
{
    while (line[n] != ',' && n < line.length())
    {
        word += line[n];
        n++;
    }
    n++;
    return word;
}

int main()
{
    int count = 0, n = 0;
    string line, word, save;
    char first;
    cout << "Input line: ";
    getline(cin, line, '.');
    
    save = wword(save, line);
    
    for (int i = n; i < line.length(); n++)
    {
        word = wword(word, line);
        if (word == save)
        {
            count++;
        }
        i = n;
        word.clear();
    }
    cout << endl << count << endl;
}