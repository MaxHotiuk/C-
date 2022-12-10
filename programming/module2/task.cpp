#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student
{
private:
    string name;
    string surname;
    string sex;
    string clas;
public:
    Student()
    {
        name = "___";
        surname = "___";
        sex = "___";
        clas = "__";
    }
    Student(string n, string s, string sx, string c)
    {
        name = n;
        surname = s;
        sex = sx;
        clas = c;
    }
    Student(const Student& x)
    {
        name = x.name;
        surname = x.surname;
        sex = x.sex;
        clas = x.clas;
    }
    friend istream& operator >> (istream& is, Student& x)
    {
        is >> x.surname >> x.name >> x.sex >> x.clas;
        return is;
    }
    friend ostream& operator << (ostream& os, const Student& x)
    {
        os << x.surname << " " << x.name << " " << x.sex << " " << x.clas;
        return os;
    }
    bool operator < (const Student& x) const
    {
        if (surname != x.surname)
        {
            return surname < x.surname;
        }
        else return name < x.name;
    }
    bool operator == (const Student& x) const
    {
        if (name == x.name)
        {
            return 1;
        } else return 0;
    }
    bool areTesk(Student *arr, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j != i && arr[j] == arr[i])
                {
                    return 1;
                }
            }
        }
        return 0;
    }

    void maj(Student *arr, int n)
    {
        int m = 0, f = 0; 
        for (int i = 0; i < n; i++)
        {
            if (arr[i].sex == "male")
            {
                m++;
            } else if (arr[i].sex == "female")
            {
                f++;
            }
        }
        if (m > f)
        {
            cout << "The majority are male" << endl;
        } else if (m < f) 
        {
            cout << "The majority are male" << endl;
        } else cout << "The same count" << endl;

    }
    void search(Student *arr, int n, char b, string cls)
    {
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i].clas == cls && arr[i].surname[0] == b)
            {
                cout << arr[i] << endl;
                count++;
            }
        }
        if (count == 0)
        {
            cout << "There are no students in class " << cls << " thoose name starts with '" << b << "'/n";
        }
    }
    void sortSt(Student *arr, int n)
    {
        int pass = 0;
        Student temp;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        pass++;
        }
    }
    
}; 

int main()
{
    fstream in;
    int n;
    string l, cls;
    char b;
    in.open ("data.txt");
    while (getline(in, l)) n++;
    in.close();
    in.open ("data.txt");

    Student *arr = new Student[n];

    for (int i = 0; i < n; i++)
    {
        in >> arr[i];
    }

    arr[0].sortSt(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ") " << arr[i] << endl;
    }
    cout << "Are there students with same names? " << arr[0].areTesk(arr, n) << endl;
    arr[0].maj(arr, n);
    cout << "Input search letter (must be capital) ";
    cin >> b;
    cout << "Input search class ";
    cin >> cls;
    arr[0].search(arr, n, b, cls);
    
    in.close();
}