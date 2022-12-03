#include <iostream>
#include <string>
using namespace std;

string intToRoman(int numb) {

    string s, tolen = to_string(numb), nws;

    for (int n = tolen.length(); n > 0; n--)
    {
        nws += tolen[n-1];
    }

    for (int n = tolen.length(); n > 0; n--)
    {
        int num = (int)nws[n-1] - 48;
        switch (n)
        { 
            case 4:
                for (int i = num; i > 0; i--)
                    {
                        s += "M";
                    }
                break;
            case 3:
                res13:if (num > 5)
                {
                    if (num == 9)
                    {
                        s += "CM";
                    } else
                    {
                        s += "D";
                        num -= 5;
                        goto res13;
                    }
                } else if (num == 5)
                {
                    s += "D";
                } else
                {
                    if (num == 4)
                    {
                        s += "CD";
                    }
                    else
                    {
                        for (int i = num; i > 0; i--)
                        {
                            s += "C";
                        }
                    }
                }
                break;
            case 2:
                res23:if (num > 5)
                {
                    if (num == 9)
                    {
                        s += "XC";
                    } else
                    {
                        s += "L";
                        num -= 5;
                        goto res23;
                    }
                } else if (num == 5)
                {
                    s += "L";
                } else
                {
                    if (num == 4)
                    {
                        s += "XL";
                    }
                    else
                    {
                        for (int i = num; i > 0; i--)
                        {
                            s += "X";
                        }
                    }
                }
                break;
            case 1:
                res33:if (num > 5)
                    {
                        if (num == 9)
                        {
                            s += "IX";
                        } else
                        {
                            s += "V";
                            num -= 5;
                            goto res33;
                        }
                    } else if (num == 5)
                    {
                        s += "V";
                    } else
                    {
                        if (num == 4)
                        {
                            s += "IV";
                        }
                        else
                        {
                            for (int i = num; i > 0; i--)
                            {
                                s += "I";
                            }
                        }
                    }
                break;
            default:
                break;
        }
    }
    
    return s;
}

int main()
{
    int a;
    cin >> a;
    cout << endl << intToRoman(a) << endl;
}