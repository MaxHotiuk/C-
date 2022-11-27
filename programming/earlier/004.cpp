#include <iostream>
using namespace std;

int main()
{
    int max = -2563563, n, r;
    float k, sum, med;

    cout << "input number of elements: ";
    cin >> n;

    for (int i = 0; i < n; i++){
        cout << endl << "Input element: ";
        cin >> k;
        sum += k;
    }
    cout << sum;
    
    for (int i = 0; i < n; i++){
        cout << endl << "Input element: ";
        cin >> k;
        if (k > 0) {
            r++;
            med += k;
        }
    }
    if (k > 0) {
        med /= k;
        cout << "Med of el>0: " << k << endl;
    } else {
        cout << "No el>0" << endl;
    }

    for (int i = 0; i < n; i++){
        cout << endl << "Input element: ";
        cin >> k;
        if (k > max) {
            max = k;
        }
    }

    cout << "Max el = " << max;
    

    return 0;
}