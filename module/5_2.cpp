#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double arr[6][6], max, vec1[6], vec2[6];
    int indi, indj;

    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    max = arr[0][0];

    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            if (arr[i][j] > max) 
            {
                max = arr[i][j];
                indi = i;
                indj = j;
            }
        }
    }
    double dob;

    for (size_t i = 0; i < 6; i++)
    {
        vec1[i] = arr[i][indi];
    }

    for (size_t i = 0; i < 6; i++)
    {
        vec2[i] = arr[indj][i];
    }

    for (size_t i = 0; i < 6; i++)
    {
        dob += vec1[i] * vec2[i];
    }
    
    cout << "Dobutok = " << dob << endl << endl;

    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 6; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}