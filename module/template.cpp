#include <iostream>
#include <math.h>
using namespace std;

int task;

void choose()
{
    cout << "Choose the task (1, 2, 3)\nP.S if anything else - end: ";
    cin >> task;
    cout << endl;
}
void first()
{

}

void second()
{
    
}

void third()
{
    
}

int main()
{
    string iif;
    cout << "Choose the task?(y if true) ";
        cin >> iif;
        cout << endl;
    while (iif == "y")
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

        cout << "Choose the task?(y if true) ";
        cin >> iif;
        cout << endl;
    }

    return 0;
}