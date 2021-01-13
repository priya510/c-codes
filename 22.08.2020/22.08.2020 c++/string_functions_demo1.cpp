#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr1[]={"Hello"};
    char arr2[]={};

    strcpy(arr2,arr1);

    cout<<arr1<<endl;
    cout<<arr2<<endl;
    return 0;
}

