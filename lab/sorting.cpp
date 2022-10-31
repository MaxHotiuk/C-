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
void bubble(double arr[])
{

}

void insertion()
{

}

void selection()
{

}

int main()
{
    int n;
    double *arr = new double[n];
    for (int i = 0; i < n; i++)
    {
        cout <<"input element: ";
        cin >> arr[i];
    }
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
            bubble(arr);
            break;
        case 2:
            insertion();
            break;
        case 3:
            selection();
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