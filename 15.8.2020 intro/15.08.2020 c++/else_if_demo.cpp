//WAP in c++ to accept age from user and check whether
//it is greater than or equal to 18 and print message.

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"Enter your age"<<endl;
    cin>>age;

    if(age>=1 && age<=17)
    {
        cout<<"Age is not valid to become an employee. Please try after 18"<<endl;
    }
    else if(age>=18 && age<=60)
    {
        cout<<"Valid Employee"<<endl;
    }
    else
    {
        cout<<"Age is not valid to become an employee in this company"<<endl;
    }
    return 0;
}
