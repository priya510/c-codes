//friend class
#include<iostream>
using namespace std;

class MyClass1
{
    private:
    int var;

    public:
    friend class MyClass2;
};

class MyClass2
{
    void show()
    {
        MyClass1 m1;
        m1.var=58;
        cout<<"var in Myclass2"<<m1.var<<endl;
    }
};

class MyClass3
{
    void show()
    {
        MyClass1 m1;
        m1.var=58;
        cout<<"var in Myclass2"<<<m1.var<<end;
    }
};


int main()
{
    Myclass2 m2;
    MyClass3 m3;

    m2.show();
    m3.show();
    return 0;
}
