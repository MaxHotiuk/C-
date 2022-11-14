#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ifstream inFile;
    string line;
    int n = 1;

    inFile.open("text.txt");

    getline(inFile, line);

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ')
        {
            n++;
        }
    }

    inFile.close();

    inFile.open("text.txt");

    line.erase(line.begin());

    for (int i = 0; i < n; i++)
    {
        if (line[i] == ' ')
        {
            line.erase(line.begin() + i + 1);
        }
    }

    inFile.close();

    cout << line << endl;
}