#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, m;
    int count = 0;

    cout << "Input n, m: ";
    cin >> n >> m;
    int indx = 0, indxi, indxj;
    double **arr = new double*[n], *veci = new double[n], *vecj = new double[m], minel, iff;
    for(int x = 0; x < n; x++)
    {
        arr[x] = new double[m];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of arr: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        iff = 1;
        minel = arr[i][0];
        indxi = i;
        indxj = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (arr[i][j] < minel)
            {
                minel = arr[i][j];
                indxi = i;
                indxj = j;
            }
        }
        for (size_t i = 0; i < n; i++)
        {
            if (minel < arr[i][indxj])
            {
                iff = 0;
            }
        }
        if (iff == 1)
        {
            cout << indxi << " " << indxj << endl;
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}