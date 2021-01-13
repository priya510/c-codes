//WAP in c++ to create an array with 5 values and print numbers stored at even index position.

//eg. arr[]={3,5,9,6,5};

//output:3 9 5


#include<iostream>
using namespace std;
int main()
{
    int arr[]={3,5,9,6,5,8};
    int length = sizeof(arr)/sizeof(arr[0]);
    cout<<"Elements of given array present on even position ln"<<endl;

    for(int i=0;i<length;i=i+2)
    {

           cout<< arr[i]<<endl;

    }
    return 0;
}

