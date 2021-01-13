/*WAP in c++ to accept employeename,salary and age.
Use encapsulation with following conditions:


	employeename should contain minimum 4  and maximum 8 characters.
	salary should between 15000 to 150000
	age>=18 and age<=60               */

#include<iostream>
using namespace std;

class Employee
{
    private:
    string employeename;
    float salary;
    int age;

    public:

    void setname(char c)
    {
        if(c>=4 && c<=8)
            employeename=c;
        else
            cout<<"invalid name"<<endl;
    }


    void setAge(int a)
    {
        if(a>=18 && a<=60)
            age=a;
        else
            cout<<"invalid age"<<endl;
    }

    void setEmpsalary(int sal)
    {
        if(sal>15000 && sal<=150000)
            salary=sal;
        else
            cout<<"invalid"<<endl;

    }

    string getname()
    {
        return employeename;
    }

    int getAge()
    {
        return age;
    }


    int getsalary()
    {
        return salary;
    }



};

int main()
{
    Employee e1;
    e1.setname('priya');
    e1.setAge(29);
    e1.setEmpsalary(100000);

    cout<<"Employee name: "<<e1.getname()<<endl;
    cout<<"Employee age: "<<e1.getAge()<<endl;
    cout<<"Employee salary:"<<e1.getsalary()<<endl;
    return 0;
}
