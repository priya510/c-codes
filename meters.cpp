//IPO Questions:

//WAP in c++ to accept meters from user and convert into kilometers and centimeters.
#include<iostream>
using namespace std;


int main()
{
    int m,km,cm;
    cout<<"Enter the meters:"<<endl;
    cin>>m;

    km=1000/m;
    cm=m*100;

    cout<<"meter to kilometer:"<<km<<endl;
    cout<<"meter to centimeter:"<<cm;

}


