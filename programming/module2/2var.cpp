#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Auto
{
private:
    string mark;
    string num;
    int year;
    string color;
public:
    Auto()
    {
        mark = "___";
        num = "_______";
        year = 0;
        color = "___";
    }
    Auto(string m, string n, int y, string c)
    {
        mark = m;
        num = n;
        year = y;
        color = c;
    }
    Auto(Auto& x)
    {
        mark = x.mark;
        num = x.num;
        year = x.year;
        color = x.color;
    }
    friend istream& operator >> (istream& is, Auto& x)
    {
        is >> x.mark >> x.num >> x.year >> x.color;
        return is;
    }
    friend ostream& operator << (ostream& os, const Auto& x)
    {
        os << x.mark << " " << x.num << " " << x.year << " " << x.color;
        return os;
    }
    bool correct()
    {
        int cb = 0, cn = 0;
        for (int i = 0; i < num.length(); i++)
        {
            if (isdigit(num[i]) == true)
            {
                cb++;
            } else cn++;
        }
        if (cb == 5 && cn == 2)
        {
            return 1;
        } else return 0;
    }
    bool operator < (const Auto& x) const
    {
        return year < x.year;
    }
    void markOut(Auto *arr, int n, string mrk)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i].mark == mrk)
            {
                cout << arr[i] << endl;
            }
        }
    }
    string maj(Auto *arr, int n)
    {
        string mrk;
        int temp = 0, perm = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && arr[i].mark == arr[j].mark)
                {
                    temp++;
                }
            }
            if (temp > perm)
            {
                perm = temp;
                mrk = arr[i].mark;
            }
            temp = 0;
        }
        return mrk;
    }
    void sepOut(Auto *arr, int n, string col, int st, int en)
    {
        for (int i = 0; i < n; i++)
        {
            if (arr[i].color == col)
            {
                if (arr[i].year >= st && arr[i].year <= en)
                    cout << arr[i] << endl;
            }
        }
    }
};

int main()
{
    fstream in;
    int p = 0, n = 0, ennd, start;
    Auto temp;
    string l, mark, color;
    in.open ("in.txt");
    while (getline(in, l)) p++;
    in.close();
    in.open ("in.txt");
    
    for (int i = 0; i < p; i++)
    {
        in >> temp;
        if (temp.correct() == true)
        {
            n++;
        }
    }
    in.close();
    in.open ("in.txt");
    Auto *arr = new Auto[n];
    int m = 0;
    for (int i = 0; i < p; i++)
    {
        in >> temp;
        if (temp.correct() == true)
        {
            arr[m] = temp;
            m++;   
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") " << arr[i] << endl;
    }
    cout << "Input mark: ";
    cin >> mark;
    arr[0].markOut(arr, n, mark);
    cout << arr[0].maj(arr, n) << endl;
    cout << "Input start year: ";
    cin >> start;
    cout << "Input end year: ";
    cin >> ennd;
    cout << "Input color: ";
    cin >> color;
    arr[0].sepOut(arr, n, color, start, ennd);
    in.close();
}