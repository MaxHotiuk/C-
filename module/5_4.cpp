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
            cout << "Input element: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < n; i++)
    {
        double min = arr[i][0];
        int iff = 1;
        for(int j = 0; j < n; j++)
        {
            if (min <= arr[i][j])
            {
                min = arr[i][j];
            }
            else 
            {
                iff = 0;
            }
        }
        if (iff == 1)
            {
                cout << i << " ";
            }
    }

}