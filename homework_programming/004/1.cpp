#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count, indx1, indx2, if1 = 0, if2 = 0;

    cout << "Input count of elements: ";
    cin >> count;

    double *arr = new double(count), el1, el2, sum;

    for (int x = 0; x < count; x++){
        cout << endl << "Input element: ";
        cin >> arr[x];
    }

    for (int x = 0; x < count; x++){
        if (if1 == 0){
            if1 = 1;
            el1 = arr[x];
            indx1 = x;
        } else if (arr[x] > el1){
            el1 = arr[x];
            indx1 = x;
        }
    }

    for (int x = 0; x < count; x++){
        if (if2 == 0){
            if2 = 1;
            el2 = arr[x];
            indx2 = x;
        } else if (arr[x] < el2){
            el2 = arr[x];
            indx2 = x;
        }
    }

    for (int x = min(indx1, indx2); x <= max(indx1, indx2); x++){
        sum += arr[x];
    }

    cout << sum;
}

