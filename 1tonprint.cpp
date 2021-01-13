// WAP to accept a number from user and print 1....n.

#include<iostream>
using namespace std;
int main()
{
  	int Number, i;

  	cout<<"Please Enter any Integer Value :"<<endl;
  	cin>>Number;

  	cout<<"List of natural numbers from 1 to n:"<<Number<<endl;
	for(i = 1; i <= Number; i++)
  	{
    	cout<<i<<endl;
  	}

  	return 0;
}
