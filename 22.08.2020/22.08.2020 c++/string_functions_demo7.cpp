#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char* found=strchr("Hello",'l');
    cout<<found-"Hello"+1;

    return 0;
}

