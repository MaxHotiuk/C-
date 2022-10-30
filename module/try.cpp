#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int count = 0;

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
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of arr: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
    int iff = 0;
    for (size_t row = 0; row < n; row++){
        if (iff == 0){
            for (int x = 0; x < n; x++){
                arr[row][x] = arr[row][x + 1];
            }
            arr[row][n - 1] = 0;
            iff ++;
        }
        else {
            for (int x = 0; x < n; x++){
                arr[row][x] = arr[row - 1][x + 1];
            }
            arr[row][n - 1] = 0;
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