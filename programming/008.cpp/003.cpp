#include <iostream>
using namespace std;

int main()
{
    string s, word, save;
    char first;

    getline(cin, s, '.');
    for (int i = 0; i < s.length(); i++)
    {
        if (isdigit(s[i]) == false)
        {
            s[i] = ' ';
        }
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            int n = i;
            while (s[n] != ' ')
            {
                word += s[n];
                n++;
                i++;
            }
            if (word.length() > save.length())
            {
                save = word;
            }
            word.clear();
        }
    }
    cout << endl << save << endl;
    
}