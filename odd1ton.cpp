// WAP to accept a number from user and print all odd numbers between 1 to n.


#include<iostream>
using namespace std;
int main()
{
  	int i, number;

  	cout<<" Please Enter the Maximum Limit Value :  "<<endl;
  	cin>>number;

  	cout<<" Odd Numbers between 1 to number : \n"<< number<<endl;
  	for(i = 1; i <= number; i++)
  	{
    	if ( i % 2 != 0 )
    	{
  			cout<<i<<endl;
    	}
  	}

  	return 0;
}
