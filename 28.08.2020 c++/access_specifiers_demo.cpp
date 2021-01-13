/*
    Access Specifiers:
        1) private (Bydefault all variables and functions in c++ are private)
        2) public
        3) protected
*/
#include<iostream>
using namespace std;

class MyClass1
{
    protected:
        int var;
};

class MyClass3 : public MyClass1
{
    void show()
    {
        var=51;
        cout<<var;
    }
};

class MyClass2
{
    void show()
    {
        MyClass1 m1;
        m1.var=50;
        cout<<m1.var;
    }
};


int main()
{
    MyClass2 m2;
    m2.show();

    MyClass3 m3;
    m3.show();
    return
}
