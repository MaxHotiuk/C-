#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int count;

    cout << "Input count of elements: ";
    cin >> count;

    double **arr = new double*[count], dot1[2], dot2[2], iff = 0, indx1, indx2, len;
    for(int x = 0; x < count; x++){
        arr[x] = new double[2];
    }

    for (int x = 0; x < count; x++){
        cout << endl << "Input integer element: ";
        cin >> arr[x][0];
        cout << " ";
        cin >> arr[x][1];
    }

    for (int x = 0; x < count; x++){
        for (int y = 0; y < 2; y++){
            if (iff == 0){
                iff = 1;
                dot1[0] = x;
                dot1[1] = y;
                
            } else {

            }
        }
    }
    
}

