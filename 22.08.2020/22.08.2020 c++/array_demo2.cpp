/*
    WAP to store first 10 natural numbers
    in array and print.
*/

#include<iostream>
using namespace std;

int main()
{
    int arr[10];

    for(int i=0;i<=9;i++)
    {
        arr[i]=i+1;
    }

    cout<<"\nprint all array elements"<<endl;
    for(int i=0;i<=9;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}
