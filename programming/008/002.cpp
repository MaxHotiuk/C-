#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    string line;
    char first;

    getline(cin, line, '.');
    
    for (int n = 0; n < line.length() - 1;)
    {
        if (line[n] == ' ')
        {
            string word;
            while (line[n] != ' ' || n >= line.length())
            {
                word += line[n];
                n++;
            }
            if (word[0] == line[line.length() - 1])
            {
                count ++;
            }
            word.clear();
            n++;
        }
    }

    cout << endl << count << endl;
    return 0;
}