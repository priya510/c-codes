/*
    WAP to store square of first 10 natural numbers
    in array and print.
*/

#include<iostream>
using namespace std;

int main()
{
    int square[10],i;

    for(i=0;i<10;i++)
    {
        square[i]=(i+1)*(i+1);
    }

    for(i=0;i<10;i++)
    {
        cout<<square[i]<<endl;
    }

    return 0;
}
