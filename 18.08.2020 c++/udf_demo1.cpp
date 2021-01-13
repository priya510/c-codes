/*
    Function Demo
    UDF (User Defined Function)
*/

#include<iostream>
using namespace std;

//Function without parameter.
void message()
{
    cout<<"hello world"<<endl;
}

//Function with parameter.
void square(int n)
{
    cout<<n*n<<endl;
}

//Function with two parameters.
void add(int a,int b)
{
    cout<<a+b<<endl;
}

//Function with return type
int cube(int c)
{
    return c*c*c;
}

int main()
{
    message();
    square(8);
    square(9);
    add(2,3);
    add(2,9);
    int ans=cube(5);
    cout<<"Cube: "<<ans<<endl;
    return 0;
}
