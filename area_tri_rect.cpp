//WAP in c++ to caluculate following:

//1) Area of triangle


#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int base,height;
    float area;
    cout<<"Enter the base and height:\n";
    cin>>base>>height;

    area=(0.5)*height*base;

    cout<<"Area of triangle: "<<area;
    return 0;
}




