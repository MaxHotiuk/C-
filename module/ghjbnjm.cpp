#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const int n = 3;
    double m[n][n];

    

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
    }

    double xmin = m[0][n - 1];

    for (int i = 0; i < n; i++)
    {
        for (int j = (i < n / 2 ? n - i - 1 : i); j < n; j++)
        {
            if (m[i][j] < xmin) {
                xmin = m[i][j];
            }
        }
    }
    cout << xmin << endl;
    return 0;
}