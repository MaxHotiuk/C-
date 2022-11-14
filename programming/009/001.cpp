#include <iostream>
#include <string>
#include <math.h>
using namespace std;

struct vec
{
    double x;
    double y;
};

vec input(string num)
{
    cout << endl << "Coordinstes of vec " << num;
    vec vect;
    cout << endl << "Input x: ";
    cin >> vect.x;
    cout << endl << "Input y: ";
    cin >> vect.y;
    return vect;
}

string printvec(vec vect, string num)
{
    int x = vect.x;
    int y = vect.y;
    string s = "Vec " + num + " " + "(" + to_string(x) + "; " + to_string(y) + ")";
    return s;
}

vec sum(vec vec1, vec vec2)
{
    vec vecs;
    vecs.x = vec1.x + vec2.x;
    vecs.y = vec1.y + vec2.y;
    return vecs;
}
double dob(vec vec1, vec vec2)
{
    double dob;
    dob = vec1.x * vec2.x + vec1.y * vec2.y;
    return dob;
}
double norm(vec vect)
{
    double norm = sqrt(pow(vect.x, 2) + pow(vect.y, 2));
    return norm;
}
int main()
{
    const int n = 3;
    vec vect, vec2;
    vect = input("1");
    vec2 = input("2");
    cout << printvec(vect, "1") << endl;
    vec vec3 = sum(vect, vec2);
    cout << printvec(vec2, "2") << endl << printvec(vec3, "3") << endl;
    cout << "Dob: " << dob(vec2, vec3) << endl;
    vec arr[n];
    arr[0] = vect;
    arr[1] = vec2;
    arr[2] = vec3;
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << printvec(arr[i], to_string(i)) << " ";
    }
    cout << endl;
    vec summ;
    for (int i = 0; i < n; i++)
    {
        summ = sum(summ, arr[i]);
    }
    cout << printvec(summ, "Summ") << endl;
    double nrm = norm(arr[0]);

    for (int i = 1; i < n; i++)
    {
        if (norm(arr[i]) > nrm)
        {
            nrm = norm(arr[i]);
        }
    }
    cout << "Max norm = " << nrm;

}