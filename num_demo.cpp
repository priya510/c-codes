//WAP in c++ to accept a number from user and check whether it is positive,
//negative or zero.
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number:\n";
    cin>>num;

    if(num>0)
        cout<<"number is postive";
    else if(num<0)
        cout<<"number is negative";
    else
        cout<<"number is zero";
}
