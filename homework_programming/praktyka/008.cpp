#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
    ifstream inFile;
    string line, save;
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
    string str;
    inFile.close();
}