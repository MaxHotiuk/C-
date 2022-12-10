#include <iostream>
using namespace std;

int maxDil(int a, int b)
{
    int temp = 1;
    for (int i = 0; i <= min(a,b); i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            temp = i;
        }
    }
    return temp;
}

class RationalNum
{
private:
    int a;
    int b;
public:
    RationalNum()
    {
        a = 0;
        b = 1;
    }
    RationalNum(int x, int y = 1)
    {
        a = x;
        b = y;
    }
    RationalNum(const RationalNum& x)
    {
        a = x.a;
        b = x.b;
    }
    bool correct()
    {
        return b != 0;
    }
    void simp()
    {
        int temp = maxDil(a, b);
        a /= temp;
        b /= temp;
    }
    friend ostream& operator << (ostream& os, const RationalNum& x)
    {
        os << x.a << " / " << x.b;
        return os;
    }
    friend istream& operator >> (istream& is, RationalNum& x)
    {
        is >> x.a >> x.b;
        return is;
    }
    friend RationalNum operator + (const RationalNum& x, const RationalNum& y)
    {
        RationalNum sum;
        sum.a = x.a * y.b + y.a * x.b;
        sum.b = x.b * y.b;
        sum.simp();
        return sum;
    }
    friend RationalNum operator - (const RationalNum& x, const RationalNum& y)
    {
        RationalNum div;
        div.a = x.a * y.b - y.a * x.b;
        div.b = x.b * y.b;
        div.simp();
        return div;
    }
    bool operator == (const RationalNum& x) const
    {
        bool iff = false;
        if (a == x.a && b == x.b) iff = true;
        return iff;
    }
    bool operator > (const RationalNum& x) const
    {
        return a * x.b > b * x.a;
    }
    bool operator >= (const RationalNum& x) const
    {
        return a * x.b >= b * x.a;
    }
    bool operator <= (const RationalNum& x) const
    {
        return a * x.b <= b * x.a;
    }
    bool operator < (const RationalNum& x) const
    {
        return a * x.b < b * x.a;
    }
    RationalNum operator -- (int) const
    {
        RationalNum rem(*this);
        return rem - 1;
    }
    RationalNum operator ++ (int) const
    {
        RationalNum rem(*this);
        return rem + 1;
    }
    RationalNum operator -- () const
    {
        RationalNum(a - b, b);
        return *this;
    }
    RationalNum operator ++ () const
    {
        RationalNum(a + b, b);
        return *this;
    }
    RationalNum operator += (int num)
    {
        RationalNum rem(*this);
        *this = rem;
        return *this;
    }
};

int main()
{
    RationalNum number, number2;
    cout << "input chyselnyk i znamennyk: ";
    cin >> number;
    cout << "input chyselnyk i znamennyk: ";
    cin >> number2;
    if (number.correct() == true && number2.correct() == true) cout << number + number2 << endl;
    else cout << endl << "Number is not rational." << endl;
    cout << (number > number2) << endl;
    cout << (number) << endl;
    ++number;
    cout << (number) << endl;
}