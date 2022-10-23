#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count, x, y;

    cout << "Input count of elements: ";
    cin >> count;

    double *arr1 = new double(count), *arr2 = new double(count);

    for (int x = 0; x < count; x++){
        cout << endl << "Input integer element: ";
        cin >> arr1[x];
    }
    arr2 = arr1;

    for (x = 0; x < count; x++){
        for (y = 0; y < count; y++){
            if (arr1[x] == arr1[y] && x != y) {
                arr2[x] = 0.5;
                arr2[y] = 0.5;
            }
        }
    }

    for (x = 0; x < count; x++){
        if (arr2[x] != 0.5){
            cout << arr2[x] << " ";
        }
    }
}

