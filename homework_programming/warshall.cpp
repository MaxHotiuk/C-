#include <iostream>
#include <math.h>

using namespace std;


int main()
{
    int n;

    cout << "Input n: ";
    cin >> n;
    int indx = 0;
    int **in_mat = new int*[n], summ = 0;
    for(int x = 0; x < n; x++)
    {
        in_mat[x] = new int[n];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of arr: ";
            cin >> in_mat[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int k = 1; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i != k && in_mat[i][k] == 1)
            {
                for (int j = 0; j < n; j++)
                {
                    if (in_mat[i][j] < 1)
                        in_mat[i][j] = in_mat[i][j] + in_mat[k][j];
                }
            }
        }
    }
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << in_mat[k][i] << " ";
        }
        cout << endl;
    }
}