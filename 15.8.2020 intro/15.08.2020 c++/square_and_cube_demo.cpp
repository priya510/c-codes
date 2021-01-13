//WAP in c++ to accept a number from user and display square and cube.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int s;
    cout<<"Enter any Number\n";
    cin>>s;

    cout<<"Square is "<<pow(s,2)<<"\n";
    cout<<"Cube is "<<pow(s,3);
    return 0;
}
