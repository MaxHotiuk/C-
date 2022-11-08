#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;

    cout << "Input n: ";
    cin >> n;
    
    double *arr = new double[n];
    
    for (int i = 0; i < n; i++)
    {
        cout << "Input " << i << " element: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        double elem = arr[i] % 4.0;
        if (elem == 0)
        {
            arr[i] = -9797434443.8767;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != -9797434443.8767)
        {
            cout << arr[i] << " ";
        }
    }
}