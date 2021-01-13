#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    //ASCII - American Standard Code For INformation Interchange.
    //a     - 97
    //A     - 65

    //strcmp gives three answers
    //0  - values matched
    //1  - first value ascii is greater than second
    //-1 - first value ascii is smaller than second

    if(strcmp("sunday","sunday")==0)
    {
        cout<<"values are matched!!!";
    }
    return 0;
}
