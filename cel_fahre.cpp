//WAP in c++ to accept celsius from user and convert into fahrenheit.

#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"Enter the temp in celsius:\n";
    cin>>c;

    f=c*9/5+32;
    //c=(f-32)*5/9;

    cout<<"convert celsius to Fahrenheit: "<<f;
}
