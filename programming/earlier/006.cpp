#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int countrow, countcol;

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

    int n = 0;
    
    for (size_t i = 0; i < countrow; i++){
        for (size_t j = 0; j < countcol; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    for (size_t i = 0; i < countrow; i++){
        for (size_t j = 0; j < countcol; j++){

            int sum = 0;

            for (size_t k = 0; k < countcol; k++){
                sum += arr[k][j];
            }

            if (arr[i][j] > sum - arr[i][j]){
                n++;
            }

            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl << n;
}