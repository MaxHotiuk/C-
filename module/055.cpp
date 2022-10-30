#include <iostream>
#include <math.h>
using namespace std;

int task;

void choose()
{
    cout << "Choose the task{1, 2, 3}(if anything else - end): ";
    cin >> task;
    cout << endl;
}
void first()
{

    double a, b, h, e;
    cout << "Enter a, b, h, e\n";
    cin >> a >> b >> h >> e; 

    double x = a;

    while (x <= b)
    {
        double sum = 0;
        for (int k = 0;; k++)
        {
            double n = 1, nn = 1;
            for (int i = 1; i <= k; i++)
            {
                n *= i;
            }
            for (int i = 1; i <= k + 1; i++)
            {
                nn *= i;
            }

            double f = (pow(-1, k) * pow((x / 2), 2 * k + 1)) / (n * nn);

            sum += f;

            if (abs(f) < e)
            {
                break;
            }
        }
        cout << "for x = " << x << " sum = " << sum << endl;
        x += h;
    }
}

void second()
{
    int n;
    double x, sum = 0;
    cout << "Enter n, x\n";
    cin >> n >> x;
    while (n >= 1)
    {
        sum += pow(sin(x), n);
        n--;
    }
    cout << "Sum = " << sum << endl;
}

void third()
{

    int n;
    int count = 0;

    cout << "Input n: ";
    cin >> n;

    double **arr = new double*[n], *vec = new double[n];
    for(int x = 0; x < n; x++)
    {
        arr[x] = new double[n];
    }
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << endl << "Input integer element "<< '[' << i << ']' << '[' << j << ']' << " of arr: ";
            cin >> arr[i][j];
            cout << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << endl << "Input integer element " << '[' << i << ']' << " of vector ";
            cin >> vec[i];
            cout << " ";
    }

    for (int x = 0; x <= n; x += 2)
    {
        for (size_t j = 0; j < n; j++)
        {
            arr[x][j] = vec[j];
        }
    }

    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    string iif;
    cout << "Want to choose the task?(yes if true or anything else if false) ";
        cin >> iif;
        cout << endl;
    while (iif == "yes")
    {
        choose();

        switch (task)
        {
        case 1:
            first();
            break;
        case 2:
            second();
            break;
        case 3:
            third();
            break;
        default:
            break;
        }

        cout << "Want to choose the task?(yes if true or anything else if false) ";
        cin >> iif;
        cout << endl;
    }

    return 0;
}