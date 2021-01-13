//WAP in c++ to accept amount from user and check whether amount is greater than 7000 then print 5% discount.

#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int amt,disc;
    cout<<"enter amount:"<<endl;
    cin>>amt;

    if(amt>7000)
    {
        disc=(amt)*5/100;
        cout<<"5% discount="<<disc;

    }

    else
    {
        cout<<"No discount"<<endl;
    }

}
