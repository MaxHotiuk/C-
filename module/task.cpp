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
    int n;
    double sum = 0;
    cout << "Input n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        double fact = 1, summ = 0;

        for (int k = 1; k <= i; k++)
        {
            fact *= k;
        }

        for (int k = 1; k <= i; k++)
        {
            summ += k;
        }

        double func = fact / summ;
        
        sum += func;

        cout << func << endl;
    }

    cout << "Sum = " << sum << endl;
}

void second()
{
    double e, a1 = 1, ann, indx;
    cout << "Input e: ";
    cin >> e;
    ann = a1;
    double an = 3 + ann / pow(2, 2);
    int n = 2;
    cout << endl << a1;
    while (abs(an - ann) < e)
    {
        double an = 3 + ann / pow(2, n);
        
        n++;
        cout << an << " ";
    }
    cout << endl;
}

void third()
{
    int n;
    int count = 0;

    cout << "Input n: ";
    cin >> n;
    int indx = 0;
    double **arr = new double*[n], summ = 0;
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
    for (size_t j = 0; j < n; j++)
    {
        summ += arr[0][j];
    }
    
    
    for (size_t i = 0; i < n; i++)
    {
        double sum = 0;
        for (size_t j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if (sum < summ)
        {
            summ = sum;
            indx = i;
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

    cout << "Row with the smallest summ: ";
    for (size_t j = 0; j < n; j++)
        {
            cout << arr[indx][j] << " ";
        }
        
    cout << endl;

    for (int i = 0; i < n; i++)
            {
                delete[]arr[i];
            }
            delete[]arr;
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