#include <iostream>

using namespace std;

int main()
{
    char var1, var2;
    string des;
    int indx = rand() % 3;
    char chsArr[3] = {'s', 'r', 'p'};

    cout << "Print: r for rock, p for paper or s for scissors" << endl;
    cin >> var1;

    var2 = chsArr[indx];

    if (var1 == 'r' && var2 == 's'){
        cout << "You won! Rock beats scissors" << endl;
    }
    else if (var1 == 'r' && var2 == 'r'){
        cout << "It's a tie!" << endl;
    }
    else if (var1 == 'r' && var2 == 'p'){
        cout << "You lose... Paper beats rock" << endl;
    }
    else if (var1 == 'p' && var2 == 's'){
        cout << "You lose... Scissors beat paper" << endl;
    }
    else if (var1 == 'p' && var2 == 'r'){
        cout << "You won! Paper beats rock" << endl;
    }
    else if (var1 == 'p' && var2 == 'p'){
        cout << "It's a tie!" << endl;
    }
    else if (var1 == 's' && var2 == 's'){
        cout << "It's a tie!" << endl;
    }
    else if (var1 == 's' && var2 == 'r'){
        cout << "You lose... Rock beats scissors" << endl;
    }
    else if (var1 == 's' && var2 == 'p'){
        cout << "You won! Scissors beat paper" << endl;
    }
    else{
        cout << "You put something wrong";
    }

    cout << "Wanna play again?(yes or no)" << endl;
    cin >> des; 

    if (des == "yes"){
        main();
    }

    return 0;
}
