/*
    Two-Dimensional array
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[2][2];

    cout<<"Enter four numbers"<<endl;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"\nprinting all elements from array"<<endl;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }

}
