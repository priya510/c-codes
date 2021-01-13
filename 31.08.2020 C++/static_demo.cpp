#include<iostream>
using namespace std;

//static means memory is fixed
void display()
{
    static int i=0;
    i++;
    cout<<i<<endl;
}

int main()
{
    display();
    display();
    display();
    return 0;
}
