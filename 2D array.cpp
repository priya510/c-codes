// WAP to create two dimensional array. (3*2)

// 3 rows
// 2 columns and print it.


#include<iostream>
using namespace std;

int main()
{
    int arr[3][2];

    cout<<"Enter six numbers"<<endl;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cin>>arr[i][j];
        }
    }

    cout<<"\n printing all elements from array"<<endl;
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<arr[i][j]<<endl;
        }
    }

}
