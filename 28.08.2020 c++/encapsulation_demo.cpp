#include<iostream>
using namespace std;

class Employee
{
    private:
    int employeeid;
    int age;

    public:
    void setAge(int a)
    {
        if(a>=18 && a<=60)
            age=a;
        else
            cout<<"invalid age"<<endl;
    }

    void setEmployeeId(int id)
    {
        employeeid=id;
    }

    int getAge()
    {
        return age;
    }

    int getEmployeeId()
    {
        return employeeid;
    }

};

int main()
{
    Employee e1;
    e1.setEmployeeId(123);
    e1.setAge(29);

    cout<<"Employee id: "<<e1.getEmployeeId()<<endl;
    cout<<"Employee age: "<<e1.getAge()<<endl;
    return 0;
}
