/*
    Constructor
        Constructor is used to create a memory of a class
        and to initialize member variables.
*/
#include<iostream>
using namespace std;

class Employee
{
    public:
    int employeeid;
    int age;

    //Default Constructor
    Employee()
    {

    }

    //Parameterized Constructor
    Employee(int employeeid,int age)
    {
        this->employeeid=employeeid;
        this->age=age;
    }
};

int main()
{
    Employee e1;        //Bydefault it will take garbage value
    Employee e2(124,48);
    Employee e3(125,49);

    cout<<"\n=======Employee 1======\n"<<endl;
    cout<<"Employee Id: "<<e1.employeeid<<endl;
    cout<<"Employee Age: "<<e1.age<<endl;

    cout<<"\n=======Employee 2======\n"<<endl;
    cout<<"Employee Id: "<<e2.employeeid<<endl;
    cout<<"Employee Age: "<<e2.age<<endl;

    cout<<"\n=======Employee 3======\n"<<endl;
    cout<<"Employee Id: "<<e3.employeeid<<endl;
    cout<<"Employee Age: "<<e3.age<<endl;

    return 0;
}
