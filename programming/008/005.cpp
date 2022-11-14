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
    int n = 0;
    string line, word, save;
    char first;
    cout << "Input line: ";
    getline(cin, line, '.');
    
    save = wword(save, line);
    
    for (int i = n; i < line.length(); n++)
    {
        word = wword(word, line);
        if (word.length() > save.length())
        {
            save = word;
        }
        i = n;
        word.clear();
    }
    cout << endl << save << endl;
}