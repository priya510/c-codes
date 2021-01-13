#include<iostream>
using namespace std;

class Math
{
    public:
    void square(int n)
    {
        cout<<"Square: "<<n*n<<endl;
    }

    void cube(int n)
    {
        cout<<"Cube: "<<n*n*n<<endl;
    }
};

int main()
{
    //object of a class
    Math m;
    m.square(2);
    m.cube(3);
    return 0;
}
