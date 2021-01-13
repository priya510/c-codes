//Friend Function

#include<iostream>
using namespace std;

class MyClass1
{
    private:
    int var;

    public:
    friend void display();
};

void display()
{
    MyClass1 m1;
    m1.var=56;
    cout<<"var in display"<<m1.var<<endl;
}

void show()
{
    MyClass1 m1;
    m1.var=56;
    cout<<"var in show"<<m1.var<<endl;
}

int main()
{
    display();
    show();
    return 0;
}
