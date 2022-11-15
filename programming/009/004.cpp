#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;

struct goods
{
    string name, art;
    int qun, val;

};

goods inputcmd(string name)
{
    goods good;
    cout << "Input name of " << name << " ";
    cin >> good.name;
    cout << "Input value of " << name << " ";
    cin >> good.val;
    cout << "Input quantity of " << name << " ";
    cin >> good.qun;
    cout << "Input art of " << name << " ";
    cin >> good.art;
    return good;
}

goods inputfile(fstream& f)
{
    goods good;
    f >> good.name >> good.art >> good.val >> good.qun;
    return good;
}

string out(goods good)
{
    string s = "Name " + good.name + " Val " + to_string(good.val) + " Quantity " + to_string(good.qun) + " Art " + good.art;
    return s;
}
int main()
{
    int n;
    goods first = inputcmd("First"), second, third, forth;
    cout << out(first) << endl;
    fstream file;
    file.open ("text.txt");
    file << n;
    second = inputfile(file);
    third = inputfile(file);
    forth = inputfile(file);
    file.close();
    cout << out(second) << endl;
    cout << out(third) << endl;
    cout << out(forth) << endl;
}