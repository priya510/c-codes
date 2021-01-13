//WAP in c++ to create an array with 5 values and print all positive numbers.

#include<iostream>
using namespace std;
int main()
{
    int arr[]={-1,-2,0,1,2};
    cout<<"Elements of array:"<<endl;
    for(int i=0;i<=4;i++)
    {
        if(arr[i]>0)
        {

            cout<<"The positive number is"<<endl;
            cout<< arr[i]<<endl;
        }

    }
}


