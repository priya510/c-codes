/*
    OOPS - Object Oriented Programming System
*/

#include<iostream>
using namespace std;

class Employee
{
    public:
    int var;

    public:
    void show()
    {
        cout<<"show function invoked!!!"<<endl;
    }

    public:
    //Constructor and class name should be same
    //Constructor don't have any return type.
    Employee()
    {
        cout<<"constructor invoked!!!"<<endl;
    }

    Employee(int a)
    {
        var =a;
    }

    //To create destructor use ~ (tilde) sign
    //We can one destructor
    //It will destroy all memories created by
    //default and parameterized constructor.
    ~Employee()
    {
        cout<<"destructor invoked!!!"<<endl;
    }
};
int main()
{
    Employee e1;
    e1.show();
    return 0;
}
