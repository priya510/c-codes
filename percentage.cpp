//WAP in c++ to accept three subjects from user and calculate percentage.
#include<iostream>
using namespace std;

int main()
{

    int m1,m2,m3;
    float sum,percentage;
    cout<<"Enter marks m1,m2,m3:"<<endl;
    cin>>m1>>m2>>m3;

    sum=m1+m2+m3;
    percentage=(sum*100)/3;

    cout<<"Percentage of three subjects="<<percentage;

    return 0;
}
