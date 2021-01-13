//WAP to accept a number from user between 1 and 2. print following.
/*
    1. English language selected
    2. Hindi language selected
    otherwise invalid option
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number between 1 and 2"<<endl;
    cin>>n;

    switch(n)
    {
        default:
            cout<<"Invalid Option selected!!!"<<endl;
            break;
        case 2:
            cout<<"English language selected"<<endl;
            break;
        case 1:
            cout<<"Hindi language selected"<<endl;
            break;
    }
    return 0;
}
