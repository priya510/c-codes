#include<iostream>
using namespace std;

class Employee
{
    public:             //access specifier
    int employeeid;
    string employeename;
};

int main()
{
    //e1, e2 are objects of employee
    Employee e1,e2;

    e1.employeeid=123;
    e1.employeename="Sagar";

    e2.employeeid=124;
    e2.employeename="Sahil";

    cout<<"\n=========Employee Details 1==========\n";
    cout<<"Employee Id: "<<e1.employeeid<<endl;
    cout<<"Employee Name: "<<e1.employeename<<endl;

    cout<<"\n==========Employee Details 2========\n";
    cout<<"Employee Id: "<<e2.employeeid<<endl;
    cout<<"Employee Name: "<<e2.employeename<<endl;

    return 0;
}
