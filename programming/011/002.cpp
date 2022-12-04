#include <iostream>
#include <string>
#include <fstream>
#include<limits>

using namespace std;

class Passenger
{
private:
    string surname;
    string name;
    int age;
    string from;
    string to;
    int cost;
public:
    Passenger()
    {
        surname = "___";
        name = "___";
        age = 0;
        from = "___";
        to = "___";
        cost = 0;
    }
    Passenger(string s, string n, int a, string f, string t, int c = 0)
    {
        surname = s;
        name = n;
        age = a;
        from = f;
        to = t;
        cost = c;
    }
    Passenger(const Passenger& x)
    {
        surname = x.surname;
        name = x.name;
        age = x.age;
        from = x.from;
        to = x.to;
        cost = x.cost;
    }
    friend istream& operator >> (istream& is, Passenger& x)
    {
        is >> x.surname >> x.name >> x.age >> x.from >> x.to >> x.cost;
        return is;
    }
    friend ostream& operator << (ostream& os, const Passenger& x)
    {
        os << x.surname << " " << x.name << " " << x.age << " " << x.from << " " << x.to << " " << x.cost;
        return os;
    }
    bool operator > (const Passenger& x) const
    {
        int i = 0;
        while (i < min(surname.length(), x.surname.length()))
        {
            if (surname[i] != x.surname[i])
            {
                return (surname[i] > x.surname[i]);
            }
            i++;
        }
        if (surname.length() > x.surname.length())
        {
            return 1;
        } else if (surname.length() == x.surname.length())
        {
            int i = 0;
            while (i < min(name.length(), x.name.length()))
            {
                if (name[i] != x.name[i])
                {
                    return (name[i] > x.name[i]);
                }
                i++;
            }
        }
        return 0;
    }
    bool operator < (const Passenger& x) const
    {
        int i = 0;
        while (i < min(surname.length(), x.surname.length()))
        {
            if (surname[i] != x.surname[i])
            {
                return (surname[i] < x.surname[i]);
            }
            i++;
        }
        if (surname.length() < x.surname.length())
        {
            return 1;
        } else if (surname.length() == x.surname.length())
        {
            int i = 0;
            while (i < min(name.length(), x.name.length()))
            {
                if (name[i] != x.name[i])
                {
                    return (name[i] < x.name[i]);
                }
                i++;
            }
        }
        return 0;
    }
    void youngest(Passenger *arr, int n, int &num)
    {
        for (int p = 0; p < n; p++)
        {
            if (arr[p].age < arr[num].age)
            {
                num = p;
            }
        }
    }

    void mostExp(Passenger *arr, int n, int &cst)
    {
        for (int p = 0; p < n; p++)
        {
            if (arr[p].cost > arr[cst].cost)
            {
                cst = p;
            }
        }
    }
    void vart(Passenger *arr, int n, int &zah, string punct)
    {
        for (int p = 0; p < n; p++)
        {
            if (arr[p].to == punct)
            {
                zah += arr[p].cost;
            }
        }
    }
    void kilc(Passenger *arr, int n)
    {
        for (int p = 0; p < n; p++)
        {
            int sum = 1;
            for (int i = 0; i < n; i++)
            {
                if (p != i && arr[p].from == arr[i].from)
                {
                    sum += 1;
                    arr[i].from = " ";
                }
            }
            if (arr[p].from != " ")
                cout << arr[p].from << " " << sum << endl;
        }
    }
};

void sortPass(Passenger *a, int n)
{
    int i, j, pass = 0;
    Passenger temp;
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[i]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    pass++;
    }
}

int main()
{
    int n = 3, num = 0, cst = 0, zah = 0, half;
    string line, punct;
    Passenger a;
    fstream in;

    in.open ("in.txt");
    while (getline(in, line)) n++;
    in.close();

    in.open ("in.txt");

    half = n - 3;

    Passenger *arr = new Passenger[n];

    for (int i = 0; i < n; i++)
    {
        in >> arr[i];
    }

    sortPass(arr, n);
    for (int i = 0; i < half; i++)
    {
        cout << i + 1 << ") " << arr[i] << endl;
    }
    arr[0].youngest(arr, half, num);
    arr[0].mostExp(arr, half, cst);
    cout << "The youngest passenger: " << arr[num] << endl;
    cout << "The most expensive: " << arr[cst] << endl;
    cout << "Input punct prubuttja: ";
    cin >> punct;
    arr[0].vart(arr, half, zah, punct);
    cout << "Zahalna summa do zjogo punkty: " << zah << endl;
    arr[0].kilc(arr, half);

    in.close();
}