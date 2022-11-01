#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;

    cout << "Input n: ";
    cin >> n;


    double **arr = new double*[n], *vec = new double[n];

    for(int x = 0; x < n; x++)
    {
        arr[x] = new double[n];
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            arr[0][j] = 1;
            arr[n - 1][j] = n;
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