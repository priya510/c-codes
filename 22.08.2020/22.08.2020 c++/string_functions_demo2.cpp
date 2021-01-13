#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char arr1[]={"Hello"};
    char arr2[]={" World"};

    strcat(arr1,arr2);

    cout<<arr1<<endl;
    return 0;
}

