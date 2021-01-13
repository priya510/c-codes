//WAP in cpp to accept fahrenheit from user and convert into celsius.
//c=(f-32)*5/9

#include<iostream>
using namespace std;

int main()
{
    float f,c;
    cout<<"Enter the temp in fahrenheit:\n";
    cin>>f;

    c=(f-32)*5/9;

    cout<<"celsius: "<<c;
}
