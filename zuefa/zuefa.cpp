#include <iostream>
using namespace std;

int main()
{
    char var1, var2, des;
    int indx = rand() % 3;
    char chsArr[3] = {'s', 'r', 'p'};

    cout << "Print: r for rock, p for paper or s for scissors" << endl;
    cin >> var1;

    var2 = chsArr[indx];

    switch (var2)
    {
        case 's':
            if (var1 == 'r'){
                cout << "You won! Rock beats scissors" << endl;
            }
            else if (var1 == 'p'){
                cout << "You lose... Scissors beat paper" << endl;
            }
            else if (var1 == 's'){
                cout << "It's a tie!" << endl;
            }
            break;
        case 'p':
            if (var1 == 'r'){
                cout << "You lose... Paper beats rock" << endl;
            }
            else if (var1 == 's'){
                cout << "You won! Scissors beat paper" << endl;
            }
            else if (var1 == 'p'){
                cout << "It's a tie!" << endl;
            }
            break;
        case 'r':
            if (var1 == 's'){
                cout << "You lose... Rock beats scissors" << endl;
            }
            else if (var1 == 'p'){
                cout << "You won! Paper beats rock" << endl;
            }
            else if (var1 == 'r'){
                cout << "It's a tie!" << endl;
            }
            break;
        default:
           cout << "You put something wrong" << endl;
    }
    
    cout << "Wanna play again?(y or n)" << endl;
    cin >> des; 
    switch (des){
        case 'y':
            main();
        default:
            break;
    }

    return 0;
}