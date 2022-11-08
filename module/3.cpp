#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    int count = 0;

    cout << "n: ";
    cin >> n;
    int x = 0;
    double **arr = new double*[n], sum;
    for(int x = 0; x < n; x++){
        arr[x] = new double[n];}

    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << endl << "element ";
            cin >> arr[i][j];
            cout << " ";}
        cout << endl;}

    for (int j = 0; j < n; j++){
        sum += arr[0][j];}
    
    for (int i = 0; i < n; i++){
        double s = 0;
        for (int j = 0; j < n; j++){
            s += arr[i][j];}
        if (s < sum){
            sum = s;
            x = i;}}
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;}

    cout << "Rjadok: ";

    for (int j = 0; j < n; j++){
            cout << arr[x][j] << " ";}

    cout << endl;
    for (int i = 0; i < n; i++){
                delete[]arr[i];
            }delete[]arr;
}