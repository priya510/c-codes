//Operator overloading
#include<iostream>
using namespace std;

class Distance
{
    public:
    int a,b,c;

    Distance(int a,int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }

    Distance operator--()
    {
        --a;
        --b;
        --c;
        return Distance(a,b,c);
    }
};

int main()
{
    Distance d1(5,6,7);
    --d1;

    Distance d2(5,6,7);
    --d2;

    Distance d3(5,6,7);
    --d3;

    cout<<"\nDistance 1\n";
    cout<<d1.a<<endl;
    cout<<d1.b<<endl;
    cout<<d1.c<<endl;

    cout<<"\nDistance 2\n";
    cout<<d2.a<<endl;
    cout<<d2.b<<endl;
    cout<<d2.c<<endl;

    cout<<"\nDistance 3\n";
    cout<<d3.a<<endl;
    cout<<d3.b<<endl;
    cout<<d3.c<<endl;
    return 0;
}
