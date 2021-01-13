// WAP to accept two numbers from user m and n. Display series from m to n.

//	m=2 n=9


#include <iostream>
using namespace std;
int main()
{
    int m,n,i;

	cout << " Input a number of m and n: "<<endl;
	cin>> m>>n;
    cout << " The series are:\n"<<endl;
    for( i = 2; i <= 9; i++)
    {
        cout << i << endl;

    }
     return 0;
}

