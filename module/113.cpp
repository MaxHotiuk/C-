#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cout << "Input m, n: ";
    cin >> m >> n;
    double **arr = new double *[m];
    for (int i = 0; i < m; i++)
    {
        arr[i] = new double [n];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Input element: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int y = 0; y < n; y++)
    {
        double sum = 0;
        for (int x = 0; x < m; x++)
        {
            sum += arr[x][y];
        }
        for (int x = 0; x < m; x++)
        {
            if (arr[x][y] > sum - arr[x][y])
            {
                count ++;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << count << endl;
}
