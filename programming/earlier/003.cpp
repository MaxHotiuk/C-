#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a month id: ";
    int month;
    cin >> month;
    cout << endl;

    switch (month)
    {
    case 1:
        cout << "Winter";
        break;
    case 2:
        cout << "Winter";
        break;
    case 12:
        cout << "Winter";
        break;
    case 3:
        cout << "Spring";
        break;
    case 4:
        cout << "Spring";
        break;
    case 5:
        cout << "Spring";
        break;
    case 6:
        cout << "Summer";
        break;
    case 7:
        cout << "Summer";
        break;
    case 8:
        cout << "Summer";
        break;
    case 9:
        cout << "Outumn";
        break;
    case 10:
        cout << "Outumn";
        break;
    case 11:
        cout << "Outumn";
        break;
    default:
        cout << "The number isn't a month id";
        break;
    }
    return 0;
}