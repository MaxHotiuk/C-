#include <iostream>
#include <string>
using namespace std;

int n, num = 1;

string *remove(string arr[], int l)
{
    int i, k = 0;
    string *res = new string[num];

    for (i = 0; i < num; i++)
    {
        if (arr[i].length() >= 4)
        {
            res[k] = arr[i];
            k++;
        }
    }

    return res;
}

string wword(string line)
{
    string word;
    while (line[n] != ' ' && n < line.length())
    {
        word += line[n];
        n++;
    }
    n++;
    return word;
}

int main()
{
    int n = 0, length = 1;
    string line, word;
    cout << "Input line: ";
    getline(cin, line, '.');

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            num++;
        }
    }

    string *arr = new string[num], *res = new string[num];

    for (int i = 0; i < num; i++)
    {
        string word = wword(line);
        arr[i] = word;
        word.clear();
    }

    res = remove(arr, num);

    for (int i = 0; i < num; i++)
    {
        cout << res[i] << " ";    
    }
    cout << endl;
}