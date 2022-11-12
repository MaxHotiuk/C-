#include <iostream>
#include <math.h>
using namespace std;
double sum(double arr[2][4])
{
    double summ = 0;
    for (size_t i = 0; i < 2; i++)
    {
        double max = arr[i][0];
        for (size_t j = 0; j < 4; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }
        summ += max;
    }
    return summ;
}

int main()
{
    double a[2][4], b[2][4], c[2][4], sumarr[2][4];
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of a: ";
            cin >> a[i][j];
            cout << " ";
        }
        cout << endl;
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of b: ";
            cin >> b[i][j];
            cout << " ";
            b[i][j] = i;
        }
        cout << endl;
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of c: ";
            cin >> c[i][j];
            cout << " ";
            c[i][j] = j;
        }
        cout << endl;
    }

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            sumarr[i][j] = a[i][j] + b[i][j] + c[i][j];
        }
    }
    if (sum(sumarr) == 0)
    {
        cout << "Cannot divide by 0" << endl;
    }
    else
    {
        cout << endl << "Function = " << (sum(a) + sum(b) + sum(c)) / sum(sumarr) << endl << endl; 
    }
}