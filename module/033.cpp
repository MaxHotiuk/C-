#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "Input n: ";
    cin >> n;

    double **arr = new double*[n];
    for(int x = 0; x < n; x++)
    {
        arr[x] = new double[n];
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
    
    double min = arr[0][n - 1];
    
    for (int x = 0; x < n / 2; x++)
    {
        for (int y = n - 1; y >= n / 2; y--)
        {
            if (arr[x][y] < min){
                min = arr[x][y];
            }
        }
    }
    for (int x = n / 2; x <= 0; x--)
    {
        for (int y = n / 2; y >= n - 1; y++)
        {
            if (arr[x][y] < min){
                min = arr[x][y];
            }
        }
    }
    cout << min << endl;
    
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}