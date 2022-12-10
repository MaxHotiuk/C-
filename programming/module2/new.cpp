#include <iostream>
#include <string>

using namespace std;

class A{
    char I;
    public:
        A():I('a'){};
    public:
        void print(){cout<<I;}
};


int main()
{
    A a1;
    a1.print();
}