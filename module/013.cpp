#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int countrow, countcol;
    int count = 0;

    cout << "Input count of rows: ";
    cin >> countrow;
    cout << "Input count of collums: ";
    cin >> countcol;

    double **arr = new double*[countrow];
    for(int x = 0; x < countrow; x++){
        arr[x] = new double[countcol];
    }
    for (size_t i = 0; i < countrow; i++){
        for (size_t j = 0; j < countcol; j++){
            cout << endl << "Input integer element: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (int col = 0; col < countcol; col++){
        double sum = 0;
        for (int row = 0; row < countrow; row++){
            sum += arr[row][col];
        }
        for (int row = 0; row < countrow; row++){
            double x = arr[row][col];
            if (x > sum - x){
                count ++;
            }
        }
    }
    cout << "Number of special elements: " << count << endl;

}