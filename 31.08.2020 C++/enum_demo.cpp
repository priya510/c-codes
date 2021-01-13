#include<iostream>
using namespace std;

enum Department
{
    HR=1,SAlES=2,ADMIN=4,IT=3
};

void departmentOperation(Department dep)
{
    if(dep==1)
    {
        cout<<"department is 1";
    }
    else
    {
        cout<<"other department";
    }
}

int main()
{
    departmentOperation(HR);
    return 0;
};
