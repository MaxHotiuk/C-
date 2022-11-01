#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    int count = 0;

    cout << "Input m, n: ";
    cin >> m >> n;

    double **arr = new double*[m];
    for(int x = 0; x < m; x++)
    {
        arr[x] = new double[n];
    }

    for (size_t i = 0; i < m; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << "Input element: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i < m; i++)
    {
        double k = 0;
        for (size_t j = 0; j < n; j++)
        {
            if (arr[i][j] < 0)
            {
                k++;
            }
        }
        cout << k << " ";
    }
    cout << endl;

}