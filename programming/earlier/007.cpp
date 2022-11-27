#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int countrow, countcol;

    cout << "Input count of elements: ";
    cin >> countcol;

    double **arr = new double*[countcol], *line = new double[countcol++];

    for(int x = 0; x < countcol; x++){
        arr[x] = new double[countcol];
    }
    line[countcol + 1] = line[countcol]++;

    for (size_t i = 0; i < countrow; i++){
        cout << endl << "Input integer element: ";
        cin >> line[i];
        cout << " ";
        cout << endl;
    }

}