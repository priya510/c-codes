#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    char* found=strstr("Hello","el");
    cout<<found<<endl;
    cout<<found-"Hello"+1<<endl;

    return 0;
}

