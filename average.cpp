//WAP in c++ to accept three numbers from user and calculate average.

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,sum;
    float avg;
    cout<<"Enter the value of a,b,c:\n"<<endl;
    cin>>a>>b>>c;
    sum=a+b+c;
    avg=sum/3;
    cout<<"Average of three number is:"<<avg;

    return 0;

}
