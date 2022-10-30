#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int min1 = 0, min2 = 0;
    int sum = 0;
    
    cout << "Enter numbers of elements: "; cin >> n; cout << endl;
    
    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter [" << i << "]  "; cin >> arr[i];\
    }

    for (int x = n - 1; x >= 0; x--)
    {
        if (arr[x] < 0)
        {
            min1 = x;
        }
    }

    for (int x = n - 1; x > min1; x--)
    {
        if (arr[x] < 0)
        {
            min2 = x;
        }
    }

    for (int x = min2 - 1; x > min1; x--)
    {
        sum += arr[x];
    }

    cout << "Sum = " << sum << endl;
    return 0;
}