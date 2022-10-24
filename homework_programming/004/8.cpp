#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count, x, y;

    cout << "Input count of elements: ";
    cin >> count;

    double *arr = new double[count], el1;

    for (int x = 0; x < count; x++){
        cout << endl << "Input element: ";
        cin >> arr[x];
    }
    el1 = arr[0];
    for (int x = 1; x < count; x++){
        arr[x - 1] = arr[x];
    }
    arr[count - 1] = el1;

    for (int x = 0; x < count; x++){
        cout << arr[x] << " ";
    }

}