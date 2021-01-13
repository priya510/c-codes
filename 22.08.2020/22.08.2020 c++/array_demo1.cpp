/*
    WAP to accept three names from user
    and store in array.
*/

#include<iostream>
using namespace std;

int main()
{
    string names[3];
    cout<<"Enter three names"<<endl;
    for(int i=0;i<=2;i++)
    {
        cin>>names[i];
    }

    cout<<"\nPrinting values from existing array\n";
    for(int i=0;i<=2;i++)
    {
        cout<<names[i]<<endl;
    }
}
