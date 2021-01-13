#include<iostream>
using namespace std;

int main()
{
    int arr[]={2,3,4,8};

    for(int i=0;i<=3;i++)
    {
        if(arr[i]%2==0)
            cout<<arr[i]<<endl;
    }
    return 0;
}
