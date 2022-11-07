#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, iff = 0;
    double maxel;

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
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (iff == 0)
                {
                    if (arr[i] == arr[j])
                    {
                        maxel = arr[i];
                        iff = 1;
                    }
                }
                else 
                {
                    if (arr[i] == arr[j])
                    {
                        if (arr[i] > maxel)
                        {
                            maxel = arr[i];
                        }
                    }
                }
            }
        }
    }
    cout << maxel << endl;
}