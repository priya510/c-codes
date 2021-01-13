//Create Calculator

/*Enter two no's
2
3

======MENU======
1. Add
2. Sub
3. Div
4. Mul

1
Addition: 5
Do you want to continue with this app?
yes
*/

#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter a and b:"<<endl;
    cin>>a>>b;

    cout<<"Addition of 2 no.s is:"<<a+b<<endl;
    cout<<"Do you want to continue with this app?"<<endl;
    cin>>c;
    cout<<"Addition of 2 no.s is:"<<a+b<<endl;
    cout<<"subtraction of 2 no.s is:"<<a-b<<endl;
    cout<<"Division of 2 no.s is:"<<a/b<<endl;
    cout<<"Multiplication of 2 no.s is:"<<a*b<<endl;

}

