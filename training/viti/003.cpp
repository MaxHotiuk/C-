#include <iostream>
//treba pidklychuty modul math.h shchob prozuvalu sin, cos i stepeni
#include <math.h>
using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    //robumo perevirku na kozhnu z umov
    if (x < 0 && y < 0)
    {
        x = abs(x);
        y = abs(y);
    } else if (x < 0 && y >= 0)
    {
        x += 0.5;
        y += 0.5;
    }
    else if (y < 0 && x >= 0)
    {
        x += 0.5;
        y += 0.5;
    }
    else if (y >= 0 && x >= 0)
    {
        if (x > 2 || x < 0.5)
        {
            if (y > 2 || y < 0.5)
            {
                x /= 10;
                y /= 10;
            }
        }
    }

    cout << "x = " << x << endl << "y = " << y << endl;
}