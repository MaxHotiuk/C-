#include <math.h>
#include <iostream>

using namespace std;

class Triangle
{
    private:
        double a, b, c;
    public:
        Triangle(double A = 0, double B = 0, double C = 0)
        {
            a = A;
            b = B;
            c = C;
        }
        Triangle(const Triangle& x)
        {
            a = x.a;
            b = x.b;
            c = x.c;
        }
        void input()
        {
            cout << "input sides: ";
            cin >> a >> b >> c;
        }
        void output()
        {
            cout << a << ", " << b << ", " << c;
        }
        bool correct()
        {
            return a < b + c && b < a + c && c < a + b;
        }
        double P()
        {
            return a + b + c;
        }
        double s()
        {
            double p = P() / 2;
            return sqrt(p * (p - a) * (p - b) * (p - c));
        }
};

void sort(Triangle *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j].P() > arr[j + 1].P())
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    const int n = 5;
    Triangle *arr[n];

    for (int i = 0; i < n; i++)
    {
        arr[i]->input();
    }

    sort(*arr, n);

    for (int i = 0; i < n; i++)
    {
        arr[i]->output();
    }
}
