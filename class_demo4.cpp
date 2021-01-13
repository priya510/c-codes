//Function Overloading/Static Polymorphism
//Same function name but different parameters/signature/


#include<iostream>
using namespace std;

//Parameters are also called signature of a function.
void add(int a,int b)
{
    cout<<"Addition: "<<a+b<<endl;
}

void add(int a,int b,int c)
{
    cout<<"Addition: "<<a+b+c<<endl;
}

void add(float a,float b,float c)
{
    cout<<"Addition: "<<a+b+c<<endl;
}

int main()
{
    add(2.1f, 3.0f, 9.6f);
    return 0;
}


